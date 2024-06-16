#include"myshape.h"
#include <QBrush>



//绘制圆
mycircle::mycircle(qreal x, qreal y, qreal width, qreal height)
    : QGraphicsEllipseItem(x, y, width, height) {
    setBrush(QBrush(Qt::blue));// 设置填充颜色为蓝色
}

void mycircle::save(QTextStream &stream) {
    stream << "Circle " << rect().x() << " " << rect().y() << " "
           << rect().width() << " " << rect().height()<< "\n";
}

QRectF mycircle::boundingRect() const {
    return QGraphicsEllipseItem::boundingRect();
}

void mycircle::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    QGraphicsEllipseItem::paint(painter, option, widget);
}

//绘制矩形
myrect::myrect(qreal x, qreal y, qreal width, qreal height)
    : QGraphicsRectItem(x, y, width, height) {
    setBrush(QBrush(Qt::red));  // 设置填充颜色为红色
}

void myrect::save(QTextStream &stream) {
    stream << "Rectangle " << rect().x() << " " << rect().y() << " "
           << rect().width() << " " << rect().height()<< "\n";
}

QRectF myrect::boundingRect() const {
    return QGraphicsRectItem::boundingRect();
}

void myrect::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    QGraphicsRectItem::paint(painter, option, widget);
}


//绘制三角形
mytriangle::mytriangle(const QPointF &p1, const QPointF &p2, const QPointF &p3)
{
    QPolygonF polygon;
    polygon << p1 << p2 << p3;
    setPolygon(polygon);
    setBrush(QBrush(Qt::green));  // 设置填充颜色为绿色
}

void mytriangle::save(QTextStream &stream) {
    QPolygonF polygon = this->polygon();
    if (polygon.size() == 3) {
        stream << "Triangle " << polygon[0].x() << " " << polygon[0].y() << " "
               << polygon[1].x() << " " << polygon[1].y() << " "
               << polygon[2].x() << " " << polygon[2].y()<< "\n";
    }
}

QRectF mytriangle::boundingRect() const {
    return QGraphicsPolygonItem::boundingRect();
}

void mytriangle::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    QGraphicsPolygonItem::paint(painter, option, widget);
}

//椭圆
myellipse::myellipse(qreal x, qreal y, qreal width, qreal height)
    : QGraphicsEllipseItem(x, y, width, height) {
    setBrush(QBrush(Qt::blue));  // 设置填充颜色
}

void myellipse::save(QTextStream &stream) {
    stream << "Ellipse " << rect().x() << " " << rect().y() << " "
           << rect().width() << " " << rect().height()<< "\n";
}

QRectF myellipse::boundingRect() const {
    return QGraphicsEllipseItem::boundingRect();
}

void myellipse::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    QGraphicsEllipseItem::paint(painter, option, widget);
}


//直线
myline::myline(qreal x1, qreal y1, qreal x2, qreal y2)
    : QGraphicsLineItem(x1, y1, x2, y2) {
    setPen(QPen(Qt::black, 2));  // 设置线条颜色和宽度
}

void myline::save(QTextStream &stream) {
    QLineF line = this->line();
    stream << "Line " << line.x1() << " " << line.y1() << " "
           << line.x2() << " " << line.y2()<< "\n";
}

QRectF myline::boundingRect() const {
    return QGraphicsLineItem::boundingRect();
}

void myline::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    QGraphicsLineItem::paint(painter, option, widget);
}
//梯形
mypolygon::mypolygon(const QPointF &p1, const QPointF &p2, const QPointF &p3, const QPointF &p4)
{
    QPolygonF polygon;
    polygon << p1 << p2 << p3 << p4;
    setPolygon(polygon);
    setBrush(QBrush(Qt::red));  // 设置填充颜色为红色
}

void mypolygon::save(QTextStream &stream) {
    QPolygonF polygon = this->polygon();
    if (polygon.size() == 4) {
        stream << "Polygon " << polygon[0].x() << " " << polygon[0].y() << " "
               << polygon[1].x() << " " << polygon[1].y() << " "
               << polygon[2].x() << " " << polygon[2].y() << " "
               << polygon[3].x() << " " << polygon[3].y() << "\n";
    }
}

QRectF mypolygon::boundingRect() const {
    return QGraphicsPolygonItem::boundingRect();
}

void mypolygon::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    QGraphicsPolygonItem::paint(painter, option, widget);
}
