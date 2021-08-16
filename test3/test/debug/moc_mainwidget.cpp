/****************************************************************************
** Meta object code from reading C++ file 'mainwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../GUI/mainwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWidget_t {
    QByteArrayData data[14];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWidget_t qt_meta_stringdata_MainWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWidget"
QT_MOC_LITERAL(1, 11, 8), // "startPVP"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 8), // "startPVE"
QT_MOC_LITERAL(4, 30, 7), // "playRec"
QT_MOC_LITERAL(5, 38, 16), // "neb::CJsonObject"
QT_MOC_LITERAL(6, 55, 10), // "jsonObject"
QT_MOC_LITERAL(7, 66, 6), // "setKey"
QT_MOC_LITERAL(8, 73, 4), // "exit"
QT_MOC_LITERAL(9, 78, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(10, 102, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(11, 124, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(12, 148, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(13, 172, 23) // "on_pushButton_5_clicked"

    },
    "MainWidget\0startPVP\0\0startPVE\0playRec\0"
    "neb::CJsonObject\0jsonObject\0setKey\0"
    "exit\0on_pushButton_2_clicked\0"
    "on_pushButton_clicked\0on_pushButton_3_clicked\0"
    "on_pushButton_4_clicked\0on_pushButton_5_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    1,   66,    2, 0x06 /* Public */,
       7,    0,   69,    2, 0x06 /* Public */,
       8,    0,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,
      12,    0,   74,    2, 0x08 /* Private */,
      13,    0,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWidget *_t = static_cast<MainWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startPVP(); break;
        case 1: _t->startPVE(); break;
        case 2: _t->playRec((*reinterpret_cast< const neb::CJsonObject(*)>(_a[1]))); break;
        case 3: _t->setKey(); break;
        case 4: _t->exit(); break;
        case 5: _t->on_pushButton_2_clicked(); break;
        case 6: _t->on_pushButton_clicked(); break;
        case 7: _t->on_pushButton_3_clicked(); break;
        case 8: _t->on_pushButton_4_clicked(); break;
        case 9: _t->on_pushButton_5_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWidget::startPVP)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWidget::startPVE)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainWidget::*_t)(const neb::CJsonObject & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWidget::playRec)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MainWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWidget::setKey)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MainWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWidget::exit)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject MainWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MainWidget.data,
      qt_meta_data_MainWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MainWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void MainWidget::startPVP()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWidget::startPVE()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainWidget::playRec(const neb::CJsonObject & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWidget::setKey()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MainWidget::exit()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
