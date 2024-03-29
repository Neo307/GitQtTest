#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btnTest_clicked();

    void on_btnNew_clicked();

private:
    Ui::MainWindow *ui;
    int N;

    double F(double x);
};

#endif // MAINWINDOW_H
