/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *spnServerPort;
    QPushButton *btnStartServer;
    QLabel *lblConnectionStatus;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *InMessage;
    QPushButton *btnSendToAll;
    QLabel *ledImageLabel;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QListWidget *lstConsole;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(824, 765);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(50, 60, 241, 111));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        spnServerPort = new QSpinBox(groupBox);
        spnServerPort->setObjectName(QString::fromUtf8("spnServerPort"));
        spnServerPort->setMinimum(1024);
        spnServerPort->setMaximum(65535);
        spnServerPort->setValue(12345);

        formLayout->setWidget(0, QFormLayout::FieldRole, spnServerPort);

        btnStartServer = new QPushButton(groupBox);
        btnStartServer->setObjectName(QString::fromUtf8("btnStartServer"));

        formLayout->setWidget(1, QFormLayout::FieldRole, btnStartServer);

        lblConnectionStatus = new QLabel(groupBox);
        lblConnectionStatus->setObjectName(QString::fromUtf8("lblConnectionStatus"));
        lblConnectionStatus->setMinimumSize(QSize(25, 25));
        lblConnectionStatus->setMaximumSize(QSize(25, 25));
        lblConnectionStatus->setStyleSheet(QString::fromUtf8("#lblConnectionStatus[state =\"0\"]{\n"
"\n"
"	background-color: rgb(239, 41, 41);\n"
"	\n"
"}\n"
"\n"
"#lblConnectionStatus[state =\"1\"]{\n"
"\n"
"	background-color: rgb(138, 226, 52);\n"
"	\n"
"}"));

        formLayout->setWidget(1, QFormLayout::LabelRole, lblConnectionStatus);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(50, 210, 241, 123));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        InMessage = new QLineEdit(groupBox_2);
        InMessage->setObjectName(QString::fromUtf8("InMessage"));

        verticalLayout_2->addWidget(InMessage);

        btnSendToAll = new QPushButton(groupBox_2);
        btnSendToAll->setObjectName(QString::fromUtf8("btnSendToAll"));

        verticalLayout_2->addWidget(btnSendToAll);

        ledImageLabel = new QLabel(centralwidget);
        ledImageLabel->setObjectName(QString::fromUtf8("ledImageLabel"));
        ledImageLabel->setGeometry(QRect(20, 380, 341, 341));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(380, 70, 351, 381));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lstConsole = new QListWidget(layoutWidget);
        lstConsole->setObjectName(QString::fromUtf8("lstConsole"));

        verticalLayout->addWidget(lstConsole);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 824, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), lstConsole, SLOT(clear()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Server Information", nullptr));
        label->setText(QApplication::translate("MainWindow", "port", nullptr));
        btnStartServer->setText(QApplication::translate("MainWindow", "Start Server", nullptr));
        lblConnectionStatus->setText(QString());
        lblConnectionStatus->setProperty("state", QVariant(QApplication::translate("MainWindow", "1", nullptr)));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Message Information", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Message", nullptr));
        btnSendToAll->setText(QApplication::translate("MainWindow", "Send To All", nullptr));
        ledImageLabel->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
