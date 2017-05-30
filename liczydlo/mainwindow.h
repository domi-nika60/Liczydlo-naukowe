#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <math.h>

#include "expression.h"

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

    //zmiana systemów liczbowych
    void change_system();


    //tab - uproszczony
    //==========================================================
    void digit_pressed();
    void binary_operator();
    void equals();
    void clear_all();
    void clear();
    void backspace();
    void decimal();
    //==========================================================

private:
    Ui::MainWindow *ui;
    bool waitForOperand;
    double sum;
    int operation;
};

QString to_custom(long liczba, int baza);
long long to_10(QString string_liczba, int baza);

#endif // MAINWINDOW_H
