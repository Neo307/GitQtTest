#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    N = 0;
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
    N++;
    qDebug()<<"Button pressed"<<N<<"times!";
}

void MainWindow::on_btnNew_clicked()
{
    double x = 3.14;
    x = F(x);
    qDebug()<<"x:"<<x;
}
