/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <tgraphicsview.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionopen_a_file_2;
    QAction *actionsave_to;
    QAction *actionsave;
    QAction *actionexit;
    QAction *actionselect_all;
    QAction *actiondelete;
    QAction *actionpreference;
    QAction *actionabout_the_author;
    QAction *actItem_Rect;
    QAction *actItem_Ellipse;
    QAction *actItem_Line;
    QAction *actItem_Polygon;
    QAction *actZoomIn;
    QAction *actZoomOut;
    QAction *actRotateLeft;
    QAction *actRotateRight;
    QAction *actItem_Circle;
    QAction *actItem_Triangle;
    QAction *actGroupBreak;
    QAction *actGroup;
    QAction *actEdit_Back;
    QAction *actEdit_Front;
    QAction *actEdit_Delete;
    QAction *actionactItem_Mouse;
    QAction *actionnew_file;
    QAction *actionRedo;
    QAction *actionUndo;
    QAction *action_chan_sir;
    QWidget *centralwidget;
    TGraphicsView *view;
    QLabel *label_2;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menuedit;
    QMenu *menuhelp;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(960, 560);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/824.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAnimated(true);
        MainWindow->setDocumentMode(true);
        actionopen_a_file_2 = new QAction(MainWindow);
        actionopen_a_file_2->setObjectName("actionopen_a_file_2");
        actionsave_to = new QAction(MainWindow);
        actionsave_to->setObjectName("actionsave_to");
        actionsave = new QAction(MainWindow);
        actionsave->setObjectName("actionsave");
        actionexit = new QAction(MainWindow);
        actionexit->setObjectName("actionexit");
        actionselect_all = new QAction(MainWindow);
        actionselect_all->setObjectName("actionselect_all");
        actiondelete = new QAction(MainWindow);
        actiondelete->setObjectName("actiondelete");
        actionpreference = new QAction(MainWindow);
        actionpreference->setObjectName("actionpreference");
        actionabout_the_author = new QAction(MainWindow);
        actionabout_the_author->setObjectName("actionabout_the_author");
        actItem_Rect = new QAction(MainWindow);
        actItem_Rect->setObjectName("actItem_Rect");
        actItem_Rect->setCheckable(true);
        actItem_Rect->setChecked(false);
        QIcon icon1;
        QString iconThemeName = QString::fromUtf8("camera-photo");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8(":/images/rect.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actItem_Rect->setIcon(icon1);
        actItem_Ellipse = new QAction(MainWindow);
        actItem_Ellipse->setObjectName("actItem_Ellipse");
        actItem_Ellipse->setCheckable(true);
        QIcon icon2;
        iconThemeName = QString::fromUtf8("application-x-executable");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QString::fromUtf8(":/images/Ellipse.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actItem_Ellipse->setIcon(icon2);
        actItem_Line = new QAction(MainWindow);
        actItem_Line->setObjectName("actItem_Line");
        actItem_Line->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/line.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actItem_Line->setIcon(icon3);
        actItem_Polygon = new QAction(MainWindow);
        actItem_Polygon->setObjectName("actItem_Polygon");
        actItem_Polygon->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/poly.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actItem_Polygon->setIcon(icon4);
        actZoomIn = new QAction(MainWindow);
        actZoomIn->setObjectName("actZoomIn");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/zoomin.png"), QSize(), QIcon::Normal, QIcon::Off);
        actZoomIn->setIcon(icon5);
        actZoomOut = new QAction(MainWindow);
        actZoomOut->setObjectName("actZoomOut");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/zoomout.png"), QSize(), QIcon::Normal, QIcon::Off);
        actZoomOut->setIcon(icon6);
        actRotateLeft = new QAction(MainWindow);
        actRotateLeft->setObjectName("actRotateLeft");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/rotateleft.png"), QSize(), QIcon::Normal, QIcon::Off);
        actRotateLeft->setIcon(icon7);
        actRotateRight = new QAction(MainWindow);
        actRotateRight->setObjectName("actRotateRight");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/rotateright.png"), QSize(), QIcon::Normal, QIcon::Off);
        actRotateRight->setIcon(icon8);
        actItem_Circle = new QAction(MainWindow);
        actItem_Circle->setObjectName("actItem_Circle");
        actItem_Circle->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/circle.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actItem_Circle->setIcon(icon9);
        QFont font;
        font.setPointSize(14);
        actItem_Circle->setFont(font);
        actItem_Triangle = new QAction(MainWindow);
        actItem_Triangle->setObjectName("actItem_Triangle");
        actItem_Triangle->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/triangle.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actItem_Triangle->setIcon(icon10);
        actGroupBreak = new QAction(MainWindow);
        actGroupBreak->setObjectName("actGroupBreak");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/images/128.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actGroupBreak->setIcon(icon11);
        actGroup = new QAction(MainWindow);
        actGroup->setObjectName("actGroup");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/images/UNGROUP.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actGroup->setIcon(icon12);
        actEdit_Back = new QAction(MainWindow);
        actEdit_Back->setObjectName("actEdit_Back");
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/522.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actEdit_Back->setIcon(icon13);
        actEdit_Front = new QAction(MainWindow);
        actEdit_Front->setObjectName("actEdit_Front");
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/524.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actEdit_Front->setIcon(icon14);
        actEdit_Delete = new QAction(MainWindow);
        actEdit_Delete->setObjectName("actEdit_Delete");
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/DELETE.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actEdit_Delete->setIcon(icon15);
        actionactItem_Mouse = new QAction(MainWindow);
        actionactItem_Mouse->setObjectName("actionactItem_Mouse");
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/818.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionactItem_Mouse->setIcon(icon16);
        actionnew_file = new QAction(MainWindow);
        actionnew_file->setObjectName("actionnew_file");
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName("actionRedo");
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName("actionUndo");
        action_chan_sir = new QAction(MainWindow);
        action_chan_sir->setObjectName("action_chan_sir");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font1.setBold(false);
        action_chan_sir->setFont(font1);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        view = new TGraphicsView(centralwidget);
        view->setObjectName("view");
        view->setGeometry(QRect(15, 11, 891, 471));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(790, 430, 101, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 9pt \"\351\273\221\344\275\223\";\n"
"color: rgb(85, 85, 255);"));
        label_2->setFrameShape(QFrame::Box);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 960, 21));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menuedit = new QMenu(menubar);
        menuedit->setObjectName("menuedit");
        menuhelp = new QMenu(menubar);
        menuhelp->setObjectName("menuhelp");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        toolBar->setAutoFillBackground(false);
        toolBar->setAllowedAreas(Qt::AllToolBarAreas);
        toolBar->setFloatable(true);
        MainWindow->addToolBar(Qt::LeftToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName("toolBar_2");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menuedit->menuAction());
        menubar->addAction(menuhelp->menuAction());
        menu->addAction(actionnew_file);
        menu->addAction(actionopen_a_file_2);
        menu->addAction(actionsave_to);
        menu->addAction(actionsave);
        menu->addAction(actionexit);
        menuedit->addAction(actionUndo);
        menuedit->addAction(actionRedo);
        menuedit->addAction(actionselect_all);
        menuedit->addAction(actiondelete);
        menuedit->addAction(actionpreference);
        menuhelp->addAction(actionabout_the_author);
        toolBar->addAction(actItem_Rect);
        toolBar->addAction(actItem_Ellipse);
        toolBar->addAction(actItem_Line);
        toolBar->addAction(actItem_Polygon);
        toolBar->addAction(actItem_Circle);
        toolBar->addAction(actItem_Triangle);
        toolBar_2->addAction(actionactItem_Mouse);
        toolBar_2->addAction(actZoomIn);
        toolBar_2->addAction(actZoomOut);
        toolBar_2->addAction(actRotateLeft);
        toolBar_2->addAction(actRotateRight);
        toolBar_2->addAction(actEdit_Front);
        toolBar_2->addAction(actEdit_Back);
        toolBar_2->addAction(actEdit_Delete);
        toolBar_2->addSeparator();
        toolBar_2->addSeparator();
        toolBar_2->addAction(action_chan_sir);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Draw", nullptr));
        actionopen_a_file_2->setText(QCoreApplication::translate("MainWindow", "open a file", nullptr));
        actionsave_to->setText(QCoreApplication::translate("MainWindow", "save to...", nullptr));
#if QT_CONFIG(shortcut)
        actionsave_to->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionsave->setText(QCoreApplication::translate("MainWindow", "save", nullptr));
#if QT_CONFIG(shortcut)
        actionsave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionexit->setText(QCoreApplication::translate("MainWindow", "exit", nullptr));
#if QT_CONFIG(shortcut)
        actionexit->setShortcut(QCoreApplication::translate("MainWindow", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        actionselect_all->setText(QCoreApplication::translate("MainWindow", "select all", nullptr));
        actiondelete->setText(QCoreApplication::translate("MainWindow", "delete", nullptr));
        actionpreference->setText(QCoreApplication::translate("MainWindow", "preference", nullptr));
        actionabout_the_author->setText(QCoreApplication::translate("MainWindow", "about the author", nullptr));
        actItem_Rect->setText(QCoreApplication::translate("MainWindow", "\347\237\251\345\275\242", nullptr));
#if QT_CONFIG(tooltip)
        actItem_Rect->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\347\237\251\345\275\242", nullptr));
#endif // QT_CONFIG(tooltip)
        actItem_Ellipse->setText(QCoreApplication::translate("MainWindow", "\346\244\255\345\234\206", nullptr));
#if QT_CONFIG(tooltip)
        actItem_Ellipse->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\346\244\255\345\234\206\345\236\213", nullptr));
#endif // QT_CONFIG(tooltip)
        actItem_Line->setText(QCoreApplication::translate("MainWindow", "\347\233\264\347\272\277", nullptr));
#if QT_CONFIG(tooltip)
        actItem_Line->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\347\233\264\347\272\277", nullptr));
#endif // QT_CONFIG(tooltip)
        actItem_Polygon->setText(QCoreApplication::translate("MainWindow", "\346\242\257\345\275\242", nullptr));
#if QT_CONFIG(tooltip)
        actItem_Polygon->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\346\242\257\345\275\242", nullptr));
#endif // QT_CONFIG(tooltip)
        actZoomIn->setText(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247", nullptr));
#if QT_CONFIG(tooltip)
        actZoomIn->setToolTip(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actZoomIn->setShortcut(QCoreApplication::translate("MainWindow", "+", nullptr));
#endif // QT_CONFIG(shortcut)
        actZoomOut->setText(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217", nullptr));
#if QT_CONFIG(tooltip)
        actZoomOut->setToolTip(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actZoomOut->setShortcut(QCoreApplication::translate("MainWindow", "_", nullptr));
#endif // QT_CONFIG(shortcut)
        actRotateLeft->setText(QCoreApplication::translate("MainWindow", "\345\267\246\346\227\213\350\275\254", nullptr));
#if QT_CONFIG(tooltip)
        actRotateLeft->setToolTip(QCoreApplication::translate("MainWindow", "\345\267\246\346\227\213\350\275\254", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actRotateLeft->setShortcut(QCoreApplication::translate("MainWindow", "A", nullptr));
#endif // QT_CONFIG(shortcut)
        actRotateRight->setText(QCoreApplication::translate("MainWindow", "\345\217\263\346\227\213\350\275\254", nullptr));
#if QT_CONFIG(tooltip)
        actRotateRight->setToolTip(QCoreApplication::translate("MainWindow", "\345\217\263\346\227\213\350\275\254", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actRotateRight->setShortcut(QCoreApplication::translate("MainWindow", "D", nullptr));
#endif // QT_CONFIG(shortcut)
        actItem_Circle->setText(QCoreApplication::translate("MainWindow", "\345\234\206\345\275\242", nullptr));
#if QT_CONFIG(tooltip)
        actItem_Circle->setToolTip(QCoreApplication::translate("MainWindow", "\345\234\206\345\275\242", nullptr));
#endif // QT_CONFIG(tooltip)
        actItem_Triangle->setText(QCoreApplication::translate("MainWindow", "\344\270\211\350\247\222\345\275\242", nullptr));
#if QT_CONFIG(tooltip)
        actItem_Triangle->setToolTip(QCoreApplication::translate("MainWindow", "\344\270\211\350\247\222\345\275\242", nullptr));
#endif // QT_CONFIG(tooltip)
        actGroupBreak->setText(QCoreApplication::translate("MainWindow", "\346\211\223\346\225\243", nullptr));
#if QT_CONFIG(tooltip)
        actGroupBreak->setToolTip(QCoreApplication::translate("MainWindow", "\345\217\226\346\266\210\347\273\204\345\220\210", nullptr));
#endif // QT_CONFIG(tooltip)
        actGroup->setText(QCoreApplication::translate("MainWindow", "\347\273\204\345\220\210", nullptr));
#if QT_CONFIG(tooltip)
        actGroup->setToolTip(QCoreApplication::translate("MainWindow", "\347\273\204\345\220\210", nullptr));
#endif // QT_CONFIG(tooltip)
        actEdit_Back->setText(QCoreApplication::translate("MainWindow", "\345\220\216\347\275\256", nullptr));
#if QT_CONFIG(tooltip)
        actEdit_Back->setToolTip(QCoreApplication::translate("MainWindow", "\345\261\205\344\272\216\346\234\200\345\220\216\351\235\242", nullptr));
#endif // QT_CONFIG(tooltip)
        actEdit_Front->setText(QCoreApplication::translate("MainWindow", "\345\211\215\347\275\256", nullptr));
#if QT_CONFIG(tooltip)
        actEdit_Front->setToolTip(QCoreApplication::translate("MainWindow", "\345\261\205\344\272\216\346\234\200\345\211\215\351\235\242", nullptr));
#endif // QT_CONFIG(tooltip)
        actEdit_Delete->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
#if QT_CONFIG(tooltip)
        actEdit_Delete->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\351\200\211\344\270\255\347\232\204\345\233\276\345\205\203", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actEdit_Delete->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionactItem_Mouse->setText(QCoreApplication::translate("MainWindow", "actItem_Mouse", nullptr));
#if QT_CONFIG(tooltip)
        actionactItem_Mouse->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\211\346\240\207", nullptr));
#endif // QT_CONFIG(tooltip)
        actionnew_file->setText(QCoreApplication::translate("MainWindow", "new file", nullptr));
#if QT_CONFIG(tooltip)
        actionnew_file->setToolTip(QCoreApplication::translate("MainWindow", "create a new file", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        action_chan_sir->setText(QCoreApplication::translate("MainWindow", "\344\275\234\350\200\205\357\274\232chan_sir", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\344\275\234\350\200\205\357\274\232Chan_sir", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "file", nullptr));
        menuedit->setTitle(QCoreApplication::translate("MainWindow", "edit", nullptr));
        menuhelp->setTitle(QCoreApplication::translate("MainWindow", "help", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
