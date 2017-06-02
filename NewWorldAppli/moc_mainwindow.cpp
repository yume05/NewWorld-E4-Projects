/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata[662];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 44),
QT_MOC_LITERAL(2, 56, 0),
QT_MOC_LITERAL(3, 57, 45),
QT_MOC_LITERAL(4, 103, 46),
QT_MOC_LITERAL(5, 150, 35),
QT_MOC_LITERAL(6, 186, 3),
QT_MOC_LITERAL(7, 190, 6),
QT_MOC_LITERAL(8, 197, 32),
QT_MOC_LITERAL(9, 230, 38),
QT_MOC_LITERAL(10, 269, 37),
QT_MOC_LITERAL(11, 307, 32),
QT_MOC_LITERAL(12, 340, 36),
QT_MOC_LITERAL(13, 377, 41),
QT_MOC_LITERAL(14, 419, 43),
QT_MOC_LITERAL(15, 463, 4),
QT_MOC_LITERAL(16, 468, 38),
QT_MOC_LITERAL(17, 507, 42),
QT_MOC_LITERAL(18, 550, 34),
QT_MOC_LITERAL(19, 585, 37),
QT_MOC_LITERAL(20, 623, 38)
    },
    "MainWindow\0on_pushButtonGestionPersonnelAjouter_clicked\0"
    "\0on_pushButtonGestionPersonnelModifier_clicked\0"
    "on_pushButtonGestionPersonnelSupprimer_clicked\0"
    "on_tableWidgetPersonnel_cellClicked\0"
    "row\0column\0on_tableWidgetRayons_cellClicked\0"
    "on_tableWidgetTypeProduits_cellClicked\0"
    "on_comboBoxRayons_currentIndexChanged\0"
    "on_pushButtonAjoutRayons_clicked\0"
    "on_pushButtonSupprimerRayons_clicked\0"
    "on_pushButtonModifierTypeProduits_clicked\0"
    "on_comboBoxTypeProduits_currentIndexChanged\0"
    "arg1\0on_pushButtonAjoutTypeProduits_clicked\0"
    "on_pushButtonSupprimerTypeProduits_clicked\0"
    "on_tableWidgetProduits_cellClicked\0"
    "on_pushButtonModifierProduits_clicked\0"
    "on_pushButtonSupprimerProduits_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    0,   96,    2, 0x08 /* Private */,
       5,    2,   97,    2, 0x08 /* Private */,
       8,    2,  102,    2, 0x08 /* Private */,
       9,    2,  107,    2, 0x08 /* Private */,
      10,    1,  112,    2, 0x08 /* Private */,
      11,    0,  115,    2, 0x08 /* Private */,
      12,    0,  116,    2, 0x08 /* Private */,
      13,    0,  117,    2, 0x08 /* Private */,
      14,    1,  118,    2, 0x08 /* Private */,
      16,    0,  121,    2, 0x08 /* Private */,
      17,    0,  122,    2, 0x08 /* Private */,
      18,    2,  123,    2, 0x08 /* Private */,
      19,    0,  128,    2, 0x08 /* Private */,
      20,    0,  129,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_pushButtonGestionPersonnelAjouter_clicked(); break;
        case 1: _t->on_pushButtonGestionPersonnelModifier_clicked(); break;
        case 2: _t->on_pushButtonGestionPersonnelSupprimer_clicked(); break;
        case 3: _t->on_tableWidgetPersonnel_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->on_tableWidgetRayons_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->on_tableWidgetTypeProduits_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->on_comboBoxRayons_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_pushButtonAjoutRayons_clicked(); break;
        case 8: _t->on_pushButtonSupprimerRayons_clicked(); break;
        case 9: _t->on_pushButtonModifierTypeProduits_clicked(); break;
        case 10: _t->on_comboBoxTypeProduits_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->on_pushButtonAjoutTypeProduits_clicked(); break;
        case 12: _t->on_pushButtonSupprimerTypeProduits_clicked(); break;
        case 13: _t->on_tableWidgetProduits_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->on_pushButtonModifierProduits_clicked(); break;
        case 15: _t->on_pushButtonSupprimerProduits_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
