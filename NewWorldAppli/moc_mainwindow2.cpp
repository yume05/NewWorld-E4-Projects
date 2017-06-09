/****************************************************************************
** Meta object code from reading C++ file 'mainwindow2.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow2.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow2_t {
    QByteArrayData data[9];
    char stringdata[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow2_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow2_t qt_meta_stringdata_MainWindow2 = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 33),
QT_MOC_LITERAL(2, 46, 0),
QT_MOC_LITERAL(3, 47, 3),
QT_MOC_LITERAL(4, 51, 6),
QT_MOC_LITERAL(5, 58, 40),
QT_MOC_LITERAL(6, 99, 4),
QT_MOC_LITERAL(7, 104, 31),
QT_MOC_LITERAL(8, 136, 31)
    },
    "MainWindow2\0on_tableWidgetVisites_cellClicked\0"
    "\0row\0column\0on_comboBoxEtatVisite_currentTextChanged\0"
    "arg1\0on_pushButtonValiderAcc_clicked\0"
    "on_pushButtonValiderAtt_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow2[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x08 /* Private */,
       5,    1,   39,    2, 0x08 /* Private */,
       7,    0,   42,    2, 0x08 /* Private */,
       8,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow2 *_t = static_cast<MainWindow2 *>(_o);
        switch (_id) {
        case 0: _t->on_tableWidgetVisites_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->on_comboBoxEtatVisite_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_pushButtonValiderAcc_clicked(); break;
        case 3: _t->on_pushButtonValiderAtt_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow2::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow2.data,
      qt_meta_data_MainWindow2,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow2.stringdata))
        return static_cast<void*>(const_cast< MainWindow2*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
