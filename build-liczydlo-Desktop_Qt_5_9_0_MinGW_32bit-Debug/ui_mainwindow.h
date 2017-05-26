/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *clearAll;
    QPushButton *backSpace;
    QPushButton *clear;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *c1;
    QPushButton *dot;
    QPushButton *equal;
    QPushButton *mc;
    QPushButton *add;
    QPushButton *c9;
    QPushButton *AddToMemory;
    QPushButton *change_charakter;
    QPushButton *c0;
    QPushButton *c8;
    QPushButton *subtract;
    QPushButton *c2;
    QPushButton *divide;
    QPushButton *ms;
    QPushButton *c5;
    QPushButton *mr;
    QPushButton *toBeSpecified;
    QPushButton *c3;
    QPushButton *c4;
    QPushButton *multiply;
    QPushButton *c6;
    QPushButton *c7;
    QPushButton *sqrt;
    QLineEdit *display;
    QWidget *tab_2;
    QLineEdit *kwadrat_a;
    QLineEdit *kwadrat_b;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *kwadrat_x1;
    QLineEdit *lineEdit_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 433);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(400, 400));
        MainWindow->setMaximumSize(QSize(500, 500));
        MainWindow->setProperty("type", QVariant(1));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setEnabled(true);
        centralWidget->setMaximumSize(QSize(400, 400));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(2, 2, 399, 400));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setMovable(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayoutWidget_2 = new QWidget(tab);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 40, 341, 52));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        clearAll = new QPushButton(gridLayoutWidget_2);
        clearAll->setObjectName(QStringLiteral("clearAll"));

        gridLayout_2->addWidget(clearAll, 1, 2, 1, 1);

        backSpace = new QPushButton(gridLayoutWidget_2);
        backSpace->setObjectName(QStringLiteral("backSpace"));

        gridLayout_2->addWidget(backSpace, 1, 0, 1, 1);

        clear = new QPushButton(gridLayoutWidget_2);
        clear->setObjectName(QStringLiteral("clear"));

        gridLayout_2->addWidget(clear, 1, 1, 1, 1);

        gridLayoutWidget = new QWidget(tab);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 90, 361, 251));
        gridLayoutWidget->setMaximumSize(QSize(10000, 16777215));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        c1 = new QPushButton(gridLayoutWidget);
        c1->setObjectName(QStringLiteral("c1"));
        c1->setMaximumSize(QSize(50, 40));

        gridLayout->addWidget(c1, 3, 1, 1, 1);

        dot = new QPushButton(gridLayoutWidget);
        dot->setObjectName(QStringLiteral("dot"));
        dot->setMaximumSize(QSize(50, 40));

        gridLayout->addWidget(dot, 4, 2, 1, 1);

        equal = new QPushButton(gridLayoutWidget);
        equal->setObjectName(QStringLiteral("equal"));
        equal->setMaximumSize(QSize(50, 40));
        equal->setProperty("type", QVariant(5));

        gridLayout->addWidget(equal, 4, 5, 1, 1);

        mc = new QPushButton(gridLayoutWidget);
        mc->setObjectName(QStringLiteral("mc"));
        mc->setEnabled(true);
        mc->setMaximumSize(QSize(50, 40));

        gridLayout->addWidget(mc, 0, 0, 1, 1);

        add = new QPushButton(gridLayoutWidget);
        add->setObjectName(QStringLiteral("add"));
        add->setMaximumSize(QSize(50, 40));
        add->setProperty("type", QVariant(1));

        gridLayout->addWidget(add, 4, 4, 1, 1);

        c9 = new QPushButton(gridLayoutWidget);
        c9->setObjectName(QStringLiteral("c9"));
        c9->setMaximumSize(QSize(50, 40));

        gridLayout->addWidget(c9, 0, 3, 1, 1);

        AddToMemory = new QPushButton(gridLayoutWidget);
        AddToMemory->setObjectName(QStringLiteral("AddToMemory"));
        AddToMemory->setMaximumSize(QSize(50, 40));

        gridLayout->addWidget(AddToMemory, 4, 0, 1, 1);

        change_charakter = new QPushButton(gridLayoutWidget);
        change_charakter->setObjectName(QStringLiteral("change_charakter"));
        change_charakter->setMaximumSize(QSize(50, 40));

        gridLayout->addWidget(change_charakter, 4, 3, 1, 1);

        c0 = new QPushButton(gridLayoutWidget);
        c0->setObjectName(QStringLiteral("c0"));
        c0->setMaximumSize(QSize(50, 40));

        gridLayout->addWidget(c0, 4, 1, 1, 1);

        c8 = new QPushButton(gridLayoutWidget);
        c8->setObjectName(QStringLiteral("c8"));
        c8->setMaximumSize(QSize(50, 40));

        gridLayout->addWidget(c8, 0, 2, 1, 1);

        subtract = new QPushButton(gridLayoutWidget);
        subtract->setObjectName(QStringLiteral("subtract"));
        subtract->setMaximumSize(QSize(50, 40));
        subtract->setProperty("type", QVariant(2));

        gridLayout->addWidget(subtract, 3, 4, 1, 1);

        c2 = new QPushButton(gridLayoutWidget);
        c2->setObjectName(QStringLiteral("c2"));
        c2->setMaximumSize(QSize(50, 40));

        gridLayout->addWidget(c2, 3, 2, 1, 1);

        divide = new QPushButton(gridLayoutWidget);
        divide->setObjectName(QStringLiteral("divide"));
        divide->setMaximumSize(QSize(50, 40));

        gridLayout->addWidget(divide, 0, 4, 1, 1);

        ms = new QPushButton(gridLayoutWidget);
        ms->setObjectName(QStringLiteral("ms"));
        ms->setMaximumSize(QSize(50, 40));

        gridLayout->addWidget(ms, 3, 0, 1, 1);

        c5 = new QPushButton(gridLayoutWidget);
        c5->setObjectName(QStringLiteral("c5"));
        c5->setMaximumSize(QSize(50, 40));

        gridLayout->addWidget(c5, 2, 2, 1, 1);

        mr = new QPushButton(gridLayoutWidget);
        mr->setObjectName(QStringLiteral("mr"));
        mr->setMaximumSize(QSize(50, 40));

        gridLayout->addWidget(mr, 2, 0, 1, 1);

        toBeSpecified = new QPushButton(gridLayoutWidget);
        toBeSpecified->setObjectName(QStringLiteral("toBeSpecified"));
        toBeSpecified->setMaximumSize(QSize(50, 40));

        gridLayout->addWidget(toBeSpecified, 3, 5, 1, 1);

        c3 = new QPushButton(gridLayoutWidget);
        c3->setObjectName(QStringLiteral("c3"));
        c3->setMaximumSize(QSize(50, 40));

        gridLayout->addWidget(c3, 3, 3, 1, 1);

        c4 = new QPushButton(gridLayoutWidget);
        c4->setObjectName(QStringLiteral("c4"));
        c4->setMaximumSize(QSize(50, 40));

        gridLayout->addWidget(c4, 2, 1, 1, 1);

        multiply = new QPushButton(gridLayoutWidget);
        multiply->setObjectName(QStringLiteral("multiply"));
        multiply->setMaximumSize(QSize(50, 40));
        multiply->setProperty("type", QVariant(3));

        gridLayout->addWidget(multiply, 2, 4, 1, 1);

        c6 = new QPushButton(gridLayoutWidget);
        c6->setObjectName(QStringLiteral("c6"));
        c6->setMaximumSize(QSize(50, 40));

        gridLayout->addWidget(c6, 2, 3, 1, 1);

        c7 = new QPushButton(gridLayoutWidget);
        c7->setObjectName(QStringLiteral("c7"));
        c7->setMaximumSize(QSize(50, 40));

        gridLayout->addWidget(c7, 0, 1, 1, 1);

        sqrt = new QPushButton(gridLayoutWidget);
        sqrt->setObjectName(QStringLiteral("sqrt"));
        sqrt->setMaximumSize(QSize(50, 40));

        gridLayout->addWidget(sqrt, 0, 5, 1, 1);

        display = new QLineEdit(tab);
        display->setObjectName(QStringLiteral("display"));
        display->setGeometry(QRect(10, 0, 341, 31));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        kwadrat_a = new QLineEdit(tab_2);
        kwadrat_a->setObjectName(QStringLiteral("kwadrat_a"));
        kwadrat_a->setGeometry(QRect(10, 20, 113, 20));
        kwadrat_b = new QLineEdit(tab_2);
        kwadrat_b->setObjectName(QStringLiteral("kwadrat_b"));
        kwadrat_b->setGeometry(QRect(140, 20, 113, 20));
        lineEdit_3 = new QLineEdit(tab_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(270, 20, 113, 20));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 60, 75, 23));
        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 0, 71, 31));
        kwadrat_x1 = new QLineEdit(tab_2);
        kwadrat_x1->setObjectName(QStringLiteral("kwadrat_x1"));
        kwadrat_x1->setGeometry(QRect(50, 100, 113, 20));
        lineEdit_2 = new QLineEdit(tab_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(180, 100, 113, 20));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(c7, SIGNAL(clicked()), MainWindow, SLOT(digit_clicked()));
        QObject::connect(c8, SIGNAL(clicked()), MainWindow, SLOT(digit_clicked()));
        QObject::connect(c9, SIGNAL(clicked()), MainWindow, SLOT(digit_clicked()));
        QObject::connect(c4, SIGNAL(clicked()), MainWindow, SLOT(digit_clicked()));
        QObject::connect(c5, SIGNAL(clicked()), MainWindow, SLOT(digit_clicked()));
        QObject::connect(c6, SIGNAL(clicked()), MainWindow, SLOT(digit_clicked()));
        QObject::connect(c1, SIGNAL(clicked()), MainWindow, SLOT(digit_clicked()));
        QObject::connect(c2, SIGNAL(clicked()), MainWindow, SLOT(digit_clicked()));
        QObject::connect(c3, SIGNAL(clicked()), MainWindow, SLOT(digit_clicked()));
        QObject::connect(c0, SIGNAL(clicked()), MainWindow, SLOT(digit_clicked()));
        QObject::connect(divide, SIGNAL(clicked()), MainWindow, SLOT(two_argument_clicked()));
        QObject::connect(multiply, SIGNAL(clicked()), MainWindow, SLOT(two_argument_clicked()));
        QObject::connect(subtract, SIGNAL(clicked()), MainWindow, SLOT(two_argument_clicked()));
        QObject::connect(add, SIGNAL(clicked()), MainWindow, SLOT(two_argument_clicked()));
        QObject::connect(equal, SIGNAL(clicked()), MainWindow, SLOT(two_argument_clicked()));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Liczyd\305\202o", Q_NULLPTR));
        clearAll->setText(QApplication::translate("MainWindow", "Clear All", Q_NULLPTR));
        backSpace->setText(QApplication::translate("MainWindow", "Backspace", Q_NULLPTR));
        clear->setText(QApplication::translate("MainWindow", "Clear", Q_NULLPTR));
        c1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        dot->setText(QApplication::translate("MainWindow", ".", Q_NULLPTR));
        equal->setText(QApplication::translate("MainWindow", "=", Q_NULLPTR));
        mc->setText(QApplication::translate("MainWindow", "MC", Q_NULLPTR));
        add->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        c9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        AddToMemory->setText(QApplication::translate("MainWindow", "M+", Q_NULLPTR));
        change_charakter->setText(QApplication::translate("MainWindow", "+-", Q_NULLPTR));
        c0->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        c8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        subtract->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        c2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        divide->setText(QApplication::translate("MainWindow", "	\303\267", Q_NULLPTR));
        divide->setProperty("type", QVariant(QApplication::translate("MainWindow", "4", Q_NULLPTR)));
        ms->setText(QApplication::translate("MainWindow", "MS", Q_NULLPTR));
        c5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        mr->setText(QApplication::translate("MainWindow", "MR", Q_NULLPTR));
        toBeSpecified->setText(QApplication::translate("MainWindow", "Sqr??", Q_NULLPTR));
        c3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        c4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        multiply->setText(QApplication::translate("MainWindow", "x", Q_NULLPTR));
        c6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        c7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        sqrt->setText(QApplication::translate("MainWindow", "Sqrt", Q_NULLPTR));
        display->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Tab 1", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
