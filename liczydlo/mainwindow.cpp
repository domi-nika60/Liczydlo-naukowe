#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    sum=0;
    operation=0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_mc_clicked()
{
    ui->display->clear();
    sum=0;
    operation=0;
    //kasowanie pamieci etc etd
}


void MainWindow::on_c7_clicked()
{

}

void MainWindow::on_c2_clicked()
{

}
void MainWindow::digit_clicked(){
    if(waitForOperand){
        ui->display->clear();
        waitForOperand=0;
    }
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    ui->display->setText(ui->display->text()+button->text());
    return;
}

void MainWindow::on_divide_clicked()
{

}

void MainWindow::two_argument_clicked(){

    QPushButton* button = qobject_cast<QPushButton*>(sender());
    QString what=button->text();
    //double wynik;

    if(operation!=0){
        switch(operation){
            case 1: //dodawanie
                sum=sum+ui->display->text().toDouble();
            break;
            case 2: //odejmowanie
                sum=sum-ui->display->text().toDouble();
            break;
            case 3: //mnożenie
                sum=sum*ui->display->text().toDouble();
            break;
            case 4: //dzielenie
            sum=sum/ui->display->text().toDouble();

            break;
        }
        waitForOperand=1;
        ui->display->setText(QString::number(sum,'g',7));
        operation=button->property("type").toInt();

        if(operation==5){
            waitForOperand=0;
            operation=0;
        }

    }else{
        sum=ui->display->text().toDouble();
        operation=button->property("type").toInt();
        waitForOperand=1;
        if(operation==5){
            sum=0;
            waitForOperand=0;
            operation=0;
        }
    }
};


void MainWindow::on_change_charakter_clicked()
{

    sum=(-1)*ui->display->text().toDouble();
    ui->display->setText(QString::number(sum,'g',7));
    //waitForOperand=1; chyba nie potrzebne

}

void MainWindow::on_clearAll_clicked()
{
    ui->display->clear();
}


void MainWindow::on_kwadrat_oblicz_clicked()
{
    double a=ui->kwadrat_a->text().toDouble();
    double b=ui->kwadrat_b->text().toDouble();
    double c=ui->kwadrat_c->text().toDouble();
    double delta;
    double p;
    double q;
    double x1;
    double x2;
    if (a==0){
        x1=(-c)/b;
        x2=0;
        p=0;
        q=0;
    }
    else if (b==0){
        x1=sqrt((-c)/a);
        x2=(-sqrt((-c)/a));
        p=0;
        q=c;
    }
    else if (c==0){
        x2=0;
        x1=(-b)/a;
        p=(-b)/2*a;
        q=(-(b*b-4*a*c))/(4*a);
    }

    else {
        delta=b*b-4*a*c;
        if (delta==0){
            x1=(-b)/2*a;
            x2=x1;
            p=(-b)/2*a;
            q=0;
        }
        if (delta<0){
            x1=0;
            x2=0;
            p=(-b)/2*a;
            q=(-(b*b-4*a*c))/(4*a);
        }
        else {
            x1 = ((-b)-sqrt(delta))/2*a;
            x2 = ((-b)+sqrt(delta))/2*a;
            p=(-b)/2*a;
            q=(-(b*b-4*a*c))/(4*a);
        }
    }

    ui->kwadrat_x1->setText(QString::number(x1,'g',7));
    ui->kwadrat_x2->setText(QString::number(x2,'g',7));
    ui->kwadratkan_p->setText(QString::number(p,'g',7));
    ui->kwadratkan_q->setText(QString::number(q,'g',7));
    ui->kwadratkan_a->setText(QString::number(a,'g',7));
    ui->kwadratil_a->setText(QString::number(a,'g',7));
}

void MainWindow::on_kwadratkan_oblicz_clicked()
{
    /*double a=ui->kwadratkan_a->text().toDouble();
    double p=ui->kwadratkan_p->text().toDouble();
    double q=ui->kwadratkan_q->text().toDouble();

*/
}

void MainWindow::on_kwadratil_oblicz_clicked()
{

}
