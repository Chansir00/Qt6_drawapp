/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../draw/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "do_mouseDoubleClick",
    "",
    "point",
    "do_mouseClicked",
    "do_keyPress",
    "QKeyEvent*",
    "event",
    "on_actItem_Rect_triggered",
    "checked",
    "on_actItem_Circle_triggered",
    "on_actItem_Ellipse_triggered",
    "on_actItem_Polygon_triggered",
    "on_actItem_Triangle_triggered",
    "on_actItem_Line_triggered",
    "on_actEdit_Delete_triggered",
    "on_actZoomIn_triggered",
    "on_actZoomOut_triggered",
    "on_actRotateLeft_triggered",
    "on_actRotateRight_triggered",
    "on_actGroupBreak_triggered",
    "on_actGroup_triggered",
    "on_actEdit_Back_triggered",
    "on_actEdit_Front_triggered",
    "on_actionactItem_Mouse_triggered",
    "on_actionnew_file_triggered",
    "on_actionopen_a_file_2_triggered",
    "on_actionsave_to_triggered",
    "on_actionsave_triggered",
    "on_actionexit_triggered",
    "on_actionselect_all_triggered",
    "on_actiondelete_triggered",
    "on_actionUndo_triggered",
    "on_actionRedo_triggered"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[68];
    char stringdata0[11];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[16];
    char stringdata5[12];
    char stringdata6[11];
    char stringdata7[6];
    char stringdata8[26];
    char stringdata9[8];
    char stringdata10[28];
    char stringdata11[29];
    char stringdata12[29];
    char stringdata13[30];
    char stringdata14[26];
    char stringdata15[28];
    char stringdata16[23];
    char stringdata17[24];
    char stringdata18[27];
    char stringdata19[28];
    char stringdata20[27];
    char stringdata21[22];
    char stringdata22[26];
    char stringdata23[27];
    char stringdata24[33];
    char stringdata25[28];
    char stringdata26[33];
    char stringdata27[27];
    char stringdata28[24];
    char stringdata29[24];
    char stringdata30[30];
    char stringdata31[26];
    char stringdata32[24];
    char stringdata33[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 19),  // "do_mouseDoubleClick"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 5),  // "point"
        QT_MOC_LITERAL(38, 15),  // "do_mouseClicked"
        QT_MOC_LITERAL(54, 11),  // "do_keyPress"
        QT_MOC_LITERAL(66, 10),  // "QKeyEvent*"
        QT_MOC_LITERAL(77, 5),  // "event"
        QT_MOC_LITERAL(83, 25),  // "on_actItem_Rect_triggered"
        QT_MOC_LITERAL(109, 7),  // "checked"
        QT_MOC_LITERAL(117, 27),  // "on_actItem_Circle_triggered"
        QT_MOC_LITERAL(145, 28),  // "on_actItem_Ellipse_triggered"
        QT_MOC_LITERAL(174, 28),  // "on_actItem_Polygon_triggered"
        QT_MOC_LITERAL(203, 29),  // "on_actItem_Triangle_triggered"
        QT_MOC_LITERAL(233, 25),  // "on_actItem_Line_triggered"
        QT_MOC_LITERAL(259, 27),  // "on_actEdit_Delete_triggered"
        QT_MOC_LITERAL(287, 22),  // "on_actZoomIn_triggered"
        QT_MOC_LITERAL(310, 23),  // "on_actZoomOut_triggered"
        QT_MOC_LITERAL(334, 26),  // "on_actRotateLeft_triggered"
        QT_MOC_LITERAL(361, 27),  // "on_actRotateRight_triggered"
        QT_MOC_LITERAL(389, 26),  // "on_actGroupBreak_triggered"
        QT_MOC_LITERAL(416, 21),  // "on_actGroup_triggered"
        QT_MOC_LITERAL(438, 25),  // "on_actEdit_Back_triggered"
        QT_MOC_LITERAL(464, 26),  // "on_actEdit_Front_triggered"
        QT_MOC_LITERAL(491, 32),  // "on_actionactItem_Mouse_triggered"
        QT_MOC_LITERAL(524, 27),  // "on_actionnew_file_triggered"
        QT_MOC_LITERAL(552, 32),  // "on_actionopen_a_file_2_triggered"
        QT_MOC_LITERAL(585, 26),  // "on_actionsave_to_triggered"
        QT_MOC_LITERAL(612, 23),  // "on_actionsave_triggered"
        QT_MOC_LITERAL(636, 23),  // "on_actionexit_triggered"
        QT_MOC_LITERAL(660, 29),  // "on_actionselect_all_triggered"
        QT_MOC_LITERAL(690, 25),  // "on_actiondelete_triggered"
        QT_MOC_LITERAL(716, 23),  // "on_actionUndo_triggered"
        QT_MOC_LITERAL(740, 23)   // "on_actionRedo_triggered"
    },
    "MainWindow",
    "do_mouseDoubleClick",
    "",
    "point",
    "do_mouseClicked",
    "do_keyPress",
    "QKeyEvent*",
    "event",
    "on_actItem_Rect_triggered",
    "checked",
    "on_actItem_Circle_triggered",
    "on_actItem_Ellipse_triggered",
    "on_actItem_Polygon_triggered",
    "on_actItem_Triangle_triggered",
    "on_actItem_Line_triggered",
    "on_actEdit_Delete_triggered",
    "on_actZoomIn_triggered",
    "on_actZoomOut_triggered",
    "on_actRotateLeft_triggered",
    "on_actRotateRight_triggered",
    "on_actGroupBreak_triggered",
    "on_actGroup_triggered",
    "on_actEdit_Back_triggered",
    "on_actEdit_Front_triggered",
    "on_actionactItem_Mouse_triggered",
    "on_actionnew_file_triggered",
    "on_actionopen_a_file_2_triggered",
    "on_actionsave_to_triggered",
    "on_actionsave_triggered",
    "on_actionexit_triggered",
    "on_actionselect_all_triggered",
    "on_actiondelete_triggered",
    "on_actionUndo_triggered",
    "on_actionRedo_triggered"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  182,    2, 0x0a,    1 /* Public */,
       4,    1,  185,    2, 0x0a,    3 /* Public */,
       5,    1,  188,    2, 0x0a,    5 /* Public */,
       8,    1,  191,    2, 0x0a,    7 /* Public */,
      10,    1,  194,    2, 0x0a,    9 /* Public */,
      11,    1,  197,    2, 0x0a,   11 /* Public */,
      12,    1,  200,    2, 0x0a,   13 /* Public */,
      13,    1,  203,    2, 0x0a,   15 /* Public */,
      14,    1,  206,    2, 0x0a,   17 /* Public */,
      15,    0,  209,    2, 0x0a,   19 /* Public */,
      16,    0,  210,    2, 0x0a,   20 /* Public */,
      17,    0,  211,    2, 0x0a,   21 /* Public */,
      18,    0,  212,    2, 0x0a,   22 /* Public */,
      19,    0,  213,    2, 0x0a,   23 /* Public */,
      20,    0,  214,    2, 0x0a,   24 /* Public */,
      21,    0,  215,    2, 0x0a,   25 /* Public */,
      22,    0,  216,    2, 0x0a,   26 /* Public */,
      23,    0,  217,    2, 0x0a,   27 /* Public */,
      24,    0,  218,    2, 0x0a,   28 /* Public */,
      25,    0,  219,    2, 0x0a,   29 /* Public */,
      26,    0,  220,    2, 0x0a,   30 /* Public */,
      27,    0,  221,    2, 0x0a,   31 /* Public */,
      28,    0,  222,    2, 0x0a,   32 /* Public */,
      29,    0,  223,    2, 0x0a,   33 /* Public */,
      30,    0,  224,    2, 0x0a,   34 /* Public */,
      31,    0,  225,    2, 0x0a,   35 /* Public */,
      32,    0,  226,    2, 0x0a,   36 /* Public */,
      33,    0,  227,    2, 0x0a,   37 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'do_mouseDoubleClick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPoint, std::false_type>,
        // method 'do_mouseClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPoint, std::false_type>,
        // method 'do_keyPress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeyEvent *, std::false_type>,
        // method 'on_actItem_Rect_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actItem_Circle_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actItem_Ellipse_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actItem_Polygon_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actItem_Triangle_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actItem_Line_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actEdit_Delete_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actZoomIn_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actZoomOut_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actRotateLeft_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actRotateRight_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actGroupBreak_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actGroup_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actEdit_Back_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actEdit_Front_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionactItem_Mouse_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionnew_file_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionopen_a_file_2_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionsave_to_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionsave_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionexit_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionselect_all_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actiondelete_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionUndo_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRedo_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->do_mouseDoubleClick((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 1: _t->do_mouseClicked((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 2: _t->do_keyPress((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 3: _t->on_actItem_Rect_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->on_actItem_Circle_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->on_actItem_Ellipse_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->on_actItem_Polygon_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->on_actItem_Triangle_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->on_actItem_Line_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->on_actEdit_Delete_triggered(); break;
        case 10: _t->on_actZoomIn_triggered(); break;
        case 11: _t->on_actZoomOut_triggered(); break;
        case 12: _t->on_actRotateLeft_triggered(); break;
        case 13: _t->on_actRotateRight_triggered(); break;
        case 14: _t->on_actGroupBreak_triggered(); break;
        case 15: _t->on_actGroup_triggered(); break;
        case 16: _t->on_actEdit_Back_triggered(); break;
        case 17: _t->on_actEdit_Front_triggered(); break;
        case 18: _t->on_actionactItem_Mouse_triggered(); break;
        case 19: _t->on_actionnew_file_triggered(); break;
        case 20: _t->on_actionopen_a_file_2_triggered(); break;
        case 21: _t->on_actionsave_to_triggered(); break;
        case 22: _t->on_actionsave_triggered(); break;
        case 23: _t->on_actionexit_triggered(); break;
        case 24: _t->on_actionselect_all_triggered(); break;
        case 25: _t->on_actiondelete_triggered(); break;
        case 26: _t->on_actionUndo_triggered(); break;
        case 27: _t->on_actionRedo_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 28;
    }
    return _id;
}
QT_WARNING_POP
