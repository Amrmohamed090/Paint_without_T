#ifndef SQUARE_H
#define SQUARE_H
#include <QPainter>
#include <QGraphicsItem>

class Square : public QGraphicsItem
{
public:
    Square();

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

protected:
   void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouserReleasEvent(QGraphicsSceneMouseEvent *event);

};
#endif // SQUARE_H
