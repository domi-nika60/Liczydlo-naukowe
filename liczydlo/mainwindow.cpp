#include "mainwindow.h"
#include "ui_mainwindow.h"
#define SIZE 400
#include <iostream>

expression e;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    sum=0;
    operation=0;
    //tab 4 - uproszczony
    //=========================================================================
    //numbers
    connect(ui->pushButton_0, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->pushButton_1, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->pushButton_2, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->pushButton_3, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->pushButton_4, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->pushButton_5, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->pushButton_6, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->pushButton_7, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->pushButton_8, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->pushButton_9, SIGNAL(released()), this, SLOT(digit_pressed()));
    //binary operators
    connect(ui->pushButton_addition, SIGNAL(released()), this, SLOT(binary_operator()));
    connect(ui->pushButton_subtraction, SIGNAL(released()), this, SLOT(binary_operator()));
    connect(ui->pushButton_multiplication, SIGNAL(released()), this, SLOT(binary_operator()));
    connect(ui->pushButton_division, SIGNAL(released()), this, SLOT(binary_operator()));
    connect(ui->pushButton_equals, SIGNAL(released()), this, SLOT(equals()));
    //ca,c, <-
    connect(ui->pushButton_clear, SIGNAL(released()), this, SLOT(clear()));
    connect(ui->pushButton_clearall, SIGNAL(released()), this, SLOT(clear_all()));
    connect(ui->pushButton_backspace, SIGNAL(released()), this, SLOT(backspace()));
    //=========================================================================

    //zmiana systemów liczbowych
    connect(ui->sys_2, SIGNAL(textEdited(QString)), this, SLOT(change_system()));
    connect(ui->sys_10, SIGNAL(textEdited(QString)), this, SLOT(change_system()));
    connect(ui->sys_8, SIGNAL(textEdited(QString)), this, SLOT(change_system()));
    connect(ui->sys_16, SIGNAL(textEdited(QString)), this, SLOT(change_system()));
    connect(ui->sys_custom, SIGNAL(textEdited(QString)), this, SLOT(change_system()));

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
        p=(-b)/(2*a);
        q=(-((b*b)-(4*a*c)))/(4*a);
    }

    else {
        delta=(b*b)-(4*a*c);
        if (delta==0){
            x1=(-b)/(2*a);
            x2=x1;
            p=(-b)/(2*a);
            q=0;
        }
        if (delta<0){
            x1=0;
            x2=0;
            p=(-b)/(2*a);
            q=(-(b*b-4*a*c))/(4*a);
        }
        else {
            x1 = ((-b)-sqrt(delta))/(2*a);
            x2 = ((-b)+sqrt(delta))/(2*a);
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
    ui->kwadrat_del->setText(QString::number(delta,'g',7));
}

void MainWindow::on_kwadratkan_oblicz_clicked()
{
    double a=ui->kwadratkan_a->text().toDouble();
    double p=ui->kwadratkan_p->text().toDouble();
    double q=ui->kwadratkan_q->text().toDouble();
    double b;
    double c;
    double x1;
    double x2;
    double delta;
    if (a==0){
        x1=0;
        x2=0;
        p=0;
        b=0;
        c=q;
        delta=0;
    }
    if (p==0){
        x1=sqrt((-q)/a);
        x2=(-sqrt((-q)/a));
        b=0;
        c=q;
        delta=(-4*a*c);
    }
    if (q==0){
        x1=p;
        x2=p;
        b=(-2)*p*a;
        c=a*p*p;
        delta=b*b;
    }
    else {
        b=2*p*a;
        c=(a*p*p)+q;
        x1 = p+sqrt((-q)/a);
        x2 = p-sqrt((-q)/a);
        delta=b*b-(4*a*c);
    }
    ui->kwadrat_x1->setText(QString::number(x1,'g',7));
    ui->kwadrat_x2->setText(QString::number(x2,'g',7));
    ui->kwadrat_b->setText(QString::number(b,'g',7));
    ui->kwadrat_c->setText(QString::number(c,'g',7));
    ui->kwadrat_a->setText(QString::number(a,'g',7));
    ui->kwadratil_a->setText(QString::number(a,'g',7));
    ui->kwadratkan_p->setText(QString::number(p,'g',7));
    ui->kwadrat_del->setText(QString::number(delta,'g',7));
}

void MainWindow::on_kwadratil_oblicz_clicked()
{
    double a=ui->kwadratil_a->text().toDouble();
    double x1=ui->kwadrat_x1->text().toDouble();
    double x2=ui->kwadrat_x2->text().toDouble();
    double delta;
    double b=0;
    double c=0;
    double p;
    double q;
    if (a==0){
        b=0;
        c=0;
        p=0;
        q=0;
        delta=0;
    }
    else if (x1==0){

        b=-(a)*(x2);
        c=0;
        p=(-b)/2*a;
        delta = b*b;
        q=(-delta)/4*a;
    }
    else if(x2==0){
        b=(-a)*x2;
        c=0;
        p=(-b)/2*a;
        delta = b*b;
        q=(-delta)/4*a;
    }

    else {

        b=(x1+x2)*(-a);
        c=a*x1*x2;
        p=(-b)/(2*a);
        delta = b*b/(4*a*c);
        q=(-delta)/(4*a);
    }

    ui->kwadrat_b->setText(QString::number(b,'g',7));
    ui->kwadrat_c->setText(QString::number(c,'g',7));
    ui->kwadrat_a->setText(QString::number(a,'g',7));
    ui->kwadratkan_a->setText(QString::number(a,'g',7));
    ui->kwadratkan_p->setText(QString::number(p,'g',7));
    ui->kwadrat_del->setText(QString::number(delta,'g',7));
    ui->kwadratkan_q->setText(QString::number(q,'g',7));

}

void MainWindow::on_plot_clicked()
{
    double a=ui->a_wykres->text().toDouble();
    double b=ui->b_wykres->text().toDouble();
    double c=ui->c_wykres->text().toDouble();
    double d=ui->d_wykres->text().toDouble();
    QImage obrazek=QImage(400,300,QImage::Format_RGB32);
    obrazek.fill(qRgb(150,150,250));

    QPainter painter (&obrazek);
    painter.setPen(QColor(50,700,50));
    painter.drawLine(QPoint (0,150),QPoint (400,150));
    painter.drawLine(QPoint (200,0),QPoint (200,300));
    for(int i=0;i<40;i++){
      painter.drawLine(QPoint (10+10*i,147),QPoint (10+10*i,153));
    }
    for(int i=0;i<30;i++){
        painter.drawLine(QPoint (197,10+10*i),QPoint (203,10+10*i));
    }

    painter.setPen(QColor(50,255,50));
    int x[400], y[400];
    for(int i=0;i<400; i++){

        x[i]=i-obrazek.width()/2;
        float s=x[i]/10.0;
        y[i]=(a*s*s*s+b*s*s+c*s+d)*10;
    }
   // painter.drawEllipse(QPoint (200,150), 100,80);
    for(int i=0;i<obrazek.width()-1; i++){

        painter.drawLine(QPoint(x[i]+obrazek.width()/2,-y[i]+obrazek.height()/2),QPoint(x[i+1]+obrazek.width()/2,-y[i+1]+obrazek.height()/2));
    }


    QGraphicsScene *scena = new QGraphicsScene();
    QPixmap pix=QPixmap::fromImage(obrazek);
    scena->addPixmap(pix);
    this->ui->graphicsView->setScene(scena);
    this->ui->graphicsView->show();
}

//tab - uproszczony
//=========================================================================
void MainWindow::digit_pressed()
{
    QPushButton * button = (QPushButton*) sender();

    e += (/*ui->label_scr_4->text() +*/ button->text());
    ui->label_scr_4->setText(e.display());
}

void MainWindow::binary_operator()
{
    QPushButton * button = (QPushButton*) sender();

    if (button->text() == "+")
        e.binary('+');
    else if (button->text() == "-")
        e.binary('-');
    else if (button->text() == "*")
        e.binary('*');
    else if (button->text() == "/")
        e.binary('/');

    ui->label_scr_4->setText(e.display());
    //ui->label_scr_4->setText(0);
}

void MainWindow::equals()
{
    ui->label_scr_4->setText(QString::number(e.result(), 'g', 15));
}
void MainWindow::clear_all()
{
    e.clear_all();
    ui->label_scr_4->setText(0);
}

void MainWindow::clear()
{
    e.clear();
}
void MainWindow::backspace()
{
    e.backspace();
    ui->label_scr_4->setText(e.display());
}

//=========================================================================


//zmiana systemów binarych

void MainWindow::change_system(){

}
