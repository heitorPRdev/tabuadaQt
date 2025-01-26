/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btnEnviar;
    QSpinBox *snTabua;
    QLabel *label;
    QSpinBox *snNum;
    QLabel *label_2;
    QListView *vrRes;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(535, 263);
        MainWindow->setMinimumSize(QSize(535, 263));
        MainWindow->setMaximumSize(QSize(535, 263));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 20, 491, 91));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btnEnviar = new QPushButton(gridLayoutWidget);
        btnEnviar->setObjectName(QString::fromUtf8("btnEnviar"));

        gridLayout->addWidget(btnEnviar, 2, 0, 1, 1);

        snTabua = new QSpinBox(gridLayoutWidget);
        snTabua->setObjectName(QString::fromUtf8("snTabua"));
        snTabua->setMaximum(1000);

        gridLayout->addWidget(snTabua, 1, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        snNum = new QSpinBox(gridLayoutWidget);
        snNum->setObjectName(QString::fromUtf8("snNum"));
        snNum->setMaximum(1000);

        gridLayout->addWidget(snNum, 1, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        vrRes = new QListView(centralwidget);
        vrRes->setObjectName(QString::fromUtf8("vrRes"));
        vrRes->setEnabled(true);
        vrRes->setGeometry(QRect(50, 120, 461, 101));
        vrRes->setEditTriggers(QAbstractItemView::EditKeyPressed);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 535, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnEnviar->setText(QCoreApplication::translate("MainWindow", "Enviar", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Numero", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Tabuada Max", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
