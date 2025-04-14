#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateVars(){
    username = ui->e_username->text();
    if(!QRegularExpression("^[A-z]{1, 15}$").match(username).hasMatch()){
        throw QString("Имя пользователя введено некорректно");
    }

    fio = ui->e_fio->text();
    if(!QRegularExpression("^[А-Я][а-я]{1,14}+\\s[А-Я][а-я]{1,14}+\\s[А-Я][а-я]{1,14}+$").match(fio).hasMatch()){
        throw QString("ФИО введено некорректно");
    }

    gender = ui->r_male->isChecked() ? "Мужской" : ui->r_female->isChecked() ? "Женский" : "unknown";
    if(gender == "unknown"){
        throw QString("Выберите пол");
    }

    passport = ui->e_passport->text();
    passportMatch = QRegularExpression("^([0-9]{4})\\s([0-9]{6})$").match(passport);
    if(!passportMatch.hasMatch()){
        throw QString("Паспорт введен некорректно");
    }

    birth = ui->e_birth->text();
    birthMatch = QRegularExpression("^(0[1-9]|[12][0-9]|3[01])\\.(0[1-9]|1[0-2])\\.(19|20)(\\d{2})$").match(birth);
    if (!birthMatch.hasMatch()) {
        throw QString("Дата рождения введена некорректно");
    }

    phone = ui->e_phone->text();
    if(!QRegularExpression("^\\+7\\-\\d\\d\\d-\\d\\d\\d-\\d\\d-\\d\\d$").match(phone).hasMatch()){
        throw QString("Номер введен некорректно");
    }

    email = ui->e_email->text();
    if(!QRegularExpression("^(?=.{4,20}$)([A-z0-9]+\\@[A-z0-9]+\\.[A-z0-9]+)$").match(email).hasMatch()){
        throw QString("Почта введена некорректно");
    }
}

void MainWindow::on_b_register_clicked()
{
    QStringList months = {
        "", "января", "февраля", "марта", "апреля", "мая", "июня",
        "июля", "августа", "сентября", "октября", "ноября", "декабря"
    };

    try{
        updateVars();

        QStringList fioParts = fio.split(" ");
        QString lastName = fioParts[0];
        QString firstName = fioParts[1];
        QString patronymic = fioParts[2];

        QString passportSeries = passportMatch.captured(1);
        QString passportNumber = passportMatch.captured(2);

        QString day = birthMatch.captured(1);
        QString month = birthMatch.captured(2);
        QString year = birthMatch.captured(3) + birthMatch.captured(4);
        int monthIndex = month.toInt();
        QString formattedBirth = QString("%1 %2 %3").arg(day, months[monthIndex], year);

        QMessageBox::information(this, QString("Успех"), QString("Вы успешно зарегистрировали аккаунт %1. Ваше имя: %2, ваша фамилия: %3, ваше отчество: %4. Ваш пол: %5. Серия Вашего паспорта: %6, номер: %7. Вы родились %8. Ваш номер телефона: %9. Ваш email: %10. Спасибо за регистрацию!")
                                                        .arg(username, firstName, lastName, patronymic, gender, passportSeries, passportNumber, formattedBirth, phone, email));

    }catch(QString message){
        QMessageBox::warning(this, QString("Ошибка"), message);
    }

}


void MainWindow::on_b_import_clicked()
{
    try{
        QString fileName = QFileDialog::getOpenFileName(this, "Открыть файл", "", "Text (*.txt)");
        if(fileName.isEmpty()){
            throw QString("Вы не выбрали файл");
        }

        QFile file(fileName);
        if(!file.open(QIODevice::ReadOnly)){
            throw QString("Не удалось открыть файл");
        }

        QTextStream ts(&file);

        QString line;
        QStringList list;

        while(ts.readLineInto(&line)){
            list.append(line);
        }

        username = list[0];
        fio = list[1];
        gender = list[2];
        passport = list[3];
        birth = list[4];
        phone = list[5];
        email = list[6];

        ui->e_username->setText(username);
        ui->e_fio->setText(fio);
        ui->r_male->setChecked(gender == "Мужской");
        ui->r_female->setChecked(gender == "Женский");
        ui->e_passport->setText(passport);
        ui->e_birth->setText(birth);
        ui->e_phone->setText(phone);
        ui->e_email->setText(email);

        file.close();

        QMessageBox::information(this, "Успех", "Данные импортированы");

    }catch(QString message){
        QMessageBox::warning(this, "Ошибка", message);
    }
}


void MainWindow::on_b_export_clicked()
{
    try{
        updateVars();

        QString fileName = QFileDialog::getSaveFileName(this, "Сохранить файл", "", "Text (*.txt)");
        if(fileName.isEmpty()){
            throw QString("Вы не выбрали файл");
        }

        QFile file(fileName);
        if(!file.open(QIODevice::WriteOnly)){
            throw QString("Не удалось открыть файл");
        }

        QTextStream ts(&file);

        ts << username << "\n" << fio << "\n" << gender << "\n" << passport << "\n" << birth << "\n" << phone << "\n" << email;

        file.close();

        QMessageBox::information(this, "Успех", "Файл сохранен");
    }catch(QString message){
        QMessageBox::warning(this, "Ошибка", message);
    }
}

