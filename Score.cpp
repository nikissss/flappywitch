#include "Score.h"
#include "QtWidgets/qgraphicsitem.h"
#include "QtGui/qfont.h"
Score::Score(QGraphicsItem *parent) : QGraphicsTextItem(parent)
{
//initialize  the score to 0
    score = 0;
    //draw the text
    setPlainText("Score:" + QString::number(score));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times", 16));
}

