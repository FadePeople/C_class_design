/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *ln_display;
    QPushButton *bu_jia;
    QPushButton *bu_deng;
    QPushButton *bu_C;
    QPushButton *bu_De;
    QPushButton *bu_g2;
    QPushButton *bu_sin;
    QPushButton *bu_cos;
    QPushButton *bu_tan;
    QPushButton *num_9;
    QPushButton *bu_dian;
    QPushButton *num_0;
    QPushButton *num_8;
    QPushButton *num_7;
    QPushButton *num_4;
    QPushButton *num_5;
    QPushButton *num_6;
    QPushButton *num_1;
    QPushButton *num_2;
    QPushButton *num_3;
    QPushButton *bu_jian;
    QPushButton *bu_cheng;
    QPushButton *bu_chu;
    QPushButton *bu_g3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(649, 597);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        ln_display = new QLineEdit(centralWidget);
        ln_display->setObjectName(QString::fromUtf8("ln_display"));
        ln_display->setGeometry(QRect(50, 10, 441, 91));
        bu_jia = new QPushButton(centralWidget);
        bu_jia->setObjectName(QString::fromUtf8("bu_jia"));
        bu_jia->setGeometry(QRect(320, 180, 121, 61));
        bu_deng = new QPushButton(centralWidget);
        bu_deng->setObjectName(QString::fromUtf8("bu_deng"));
        bu_deng->setGeometry(QRect(470, 400, 131, 101));
        bu_C = new QPushButton(centralWidget);
        bu_C->setObjectName(QString::fromUtf8("bu_C"));
        bu_C->setGeometry(QRect(320, 110, 121, 61));
        bu_De = new QPushButton(centralWidget);
        bu_De->setObjectName(QString::fromUtf8("bu_De"));
        bu_De->setGeometry(QRect(470, 110, 131, 61));
        bu_g2 = new QPushButton(centralWidget);
        bu_g2->setObjectName(QString::fromUtf8("bu_g2"));
        bu_g2->setGeometry(QRect(320, 320, 121, 61));
        bu_sin = new QPushButton(centralWidget);
        bu_sin->setObjectName(QString::fromUtf8("bu_sin"));
        bu_sin->setGeometry(QRect(50, 400, 101, 101));
        bu_cos = new QPushButton(centralWidget);
        bu_cos->setObjectName(QString::fromUtf8("bu_cos"));
        bu_cos->setGeometry(QRect(190, 400, 101, 101));
        bu_tan = new QPushButton(centralWidget);
        bu_tan->setObjectName(QString::fromUtf8("bu_tan"));
        bu_tan->setGeometry(QRect(320, 400, 121, 101));
        num_9 = new QPushButton(centralWidget);
        num_9->setObjectName(QString::fromUtf8("num_9"));
        num_9->setGeometry(QRect(230, 110, 61, 61));
        bu_dian = new QPushButton(centralWidget);
        bu_dian->setObjectName(QString::fromUtf8("bu_dian"));
        bu_dian->setGeometry(QRect(50, 320, 101, 61));
        num_0 = new QPushButton(centralWidget);
        num_0->setObjectName(QString::fromUtf8("num_0"));
        num_0->setGeometry(QRect(190, 320, 101, 61));
        num_8 = new QPushButton(centralWidget);
        num_8->setObjectName(QString::fromUtf8("num_8"));
        num_8->setGeometry(QRect(140, 110, 61, 61));
        num_7 = new QPushButton(centralWidget);
        num_7->setObjectName(QString::fromUtf8("num_7"));
        num_7->setGeometry(QRect(50, 110, 61, 61));
        num_4 = new QPushButton(centralWidget);
        num_4->setObjectName(QString::fromUtf8("num_4"));
        num_4->setGeometry(QRect(50, 180, 61, 61));
        num_5 = new QPushButton(centralWidget);
        num_5->setObjectName(QString::fromUtf8("num_5"));
        num_5->setGeometry(QRect(140, 180, 61, 61));
        num_6 = new QPushButton(centralWidget);
        num_6->setObjectName(QString::fromUtf8("num_6"));
        num_6->setGeometry(QRect(230, 180, 61, 61));
        num_1 = new QPushButton(centralWidget);
        num_1->setObjectName(QString::fromUtf8("num_1"));
        num_1->setGeometry(QRect(50, 250, 61, 61));
        num_2 = new QPushButton(centralWidget);
        num_2->setObjectName(QString::fromUtf8("num_2"));
        num_2->setGeometry(QRect(140, 250, 61, 61));
        num_3 = new QPushButton(centralWidget);
        num_3->setObjectName(QString::fromUtf8("num_3"));
        num_3->setGeometry(QRect(230, 250, 61, 61));
        bu_jian = new QPushButton(centralWidget);
        bu_jian->setObjectName(QString::fromUtf8("bu_jian"));
        bu_jian->setGeometry(QRect(470, 180, 131, 61));
        bu_cheng = new QPushButton(centralWidget);
        bu_cheng->setObjectName(QString::fromUtf8("bu_cheng"));
        bu_cheng->setGeometry(QRect(320, 250, 121, 61));
        bu_chu = new QPushButton(centralWidget);
        bu_chu->setObjectName(QString::fromUtf8("bu_chu"));
        bu_chu->setGeometry(QRect(470, 250, 131, 61));
        bu_g3 = new QPushButton(centralWidget);
        bu_g3->setObjectName(QString::fromUtf8("bu_g3"));
        bu_g3->setGeometry(QRect(470, 320, 131, 61));
        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(510, 20, 115, 19));
        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(510, 50, 115, 19));
        radioButton_3 = new QRadioButton(centralWidget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(510, 80, 115, 19));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 649, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        bu_jia->setText(QApplication::translate("MainWindow", "+", nullptr));
        bu_deng->setText(QApplication::translate("MainWindow", "=", nullptr));
        bu_C->setText(QApplication::translate("MainWindow", "C", nullptr));
        bu_De->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        bu_g2->setText(QApplication::translate("MainWindow", "^1/2", nullptr));
        bu_sin->setText(QApplication::translate("MainWindow", "sin", nullptr));
        bu_cos->setText(QApplication::translate("MainWindow", "cos", nullptr));
        bu_tan->setText(QApplication::translate("MainWindow", "tan", nullptr));
        num_9->setText(QApplication::translate("MainWindow", "9", nullptr));
        bu_dian->setText(QApplication::translate("MainWindow", ".", nullptr));
        num_0->setText(QApplication::translate("MainWindow", "0", nullptr));
        num_8->setText(QApplication::translate("MainWindow", "8", nullptr));
        num_7->setText(QApplication::translate("MainWindow", "7", nullptr));
        num_4->setText(QApplication::translate("MainWindow", "4", nullptr));
        num_5->setText(QApplication::translate("MainWindow", "5", nullptr));
        num_6->setText(QApplication::translate("MainWindow", "6", nullptr));
        num_1->setText(QApplication::translate("MainWindow", "1", nullptr));
        num_2->setText(QApplication::translate("MainWindow", "2", nullptr));
        num_3->setText(QApplication::translate("MainWindow", "3", nullptr));
        bu_jian->setText(QApplication::translate("MainWindow", "-", nullptr));
        bu_cheng->setText(QApplication::translate("MainWindow", "*", nullptr));
        bu_chu->setText(QApplication::translate("MainWindow", "/", nullptr));
        bu_g3->setText(QApplication::translate("MainWindow", "^1/3", nullptr));
        radioButton->setText(QApplication::translate("MainWindow", "\344\272\214\350\277\233\345\210\266", nullptr));
        radioButton_2->setText(QApplication::translate("MainWindow", "\345\205\253\350\277\233\345\210\266", nullptr));
        radioButton_3->setText(QApplication::translate("MainWindow", "\345\215\201\345\205\255\350\277\233\345\210\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
