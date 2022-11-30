#include "widget.h"
#include "scene.h"
#include "ui_widget.h"
#include"QWidget"
#include<mainwindow.h>
#include<Score.h>
#include <QGraphicsPixmapItem>

widget::widget(QWidget *parent) :
     QDialog(parent)
   , ui(new Ui::widget)
{
    ui->setupUi(this);


    scene = new Scene(this);
    scene->setSceneRect(-250,-280,480,580);

    QGraphicsPixmapItem * pixItem = new QGraphicsPixmapItem(QPixmap(":/images/10899635.png"));
    //this->setFixedSize(1920,1200);
    scene->addItem(pixItem);
    pixItem->setPos(QPointF(0,0) - QPointF(pixItem->boundingRect().width()/2,
                                           pixItem->boundingRect().height()/2));
    //scene->addLine(-400,0,400,0,QPen(Qt::blue));
   // scene->addLine(0,-400,0,400,QPen(Qt::blue));

     PillarItem * pillar = new PillarItem();
     scene->addItem(pillar);

  BirdItem * bird = new BirdItem(QPixmap(":/image/birdupp.png"));
    //scene->addItem(bird);

     ui->graphics->setScene(scene);
    scene->addBird();
        scene->startGame();

}

void widget::on_startGameButton_clicked()
{
   scene->startGame();
}

widget::~widget()
{
    delete ui;
}
