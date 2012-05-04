#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

double MainWindow::F(double x)
{
    return sin(x);
}

void MainWindow::on_btnTest_clicked()
{
    qDebug()<<"Button pressed!";
}

void MainWindow::on_btnNew_clicked()
{
    double x = sin(3.14);
    qDebug()<<"x:"<<x;
}
