/****************************************************************************
** Meta object code from reading C++ file 'calculator.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "calculator.h"
#include <QScreen>
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calculator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Calculator_t {
    const uint offsetsAndSize[42];
    char stringdata0[396];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Calculator_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Calculator_t qt_meta_stringdata_Calculator = {
    {
QT_MOC_LITERAL(0, 10), // "Calculator"
QT_MOC_LITERAL(11, 27), // "on_pushButton_clear_clicked"
QT_MOC_LITERAL(39, 0), // ""
QT_MOC_LITERAL(40, 25), // "on_pushButton_res_clicked"
QT_MOC_LITERAL(66, 16), // "calc_key_handler"
QT_MOC_LITERAL(83, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(107, 23), // "on_actionHelp_triggered"
QT_MOC_LITERAL(131, 26), // "on_actionDefault_triggered"
QT_MOC_LITERAL(158, 26), // "on_actionGraphic_triggered"
QT_MOC_LITERAL(185, 12), // "xAxisChanged"
QT_MOC_LITERAL(198, 8), // "QCPRange"
QT_MOC_LITERAL(207, 8), // "newRange"
QT_MOC_LITERAL(216, 14), // "deleteHelpMenu"
QT_MOC_LITERAL(231, 21), // "on_actionOn_triggered"
QT_MOC_LITERAL(253, 22), // "on_actionOff_triggered"
QT_MOC_LITERAL(276, 26), // "on_pushButton_draw_clicked"
QT_MOC_LITERAL(303, 26), // "on_pushButton_addw_clicked"
QT_MOC_LITERAL(330, 25), // "on_pushButton_rmw_clicked"
QT_MOC_LITERAL(356, 9), // "LEChanged"
QT_MOC_LITERAL(366, 3), // "arg"
QT_MOC_LITERAL(370, 25) // "pushButton_colors_clicked"

    },
    "Calculator\0on_pushButton_clear_clicked\0"
    "\0on_pushButton_res_clicked\0calc_key_handler\0"
    "on_actionExit_triggered\0on_actionHelp_triggered\0"
    "on_actionDefault_triggered\0"
    "on_actionGraphic_triggered\0xAxisChanged\0"
    "QCPRange\0newRange\0deleteHelpMenu\0"
    "on_actionOn_triggered\0on_actionOff_triggered\0"
    "on_pushButton_draw_clicked\0"
    "on_pushButton_addw_clicked\0"
    "on_pushButton_rmw_clicked\0LEChanged\0"
    "arg\0pushButton_colors_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Calculator[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  110,    2, 0x08,    1 /* Private */,
       3,    0,  111,    2, 0x08,    2 /* Private */,
       4,    0,  112,    2, 0x08,    3 /* Private */,
       5,    0,  113,    2, 0x08,    4 /* Private */,
       6,    0,  114,    2, 0x08,    5 /* Private */,
       7,    0,  115,    2, 0x08,    6 /* Private */,
       8,    0,  116,    2, 0x08,    7 /* Private */,
       9,    1,  117,    2, 0x08,    8 /* Private */,
      12,    0,  120,    2, 0x08,   10 /* Private */,
      13,    0,  121,    2, 0x08,   11 /* Private */,
      14,    0,  122,    2, 0x08,   12 /* Private */,
      15,    0,  123,    2, 0x08,   13 /* Private */,
      16,    0,  124,    2, 0x08,   14 /* Private */,
      17,    0,  125,    2, 0x08,   15 /* Private */,
      18,    1,  126,    2, 0x08,   16 /* Private */,
      20,    0,  129,    2, 0x08,   18 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,

       0        // eod
};

void Calculator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Calculator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_clear_clicked(); break;
        case 1: _t->on_pushButton_res_clicked(); break;
        case 2: _t->calc_key_handler(); break;
        case 3: _t->on_actionExit_triggered(); break;
        case 4: _t->on_actionHelp_triggered(); break;
        case 5: _t->on_actionDefault_triggered(); break;
        case 6: _t->on_actionGraphic_triggered(); break;
        case 7: _t->xAxisChanged((*reinterpret_cast< std::add_pointer_t<QCPRange>>(_a[1]))); break;
        case 8: _t->deleteHelpMenu(); break;
        case 9: _t->on_actionOn_triggered(); break;
        case 10: _t->on_actionOff_triggered(); break;
        case 11: _t->on_pushButton_draw_clicked(); break;
        case 12: _t->on_pushButton_addw_clicked(); break;
        case 13: _t->on_pushButton_rmw_clicked(); break;
        case 14: _t->LEChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->pushButton_colors_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Calculator::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Calculator.offsetsAndSize,
    qt_meta_data_Calculator,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Calculator_t
, QtPrivate::TypeAndForceComplete<Calculator, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QCPRange &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Calculator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calculator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Calculator.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Calculator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
