#ifndef MYSHAPE_H
#define MYSHAPE_H

#include <QMainWindow>
#include"QMouseEvent"
#include "QPainter"
#include    <QGraphicsRectItem>
#include    <QInputDialog>
#include    <QColorDialog>
#include    <QFontDialog>
#include    <QKeyEvent>
#include    <QDesktopServices>

class myshape : public virtual QGraphicsItem
{
public:
    virtual void save(QTextStream &stream)=0;
    QRectF boundingRect() const override = 0;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override = 0;

}; //抽象类


class mycircle : public QGraphicsEllipseItem, public virtual myshape
{
public:
    mycircle(qreal x, qreal y, qreal width, qreal height);
    void save(QTextStream &stream) override;
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
}; //圆

class myrect : public QGraphicsRectItem, public virtual myshape
{
public:
    myrect(qreal x, qreal y, qreal width, qreal height);
    void save(QTextStream &stream) override;
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
}; //矩形

class mytriangle : public QGraphicsPolygonItem, public virtual myshape
{
public:
    mytriangle(const QPointF &p1, const QPointF &p2, const QPointF &p3);
    void save(QTextStream &stream) override;
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
}; //三角形

class myellipse : public QGraphicsEllipseItem, public virtual myshape
{
public:
    myellipse(qreal x, qreal y, qreal width, qreal height);
    void save(QTextStream &stream) override;
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
};  //椭圆

class myline : public QGraphicsLineItem, public virtual myshape
{
public:
    myline(qreal x1, qreal y1, qreal x2, qreal y2);
    void save(QTextStream &stream) override;
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
};  //直线

class mypolygon : public QGraphicsPolygonItem, public virtual myshape
{
public:
    mypolygon(const QPointF &p1, const QPointF &p2, const QPointF &p3, const QPointF &p4);
    void save(QTextStream &stream) override;
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
};  //梯形
#endif // MYSHAPE_H
