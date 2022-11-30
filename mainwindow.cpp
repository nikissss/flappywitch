#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <widget.h>
#include <clickokay.h>
#include<QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //showMaximized();
  //QPixmap mainbackground(":/images/background100.png");
    this->setFixedSize(1024,577);
    //int w = ui->label_2->width();
    //int h = ui->label_2->height();
    //ui->label_2->setPixmap(mainbackground.scaled(w,h,Qt::KeepAspectRatio));
/*
QLabel label_2;
QPixmap pixmap(":/images/background100.png");
label_2.setPixmap(pixmap);
label_2.setMask(pixmap.mask());

label_2.show();

    QLabel label_2;
   label_2.setPixmap(QPixmap(":/images/background100.png"));
*/
    //QLabel label_2;
    //label_2.setStyleSheet("background-image: url(:/images/assets/your.png)");
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    hide();
    if(ui->checkBox->isChecked())
    {
        widget a;
                a.setModal(true);
                a.exec();
    }
    else
    {
        clickokay a;
        a.setModal(true);
        a.exec();
    }

}


void MainWindow::on_pushButton_2_clicked()
{
    this->close();
}




