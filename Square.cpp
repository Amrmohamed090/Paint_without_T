#include "Square.h"
bool pressed;
Square::Square()
{
pressed = false;
}

QRectF Square::boundingRect() const
{
 return QRectF(0,0,100,100);
}

void Square::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
 QRectF rec = boundingRect();
 QBrush brush(Qt::blue);

 if (pressed)
 {
     brush.setColor(Qt::red);
 }
 else
 {
     brush.setColor(Qt::green);
 }

 painter->fillRect(rec,brush);
 painter->drawRect(rec);
}

void Square::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    pressed = true;
    update();
    QGraphicsItem::mousePressEvent(event);



}

void Square::mouserReleasEvent(QGraphicsSceneMouseEvent *event)
{
    pressed = false;
    update();
    QGraphicsItem::mouseReleaseEvent(event);
}
