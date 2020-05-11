#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QString>
#include <model.h>
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

    void on_num_0_clicked();

    void on_num_1_clicked();

    void on_num_2_clicked();

    void on_num_3_clicked();

    void on_num_4_clicked();

    void on_num_5_clicked();

    void on_num_6_clicked();

    void on_num_7_clicked();

    void on_num_8_clicked();

    void on_num_9_clicked();

    void on_bu_dian_clicked();

    void on_bu_cheng_clicked(); //*

    void on_bu_jian_clicked(); //-

    void on_bu_jia_clicked(); //+

    void on_bu_chu_clicked(); // /

    void on_bu_C_clicked();

    void on_bu_De_clicked();

    void on_bu_g2_clicked();

    void on_bu_g3_clicked();

    void on_bu_sin_clicked();

    void on_bu_cos_clicked();

    void on_bu_tan_clicked();

    void on_bu_deng_clicked();
private:
    Ui::MainWindow *ui;
    QString tmp,pre,fuhao[10]={"+","-","*","/","^1/2","^1/3","sin","cos","tan"};
    float num,pre_num;
};

#endif // MAINWINDOW_H












