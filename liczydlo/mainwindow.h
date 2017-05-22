#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

private:
    Ui::MainWindow *ui;

private slots:
    void digit_pressed();
    void binary_operator();
    void equals();
};

#endif // MAINWINDOW_H
