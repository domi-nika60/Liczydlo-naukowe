#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_divide_clicked();

    void on_multiply_clicked();

private:
    Ui::MainWindow *ui;
    bool waitForOperand;
    double sum;
};

#endif // MAINWINDOW_H
