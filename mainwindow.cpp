#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QLabel>
#include <QString>
#include <QStringList>
#include <QStringListModel>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui -> btnEnviar, SIGNAL(clicked()),this,SLOT(funcTab()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::funcTab(){
    int num = ui ->snNum -> text().toInt();
    int tabMax = ui -> snTabua -> text().toInt();
    QStringListModel *model;
    model = new QStringListModel(this);
    QStringList list;

    for(int i = 0; i <= tabMax;i++){
        list.append(QString::number(num)+" x "+QString::number(i)+" = "+QString::number(num*i));


    }
    model -> setStringList(list);
    ui ->vrRes->setModel(model);
}
