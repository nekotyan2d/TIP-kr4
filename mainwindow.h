#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QMessageBox>
#include <QTextStream>
#include <QFile>
#include <QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void updateVars();
private slots:
    void on_b_register_clicked();

    void on_b_import_clicked();

    void on_b_export_clicked();

private:
    Ui::MainWindow *ui;

    QString username;
    QString fio;
    QString gender;
    QString passport;
    QString birth;
    QString phone;
    QString email;

    QRegularExpressionMatch passportMatch;
    QRegularExpressionMatch birthMatch;
};
#endif // MAINWINDOW_H
