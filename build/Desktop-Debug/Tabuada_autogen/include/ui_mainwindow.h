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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QSpinBox *snTabua;
    QSpinBox *snNum;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnEnviar;
    QSpacerItem *horizontalSpacer_2;
    QListView *vrRes;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(545, 273);
        MainWindow->setMinimumSize(QSize(545, 273));
        MainWindow->setMaximumSize(QSize(545, 273));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:rgb(222, 221, 218);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 531, 221));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color:black;"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color:black;"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        snTabua = new QSpinBox(verticalLayoutWidget);
        snTabua->setObjectName(QString::fromUtf8("snTabua"));
        snTabua->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color: white;"));
        snTabua->setMaximum(1000);

        gridLayout->addWidget(snTabua, 1, 1, 1, 1);

        snNum = new QSpinBox(verticalLayoutWidget);
        snNum->setObjectName(QString::fromUtf8("snNum"));
        snNum->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color: white;"));
        snNum->setMaximum(1000);

        gridLayout->addWidget(snNum, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(150, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnEnviar = new QPushButton(verticalLayoutWidget);
        btnEnviar->setObjectName(QString::fromUtf8("btnEnviar"));
        QFont font;
        font.setPointSize(12);
        btnEnviar->setFont(font);
        btnEnviar->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color: white;\n"
"border-radius: 5px;"));

        horizontalLayout->addWidget(btnEnviar);

        horizontalSpacer_2 = new QSpacerItem(150, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 2);


        verticalLayout->addLayout(gridLayout);

        vrRes = new QListView(verticalLayoutWidget);
        vrRes->setObjectName(QString::fromUtf8("vrRes"));
        vrRes->setEnabled(true);
        vrRes->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color: white;\n"
"border-radius: 5px;"));
        vrRes->setEditTriggers(QAbstractItemView::EditKeyPressed);

        verticalLayout->addWidget(vrRes);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 545, 20));
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
        label_2->setText(QCoreApplication::translate("MainWindow", "Tabuada Max", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Numero", nullptr));
        btnEnviar->setText(QCoreApplication::translate("MainWindow", "Enviar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
