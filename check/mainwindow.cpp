#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMainWindow"
#include <QDebug>
#include <QString>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(this->ui->num_0,SIGNAL(click),this,SLOT(on_num_0_clicked));
    connect(this->ui->num_1,SIGNAL(click),this,SLOT(on_num_1_clicked));
    connect(this->ui->num_2,SIGNAL(click),this,SLOT(on_num_2_clicked));
    connect(this->ui->num_3,SIGNAL(click),this,SLOT(on_num_3_clicked));
    connect(this->ui->num_4,SIGNAL(click),this,SLOT(on_num_4_clicked));
    connect(this->ui->num_5,SIGNAL(click),this,SLOT(on_num_5_clicked));
    connect(this->ui->num_6,SIGNAL(click),this,SLOT(on_num_6_clicked));
    connect(this->ui->num_7,SIGNAL(click),this,SLOT(on_num_7_clicked));
    connect(this->ui->num_8,SIGNAL(click),this,SLOT(on_num_8_clicked));
    connect(this->ui->num_9,SIGNAL(click),this,SLOT(on_num_9_clicked));
    connect(this->ui->bu_jia,SIGNAL(click),this,SLOT(on_bu_jia_clicked));
    connect(this->ui->bu_jian,SIGNAL(click),this,SLOT(on_bu_jian_clicked));
    connect(this->ui->bu_cheng,SIGNAL(click),this,SLOT(on_bu_cheng_clicked));
    connect(this->ui->bu_chu,SIGNAL(click),this,SLOT(on_bu_chu_clicked));
    connect(this->ui->bu_C,SIGNAL(click),this,SLOT(on_bu_C_clicked));
    connect(this->ui->bu_De,SIGNAL(click),this,SLOT(on_bu_De_clicked));
    connect(this->ui->bu_g2,SIGNAL(click),this,SLOT(on_bu_g2_clicked));
    connect(this->ui->bu_g3,SIGNAL(click),this,SLOT(on_bu_g2_clicked));
    connect(this->ui->bu_g3,SIGNAL(click),this,SLOT(on_bu_g2_clicked));
    connect(this->ui->bu_dian,SIGNAL(click),this,SLOT(on_bu_dian_clicked));
    tmp="";
    pre_num=0;
}

void MainWindow::on_num_0_clicked()
{
    tmp+=this->ui->num_0->text();
    this->ui->ln_display->setText(tmp);
}

void MainWindow::on_num_1_clicked()
{
    tmp+=this->ui->num_1->text();
    this->ui->ln_display->setText(tmp);
}

void MainWindow::on_num_2_clicked()
{
    tmp+=this->ui->num_2->text();
    this->ui->ln_display->setText(tmp);
}

void MainWindow::on_num_3_clicked()
{
    tmp+=this->ui->num_3->text();
    this->ui->ln_display->setText(tmp);
}

void MainWindow::on_num_4_clicked()
{
    tmp+=this->ui->num_4->text();
    this->ui->ln_display->setText(tmp);
}

void MainWindow::on_num_5_clicked()
{
    tmp+=this->ui->num_5->text();
    this->ui->ln_display->setText(tmp);
}

void MainWindow::on_num_6_clicked()
{
    tmp+=this->ui->num_6->text();
    this->ui->ln_display->setText(tmp);
}

void MainWindow::on_num_7_clicked()
{
    tmp+=this->ui->num_7->text();
    this->ui->ln_display->setText(tmp);
}

void MainWindow::on_num_8_clicked()
{
    tmp+=this->ui->num_8->text();
    this->ui->ln_display->setText(tmp);
}

void MainWindow::on_num_9_clicked()
{
    tmp+=this->ui->num_9->text();
    this->ui->ln_display->setText(tmp);
}

void MainWindow::on_bu_dian_clicked()
{
    tmp+=this->ui->bu_dian->text();
}

void MainWindow::on_bu_g3_clicked()
{
    pre_num = pow(tmp.toFloat(),0.5);
    pre=this->ui->bu_g3->text();
    tmp=tmp+pre;
    this->ui->ln_display->setText(tmp);
    tmp="";
}

void MainWindow::on_bu_g2_clicked()
{
    pre_num = pow(tmp.toFloat(),0.5);
    pre=this->ui->bu_g2->text();
    tmp=tmp+pre;
    this->ui->ln_display->setText(tmp);
    tmp="";
}

void MainWindow::on_bu_sin_clicked()
{
    pre_num = sin(tmp.toFloat());
    pre=this->ui->bu_sin->text();
    tmp=tmp+" "+pre;
    this->ui->ln_display->setText(tmp);
    tmp="";
}

void MainWindow::on_bu_cos_clicked()
{
    pre_num = cos(tmp.toFloat());
    pre=this->ui->bu_cos->text();
    tmp=tmp+" "+pre;
    this->ui->ln_display->setText(tmp);
    tmp="";
}

void MainWindow::on_bu_tan_clicked()
{
    this->ui->ln_display->setText(" ");
    pre_num = tan(tmp.toFloat());
    pre=this->ui->bu_tan->text();
    tmp=tmp+" "+pre;
    this->ui->ln_display->setText(tmp);
    tmp="";
}

void MainWindow::on_bu_jia_clicked()
{
    if(pre=="sin"||pre=="cos"||pre=="tan"||pre=="^1/2"||pre=="^1/3")
        pre_num += tmp.toFloat(); //变成浮点数
    else
        pre_num = tmp.toFloat();
    //qDebug()<<pre_num;
    pre=this->ui->bu_jia->text();//this->ui->bu_jia->text():按钮名字
    tmp+=pre;
    this->ui->ln_display->setText(tmp);  //之前的字符串和+号一起打印
    tmp="";
}

void MainWindow::on_bu_jian_clicked()
{
    if(pre=="sin"||pre=="cos"||pre=="tan"||pre=="^1/2"||pre=="^1/3")
        pre_num += tmp.toFloat(); //变成浮点数
    else
        pre_num = tmp.toFloat();
    pre=this->ui->bu_jian->text();
    tmp+=pre;
    this->ui->ln_display->setText(tmp);
    tmp="";
}

void MainWindow::on_bu_cheng_clicked()
{
    if(pre=="sin"||pre=="cos"||pre=="tan"||pre=="^1/2"||pre=="^1/3")
        pre_num += tmp.toFloat(); //变成浮点数
    else
        pre_num = tmp.toFloat();
    pre=this->ui->bu_cheng->text();
    tmp+=pre;
    this->ui->ln_display->setText(tmp);
    tmp="";
}

void MainWindow::on_bu_chu_clicked()
{
    int m =tmp.toInt();
    if(m==0)
    {
        this->ui->ln_display->setText("Error");
    }
    else{
        if(pre=="sin"||pre=="cos"||pre=="tan"||pre=="^1/2"||pre=="^1/3")
            pre_num += tmp.toFloat(); //变成浮点数
        else
            pre_num = tmp.toFloat();
    }
    pre=this->ui->bu_chu->text();
    tmp+=pre;
    this->ui->ln_display->setText(tmp);
    tmp="";
}

void MainWindow::on_bu_C_clicked()
{
    pre_num=0;
    pre="";
    this->ui->ln_display->setText("");
    tmp="";
}

void MainWindow::on_bu_De_clicked()
{
    pre_num=0;
    pre="";
    this->ui->ln_display->setText("");
    tmp="";
}

void MainWindow::on_bu_deng_clicked()
{
    if(pre=="+")
    {
        pre_num += tmp.toFloat();
    }
    else if(pre=="-")
    {
        pre_num -=tmp.toFloat();
    }
    else if(pre=="*")
    {
        pre_num *=tmp.toFloat();
    }
    else if(pre=="/")
    {
        int m = tmp.toInt();
        if(m==0)
        {
            this->ui->ln_display->setText("Error");
        }
        else {
            pre_num /=tmp.toFloat();
        }
    }
    QString str = QString::number(pre_num, 'f', 6);
    this->ui->ln_display->setText(str);  //显示pre_num
    tmp="";
    pre="";

}

MainWindow::~MainWindow()
{
    delete ui;
}



















