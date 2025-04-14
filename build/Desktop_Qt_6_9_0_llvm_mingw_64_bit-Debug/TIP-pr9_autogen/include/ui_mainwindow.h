/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout;
    QPushButton *b_import;
    QPushButton *b_export;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *e_username;
    QLabel *label_2;
    QLineEdit *e_fio;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QRadioButton *r_male;
    QRadioButton *r_female;
    QLabel *label_4;
    QLineEdit *e_passport;
    QLabel *label_6;
    QLineEdit *e_birth;
    QLabel *label_7;
    QLineEdit *e_phone;
    QLabel *label_5;
    QLineEdit *e_email;
    QPushButton *b_register;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_8);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        b_import = new QPushButton(centralwidget);
        b_import->setObjectName("b_import");

        horizontalLayout->addWidget(b_import);

        b_export = new QPushButton(centralwidget);
        b_export->setObjectName("b_export");

        horizontalLayout->addWidget(b_export);


        verticalLayout_2->addLayout(horizontalLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        e_username = new QLineEdit(centralwidget);
        e_username->setObjectName("e_username");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, e_username);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        e_fio = new QLineEdit(centralwidget);
        e_fio->setObjectName("e_fio");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, e_fio);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        r_male = new QRadioButton(centralwidget);
        r_male->setObjectName("r_male");

        verticalLayout->addWidget(r_male);

        r_female = new QRadioButton(centralwidget);
        r_female->setObjectName("r_female");

        verticalLayout->addWidget(r_female);


        formLayout->setLayout(2, QFormLayout::ItemRole::FieldRole, verticalLayout);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_4);

        e_passport = new QLineEdit(centralwidget);
        e_passport->setObjectName("e_passport");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, e_passport);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label_6);

        e_birth = new QLineEdit(centralwidget);
        e_birth->setObjectName("e_birth");

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, e_birth);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, label_7);

        e_phone = new QLineEdit(centralwidget);
        e_phone->setObjectName("e_phone");

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, e_phone);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(6, QFormLayout::ItemRole::LabelRole, label_5);

        e_email = new QLineEdit(centralwidget);
        e_email->setObjectName("e_email");

        formLayout->setWidget(6, QFormLayout::ItemRole::FieldRole, e_email);

        b_register = new QPushButton(centralwidget);
        b_register->setObjectName("b_register");

        formLayout->setWidget(7, QFormLayout::ItemRole::FieldRole, b_register);


        verticalLayout_2->addLayout(formLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        b_import->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\320\277\320\276\321\200\321\202", nullptr));
        b_export->setText(QCoreApplication::translate("MainWindow", "\320\255\320\272\321\201\320\277\320\276\321\200\321\202", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\244\320\230\320\236", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273", nullptr));
        r_male->setText(QCoreApplication::translate("MainWindow", "\320\234\321\203\320\266\321\201\320\272\320\276\320\271", nullptr));
        r_female->setText(QCoreApplication::translate("MainWindow", "\320\226\320\265\320\275\321\201\320\272\320\270\320\271", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\201\320\277\320\276\321\200\321\202", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        b_register->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
