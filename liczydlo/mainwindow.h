#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <math.h>

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
    void on_mc_clicked();

    void on_c2_clicked();

    void on_c7_clicked();

    void digit_clicked();
    void two_argument_clicked();
    void on_divide_clicked();

    void on_change_charakter_clicked();

    void on_clearAll_clicked();

    void on_kwadrat_oblicz_clicked();

    void on_kwadratkan_oblicz_clicked();

    void on_kwadratil_oblicz_clicked();

    void on_plot_clicked();

private:
    Ui::MainWindow *ui;
    bool waitForOperand;
    double sum;
    int operation;
};

#endif // MAINWINDOW_H
