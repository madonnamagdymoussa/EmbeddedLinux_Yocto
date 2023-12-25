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
    QLineEdit *InIPAddress;
    QLabel *label_2;
    QSpinBox *spnPort;
    QPushButton *btnConnect;
    QGroupBox *grpSendData;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QLineEdit *InMessage;
    QPushButton *btnSend;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QListWidget *lstConsole;
    QPushButton *btnClear;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("#InIPAddress[state=\"0\"]{\n"
"\n"
"background-color: rgb(239, 41, 41);\n"
"\n"
"}\n"
"\n"
"#InIPAddress[state=\"1\"]{\n"
"\n"
"background-color: rgb(138, 226, 52);\n"
"\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 50, 331, 141));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        InIPAddress = new QLineEdit(groupBox);
        InIPAddress->setObjectName(QString::fromUtf8("InIPAddress"));
        InIPAddress->setClearButtonEnabled(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, InIPAddress);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        spnPort = new QSpinBox(groupBox);
        spnPort->setObjectName(QString::fromUtf8("spnPort"));
        spnPort->setMinimum(1024);
        spnPort->setMaximum(65535);

        formLayout->setWidget(1, QFormLayout::FieldRole, spnPort);

        btnConnect = new QPushButton(groupBox);
        btnConnect->setObjectName(QString::fromUtf8("btnConnect"));

        formLayout->setWidget(2, QFormLayout::SpanningRole, btnConnect);

        grpSendData = new QGroupBox(centralwidget);
        grpSendData->setObjectName(QString::fromUtf8("grpSendData"));
        grpSendData->setGeometry(QRect(30, 220, 331, 131));
        formLayout_2 = new QFormLayout(grpSendData);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_3 = new QLabel(grpSendData);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        InMessage = new QLineEdit(grpSendData);
        InMessage->setObjectName(QString::fromUtf8("InMessage"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, InMessage);

        btnSend = new QPushButton(grpSendData);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, btnSend);

        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(380, 70, 391, 471));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lstConsole = new QListWidget(layoutWidget);
        lstConsole->setObjectName(QString::fromUtf8("lstConsole"));

        verticalLayout->addWidget(lstConsole);

        btnClear = new QPushButton(layoutWidget);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));

        verticalLayout->addWidget(btnClear);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(btnClear, SIGNAL(clicked()), lstConsole, SLOT(clear()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Connection Information", nullptr));
        label->setText(QApplication::translate("MainWindow", "IP Address", nullptr));
        InIPAddress->setInputMask(QApplication::translate("MainWindow", "000.000.000.000;_", nullptr));
        InIPAddress->setProperty("state", QVariant(QApplication::translate("MainWindow", "1", nullptr)));
        label_2->setText(QApplication::translate("MainWindow", "Port", nullptr));
        btnConnect->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        grpSendData->setTitle(QApplication::translate("MainWindow", "Send Data", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Message", nullptr));
        btnSend->setText(QApplication::translate("MainWindow", "Send", nullptr));
        btnClear->setText(QApplication::translate("MainWindow", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
