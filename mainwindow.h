#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QMouseEvent>
#include <QPainter>
#include<vector>
#include<QGraphicsScene>
#include<QGraphicsView>
#include<QLabel>
#include<QRandomGenerator>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include<QActionGroup>
#include<QUndoStack>
#include<QUndoCommand>
#include<QTextStream>
#include<QStack>
#include"myshape.h"
#include"tgraphicsview.h"\


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    const int ItemId = 1;            //绘图项自定义数据的key
    const int ItemDesciption = 2;
    const quint32 boundValue=100;   //随机数限制
    int paint_num = 0;    //绘图顺序
    int seqNum=0;   //用于图形项的编号，每个图形项有一个编号
    int backZ=0;    //用于bring to front
    int frontZ=0;   //用于bring to back
    QString currentFile;
    QGraphicsScene *scene;   // 添加 QGraphicsView
    //撤销和重做
    QUndoStack *undoStack;
    QStack<QString> undoFiles;
    QStack<QString> redoFiles;
    int maxFiles = 10;
    void saveCurrentState();
    void loadState(const QString &fileName);

public:
    std::vector<myshape*> shapelist;    //图形容器
    void setItemProperty(QGraphicsItem* item, QString desciption);   //设置图形项的属性
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    //    覆写
    void do_mouseDoubleClick(QPoint point);
    void do_mouseClicked(QPoint point);
    void do_keyPress(QKeyEvent *event);

    //图形绘制
    void on_actItem_Rect_triggered(bool checked);
    void on_actItem_Circle_triggered(bool checked);
    void on_actItem_Ellipse_triggered(bool checked);

    void on_actItem_Polygon_triggered(bool checked);

    void on_actItem_Triangle_triggered(bool checked);

    void on_actItem_Line_triggered(bool checked);

    void on_actEdit_Delete_triggered();

    //图形操作
    void on_actZoomIn_triggered();

    void on_actZoomOut_triggered();

    void on_actRotateLeft_triggered();

    void on_actRotateRight_triggered();

    void on_actGroupBreak_triggered();

    void on_actGroup_triggered();

    void on_actEdit_Back_triggered();

    void on_actEdit_Front_triggered();

    void on_actionactItem_Mouse_triggered();



    //菜单项
    void on_actionnew_file_triggered();

    void on_actionopen_a_file_2_triggered();

    void on_actionsave_to_triggered();

    void on_actionsave_triggered();

    void on_actionexit_triggered();

    void on_actionselect_all_triggered();

    void on_actiondelete_triggered();


    void on_actionUndo_triggered();

    void on_actionRedo_triggered();



private:
    Ui::MainWindow *ui;
};


#endif // MAINWINDOW_H
