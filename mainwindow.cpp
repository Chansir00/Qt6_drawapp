#include"QFile"
#include"myshape.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tgraphicsview.h"
#include    <QGraphicsRectItem>
#include    <QInputDialog>
#include    <QColorDialog>
#include    <QFontDialog>
#include    <QKeyEvent>
#include    <QDesktopServices>

//设置笔刷
template<class T> void setBrushColor(T *item)
{
    QColor color=item->brush().color();
    color=QColorDialog::getColor(color,NULL,"选择填充颜色");
    if (color.isValid())
        item->setBrush(QBrush(color));
}


//构造函数
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //创建QGraphicsScene
    scene=new QGraphicsScene(this);
    scene->setSceneRect(0, 0, 871, 461);
    ui->view->setScene(scene);          //scene与view关联
    ui->view->setCursor(Qt::CrossCursor);   //设置鼠标光标
    ui->view->setMouseTracking(true);       //设置鼠标跟踪
    ui->view->setDragMode(QGraphicsView::RubberBandDrag);   //设置拖动模式
    this->setCentralWidget(ui->view);

    //撤销类
    //undoRedoManager = new UndoRedoManager(scene);

    //为toolbar添加群组
    QActionGroup *shapeGroup = new QActionGroup(this);
    shapeGroup->setExclusive(true);
    shapeGroup->addAction(ui->actItem_Circle);
    shapeGroup->addAction(ui->actItem_Ellipse);
    shapeGroup->addAction(ui->actItem_Rect);
    shapeGroup->addAction(ui->actItem_Polygon);
    shapeGroup->addAction(ui->actItem_Triangle);
    shapeGroup->addAction(ui->actItem_Line);

    //关联槽函数
    //connect(ui->view,&TGraphicsView::mouseMovePoint,this, &MainWindow::do_mouseMovePoint);
    connect(ui->view,&TGraphicsView::mouseClicked,this, &MainWindow::do_mouseClicked);
    connect(ui->view,&TGraphicsView::keyPress, this, &MainWindow::do_keyPress);
    connect(ui->view,&TGraphicsView::mouseDoubleClick,this, &MainWindow::do_mouseDoubleClick);

}

//Item项的初始化
void MainWindow::setItemProperty(QGraphicsItem *item,QString desciption)
{
    item->setFlags(QGraphicsItem::ItemIsMovable         //可移动
                   | QGraphicsItem::ItemIsSelectable    //可选中
                   | QGraphicsItem::ItemIsFocusable);   //可以获得焦点
    item->setZValue(++frontZ);      //叠放顺序号

    //quint32 v1=QRandomGenerator::global()->bounded(boundValue);
    //quint32 v2=QRandomGenerator::global()->bounded(boundValue);
    //item->setPos(v1,v2);    //在场景中的位置

    item->setData(ItemId,++seqNum);             //图形项编号
    item->setData(ItemDesciption,desciption);   //图形项描述

    scene->addItem(item);       //添加到场景
    scene->clearSelection();
    item->setSelected(true);
}




//析构函数
MainWindow::~MainWindow()
{
    for(myshape *shape:shapelist)
        delete shape;
    delete ui;
}







//外部事件
//鼠标双击事件,调用相应的对话框，设置填充颜色、线条颜色或字体
void MainWindow::do_mouseDoubleClick(QPoint point)
{
    QPointF pointScene=ui->view->mapToScene(point);    //转换到Scene坐标
    QGraphicsItem  *item=NULL;
    item=scene->itemAt(pointScene,ui->view->transform());    //获取光标下的图形项

    if (item == NULL)
        return;

    switch (item->type())  //图形项的类型
    {
    case    QGraphicsRectItem::Type:    //矩形框，QGraphicsRectItem的枚举值Type
    {
        QGraphicsRectItem *theItem =qgraphicsitem_cast<QGraphicsRectItem*>(item);
        setBrushColor(theItem);
        break;
    }
    case    QGraphicsEllipseItem::Type: //椭圆或圆
    {
        QGraphicsEllipseItem *theItem =qgraphicsitem_cast<QGraphicsEllipseItem*>(item);
        setBrushColor(theItem);
        break;
    }

    case    QGraphicsPolygonItem::Type: //梯形或三角形
    {
        QGraphicsPolygonItem *theItem=qgraphicsitem_cast<QGraphicsPolygonItem*>(item);
        setBrushColor(theItem);
        break;
    }
    case    QGraphicsLineItem::Type:    //直线，设置线条颜色
    {
        QGraphicsLineItem *theItem=qgraphicsitem_cast<QGraphicsLineItem*>(item);
        QPen    pen=theItem->pen();
        QColor  color=theItem->pen().color();
        color=QColorDialog::getColor(color,this,"选择线条颜色");
        if (color.isValid())
        {
            pen.setColor(color);
            theItem->setPen(pen);
        }
        break;
    }
    case    QGraphicsTextItem::Type:    //文字，设置字体
    {
        QGraphicsTextItem *theItem=qgraphicsitem_cast<QGraphicsTextItem*>(item);
        QFont font=theItem->font();
        bool ok=false;
        font=QFontDialog::getFont(&ok,font,this,"设置字体");
        if (ok)
            theItem->setFont(font);
        break;
    }
    }
    saveCurrentState();
}

//鼠标单击绘图
void MainWindow::do_mouseClicked(QPoint point)
{
    QPointF scenePos =ui->view->mapToScene(point);
    qreal width = 50;
    qreal height = 50;
    if (paint_num==1) //circle
    {
        mycircle *circle = new mycircle(scenePos.x() - width / 2, scenePos.y() - height / 2, width, height);
        setItemProperty(static_cast<QGraphicsEllipseItem*>(circle), "Circle");
        circle->setBrush(QBrush(Qt::yellow));
        shapelist.push_back(circle);
    }
    else if (paint_num == 2)  // Rectangle
    {
        myrect *rect = new myrect(scenePos.x() - width / 2, scenePos.y() - height / 2, width, height);
        setItemProperty(static_cast<QGraphicsRectItem*>(rect), "Rectangle");
        rect->setBrush(QBrush(Qt::green));
        shapelist.push_back(rect);
    }
    else if (paint_num == 3)  // Ellipse
    {
        myellipse *ellipse = new myellipse(scenePos.x() - width / 2, scenePos.y() - height / 2, width, height);
        setItemProperty(static_cast<QGraphicsEllipseItem*>(ellipse), "Ellipse");
        ellipse->setBrush(QBrush(Qt::blue));
        shapelist.push_back(ellipse);
    }
    else if (paint_num == 4)  // Polygon (assuming a quadrilateral)
    {
        QPointF p1(scenePos.x() - width / 2, scenePos.y() - height / 2);
        QPointF p2(scenePos.x() + width / 2, scenePos.y() - height / 2);
        QPointF p3(scenePos.x() + width / 3, scenePos.y() + height / 2);
        QPointF p4(scenePos.x() - width / 3, scenePos.y() + height / 2);
        mypolygon *polygonItem = new mypolygon(p1,p2,p3,p4);
        setItemProperty(static_cast<QGraphicsPolygonItem*>(polygonItem), "Polygon");
        polygonItem->setBrush(QBrush(Qt::red));
        shapelist.push_back(polygonItem);
    }
    else if (paint_num == 5)  // Triangle
    {

        QPointF p1(scenePos.x(), scenePos.y() - height / 2);
        QPointF p2(scenePos.x() - width / 2, scenePos.y() + height / 2);
        QPointF p3(scenePos.x() + width / 2, scenePos.y() + height / 2);
        mytriangle *triangleItem = new mytriangle(p1, p2, p3);
        setItemProperty(static_cast<QGraphicsPolygonItem*>(triangleItem), "Triangle");
        triangleItem->setBrush(QBrush(Qt::magenta));
        shapelist.push_back(triangleItem);
    }
    else if (paint_num == 6)  // Line
    {
        qreal lineLength = 50;
        QPointF startPoint(scenePos.x() - lineLength / 2, scenePos.y());
        QPointF endPoint(scenePos.x() + lineLength / 2, scenePos.y());
        myline *line = new myline(startPoint.x(), startPoint.y(), endPoint.x(), endPoint.y());
        setItemProperty(static_cast<QGraphicsLineItem*>(line),"Line");
        QPen pen;
        pen.setColor(Qt::black);
        line->setPen(pen);
        shapelist.push_back(line);
    }
    if(paint_num!=0)
        saveCurrentState();
}
//按键事件
void MainWindow::do_keyPress(QKeyEvent *event)
{
    if (scene->selectedItems().count()!=1)
        return;     //没有选中的图形项，或选中的多于1个
    QGraphicsItem   *item=scene->selectedItems().at(0);

    if (event->key()==Qt::Key_Delete)       //删除
        scene->removeItem(item);
    else if (event->key()==Qt::Key_Space)   //顺时针旋转90度
        item->setRotation(90+item->rotation());
    else if (event->key()==Qt::Key_PageUp)  //放大
        item->setScale(0.1+item->scale());
    else if (event->key()==Qt::Key_PageDown)//缩小
        item->setScale(-0.1+item->scale());
    else if (event->key()==Qt::Key_Left)    //左移
        item->setX(-1+item->x());
    else if (event->key()==Qt::Key_Right)   //右移
        item->setX(1+item->x());
    else if (event->key()==Qt::Key_Up)      //上移
        item->setY(-1+item->y());
    else if (event->key()==Qt::Key_Down)    //下移
        item->setY(1+item->y());
    saveCurrentState();
}




//绘图顺序
void MainWindow::on_actItem_Circle_triggered(bool checked)
{
    paint_num=1;
}
void MainWindow::on_actItem_Rect_triggered(bool checked)
{
    paint_num=2;
}
void MainWindow::on_actItem_Ellipse_triggered(bool checked)
{
    paint_num=3;
}
void MainWindow::on_actItem_Polygon_triggered(bool checked)
{
    paint_num=4;
}
void MainWindow::on_actItem_Triangle_triggered(bool checked)
{
    paint_num=5;
}
void MainWindow::on_actItem_Line_triggered(bool checked)
{
    paint_num=6;
}
void MainWindow::on_actionactItem_Mouse_triggered()
{
    paint_num=0;
}


//图形操作
void MainWindow::on_actEdit_Delete_triggered()
{ //删除所有选中的图形项
    QList<QGraphicsItem *> itemsToDelete = scene->selectedItems(); // 先收集要删除的项

    for (QGraphicsItem *item : itemsToDelete) {
        scene->removeItem(item); // 从场景中移除项
    }
    saveCurrentState(); // 保存当前状态
}

void MainWindow::on_actZoomOut_triggered()
{
    int cnt = scene->selectedItems().count(); //选中图形项的个数
    if (cnt == 1) //缩放单个图形项
    {
        QGraphicsItem *item = scene->selectedItems().at(0);
        item->setTransformOriginPoint(item->boundingRect().center());
        item->setScale(item->scale() - 0.1);
    }
    else //缩放视图
    {
        ui->view->scale(0.9, 0.9);
    }
    saveCurrentState();
}

void MainWindow::on_actZoomIn_triggered()
{
    int cnt = scene->selectedItems().count(); //选中图形项的个数
    if (cnt == 1) //缩放单个图形项
    {
        QGraphicsItem *item = scene->selectedItems().at(0);
        item->setTransformOriginPoint(item->boundingRect().center());
        item->setScale(item->scale() + 0.1);
    }
    else //缩放视图
    {
        ui->view->scale(1.1, 1.1);
    }
    saveCurrentState();
}

void MainWindow::on_actRotateLeft_triggered()
{//逆时针旋转, 做旋转
    int cnt=scene->selectedItems().count();
    if (cnt==1) //单个图形项旋转
    {
        QGraphicsItem* item=scene->selectedItems().at(0);
        item->setRotation(-30+item->rotation());
    }
    else        //视图旋转
        ui->view->rotate(-30);
    saveCurrentState();
}

void MainWindow::on_actRotateRight_triggered()
{//顺时针旋转，右旋转
    int cnt=scene->selectedItems().count();
    if (cnt==1) //单个图形项旋转
    {
        QGraphicsItem* item=scene->selectedItems().at(0);
        item->setRotation(+30+item->rotation());
    }
    else        //视图旋转
        ui->view->rotate(+30);
    saveCurrentState();
}

void MainWindow::on_actEdit_Front_triggered()
{ //bring to front,前置
    int cnt=scene->selectedItems().count();
    if (cnt>0)
    { //只处理选中的第1个图形项
        QGraphicsItem* item=scene->selectedItems().at(0);
        item->setZValue(++frontZ);
    }
    saveCurrentState();
}

void MainWindow::on_actEdit_Back_triggered()
{//bring to back，后置
    int cnt=scene->selectedItems().count();
    if (cnt>0)
    {//只处理选中的第1个图形项
        QGraphicsItem* item=scene->selectedItems().at(0);
        item->setZValue(--backZ);
    }
    saveCurrentState();
}

void MainWindow::on_actGroup_triggered()
{ //组合
    int cnt=scene->selectedItems().count();
    if (cnt>1)
    {
        QGraphicsItemGroup* group =new QGraphicsItemGroup;  //创建组合
        scene->addItem(group);      //添加到场景中

        for (int i=0;i<cnt;i++)     //将选择的图形项添加到组合中
        {
            QGraphicsItem* item=scene->selectedItems().at(0);
            item->setSelected(false);    //取消选择
            item->clearFocus();          //清除焦点状态
            group->addToGroup(item);     //添加到组合
        }
        setItemProperty(group, "组合");   //设置特性
    }
    saveCurrentState();
}

void MainWindow::on_actGroupBreak_triggered()
{ //break group,打散组合
    int cnt=scene->selectedItems().count();
    if (cnt==1)
    {
        QGraphicsItemGroup  *group;
        group=(QGraphicsItemGroup*)scene->selectedItems().at(0);
        scene->destroyItemGroup(group); //打散组合
    }
    saveCurrentState();
}


//菜单栏
//创建新文件
void MainWindow::on_actionnew_file_triggered()
{
    scene->clear();
    shapelist.clear();
    currentFile.clear();
    seqNum = 0;
    backZ = 0;
    frontZ = 0;
}
//打开文件
void MainWindow::on_actionopen_a_file_2_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open File", "", "Text Files (*.txt);;All Files (*)");
    if (!fileName.isEmpty()) {
        QFile file(fileName);
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&file);
            scene->clear();
            shapelist.clear();
            currentFile = fileName;

            while (!in.atEnd()) {
                QString line = in.readLine();
                QStringList parts = line.split(" ");
                QString shapeType = parts[0];

                if (shapeType == "Rectangle") {
                    qreal x = parts[1].toDouble();
                    qreal y = parts[2].toDouble();
                    qreal width = parts[3].toDouble();
                    qreal height = parts[4].toDouble();
                    myrect *rect = new myrect(x, y, width, height);
                    setItemProperty(static_cast<QGraphicsRectItem*>(rect), "Rectangle");
                    shapelist.push_back(rect);
                } else if (shapeType == "Circle") {
                    qreal x = parts[1].toDouble();
                    qreal y = parts[2].toDouble();
                    qreal width = parts[3].toDouble();
                    qreal height = parts[4].toDouble();
                    mycircle *circle = new mycircle(x, y, width, height);
                    setItemProperty(static_cast<QGraphicsEllipseItem*>(circle), "Circle");
                    shapelist.push_back(circle);
                } else if (shapeType == "Ellipse") {
                    qreal x = parts[1].toDouble();
                    qreal y = parts[2].toDouble();
                    qreal width = parts[3].toDouble();
                    qreal height = parts[4].toDouble();
                    myellipse *ellipse = new myellipse(x, y, width, height);
                    setItemProperty(static_cast<QGraphicsEllipseItem*>(ellipse), "Ellipse");
                    shapelist.push_back(ellipse);
                } else if (shapeType == "Triangle") {
                    QPointF p1(parts[1].toDouble(), parts[2].toDouble());
                    QPointF p2(parts[3].toDouble(), parts[4].toDouble());
                    QPointF p3(parts[5].toDouble(), parts[6].toDouble());
                    mytriangle *triangle = new mytriangle(p1, p2, p3);
                    setItemProperty(static_cast<QGraphicsPolygonItem*>(triangle), "Triangle");
                    shapelist.push_back(triangle);
                } else if (shapeType == "Line") {
                    qreal p1 = parts[1].toDouble();
                    qreal p2 = parts[2].toDouble();
                    qreal p3 = parts[3].toDouble();
                    qreal p4 = parts[4].toDouble();
                    myline *line = new myline(p1,p2,p3,p4);
                    setItemProperty(static_cast<QGraphicsLineItem*>(line), "Line");
                    shapelist.push_back(line);
                } else if (shapeType == "Polygon"){
                    QPointF p1(parts[1].toDouble(), parts[2].toDouble());
                    QPointF p2(parts[3].toDouble(), parts[4].toDouble());
                    QPointF p3(parts[5].toDouble(), parts[6].toDouble());
                    QPointF p4(parts[7].toDouble(), parts[8].toDouble());
                    mypolygon *polygon = new mypolygon(p1, p2, p3, p4);
                    setItemProperty(static_cast<QGraphicsPolygonItem*>(polygon), "Polygon");
                    shapelist.push_back(polygon);
                }
            }
            file.close();
        }
    }
}


//保存为
void MainWindow::on_actionsave_to_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save File", "", "Text Files (*.txt);;All Files (*)");
    if (!fileName.isEmpty()) {
        currentFile = fileName;
        on_actionsave_triggered();
    }
}
//保存
void MainWindow::on_actionsave_triggered()
{
    if (currentFile.isEmpty()) {
        on_actionsave_to_triggered();
    } else {
        QFile file(currentFile);
        if (file.open(QIODevice::WriteOnly)) {
            QTextStream out(&file);

            for (myshape *shape : shapelist) {
                shape->save(out);
            }
        }
    }
}
//退出
void MainWindow::on_actionexit_triggered()
{
    close();
}
//全选
void MainWindow::on_actionselect_all_triggered()
{
    for (QGraphicsItem *item : scene->items()) {
        item->setSelected(true);
    }
}
//删除
void MainWindow::on_actiondelete_triggered()
{
    QList<QGraphicsItem *> itemsToDelete = scene->selectedItems(); // 先收集要删除的项

    for (QGraphicsItem *item : itemsToDelete) {
        scene->removeItem(item); // 从场景中移除项
    }
    saveCurrentState(); // 保存当前状态
}
//撤回与重做
void MainWindow::saveCurrentState()
{
    QString tempDir = QDir::tempPath();
    QString fileName = tempDir + "/scene_" + QString::number(QDateTime::currentMSecsSinceEpoch()) + ".txt";

    QFile file(fileName);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);

        for (myshape *shape : shapelist) {
            if (shape) {
                shape->save(out);
            } else {
                qWarning() << "Null shape pointer encountered!";
            }
        }

        file.close();
        qDebug() << "State saved.";
    } else {
        qWarning() << "Failed to open file for writing.";
    }

    undoFiles.push(fileName);

    // 保证不超过10个文件
    if (undoFiles.size() > maxFiles) {
        QFile::remove(undoFiles.front());
        undoFiles.pop_front();
    }

    // 清空 redoFiles
    while (!redoFiles.isEmpty()) {
        QFile::remove(redoFiles.pop());
    }
}

void MainWindow::loadState(const QString &fileName)
{
    QFile file(fileName);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        scene->clear();
        shapelist.clear();

        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList parts = line.split(" ");
            QString shapeType = parts[0];

            if (shapeType == "Rectangle") {
                qreal x = parts[1].toDouble();
                qreal y = parts[2].toDouble();
                qreal width = parts[3].toDouble();
                qreal height = parts[4].toDouble();
                myrect *rect = new myrect(x, y, width, height);
                setItemProperty(static_cast<QGraphicsRectItem*>(rect), "Rectangle");
                shapelist.push_back(rect);
            } else if (shapeType == "Circle") {
                qreal x = parts[1].toDouble();
                qreal y = parts[2].toDouble();
                qreal width = parts[3].toDouble();
                qreal height = parts[4].toDouble();
                mycircle *circle = new mycircle(x, y, width, height);
                setItemProperty(static_cast<QGraphicsEllipseItem*>(circle), "Circle");
                shapelist.push_back(circle);
            } else if (shapeType == "Ellipse") {
                qreal x = parts[1].toDouble();
                qreal y = parts[2].toDouble();
                qreal width = parts[3].toDouble();
                qreal height = parts[4].toDouble();
                myellipse *ellipse = new myellipse(x, y, width, height);
                setItemProperty(static_cast<QGraphicsEllipseItem*>(ellipse), "Ellipse");
                shapelist.push_back(ellipse);
            } else if (shapeType == "Triangle") {
                QPointF p1(parts[1].toDouble(), parts[2].toDouble());
                QPointF p2(parts[3].toDouble(), parts[4].toDouble());
                QPointF p3(parts[5].toDouble(), parts[6].toDouble());
                mytriangle *triangle = new mytriangle(p1, p2, p3);
                setItemProperty(static_cast<QGraphicsPolygonItem*>(triangle), "Triangle");
                shapelist.push_back(triangle);
            } else if (shapeType == "Line") {
                qreal p1 = parts[1].toDouble();
                qreal p2 = parts[2].toDouble();
                qreal p3 = parts[3].toDouble();
                qreal p4 = parts[4].toDouble();
                myline *line = new myline(p1,p2,p3,p4);
                setItemProperty(static_cast<QGraphicsLineItem*>(line), "Line");
                shapelist.push_back(line);
            } else if (shapeType == "Polygon"){
                QPointF p1(parts[1].toDouble(), parts[2].toDouble());
                QPointF p2(parts[3].toDouble(), parts[4].toDouble());
                QPointF p3(parts[5].toDouble(), parts[6].toDouble());
                QPointF p4(parts[7].toDouble(), parts[8].toDouble());
                mypolygon *polygon = new mypolygon(p1, p2, p3, p4);
                setItemProperty(static_cast<QGraphicsPolygonItem*>(polygon), "Polygon");
                shapelist.push_back(polygon);
            }
        }
        file.close();
    }
}
void MainWindow::on_actionUndo_triggered()
{
    if (undoFiles.size() > 1) {
        // 将当前状态推入 redoFiles
        redoFiles.push(undoFiles.pop());
        // 加载前一个状态
        loadState(undoFiles.top());
    }
}

void MainWindow::on_actionRedo_triggered()
{
    if (!redoFiles.isEmpty()) {
        // 获取当前状态并保存到 undoFiles，以便能够撤销 Redo 操作
        if (!undoFiles.isEmpty()) {
            QString currentFile = undoFiles.top();
            undoFiles.push(currentFile);
        }

        // 从 redoFiles 弹出并加载状态
        QString redoFile = redoFiles.pop();
        loadState(redoFile);

        // 将 redo 状态推入 undoFiles
        undoFiles.push(redoFile);
    }
}



