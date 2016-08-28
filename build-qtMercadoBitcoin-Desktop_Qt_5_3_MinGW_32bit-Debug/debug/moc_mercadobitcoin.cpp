/****************************************************************************
** Meta object code from reading C++ file 'mercadobitcoin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qtMercadoBitcoin1/mercadobitcoin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mercadobitcoin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MercadoBitcoin_t {
    QByteArrayData data[14];
    char stringdata[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MercadoBitcoin_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MercadoBitcoin_t qt_meta_stringdata_MercadoBitcoin = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 21),
QT_MOC_LITERAL(2, 37, 0),
QT_MOC_LITERAL(3, 38, 22),
QT_MOC_LITERAL(4, 61, 25),
QT_MOC_LITERAL(5, 87, 18),
QT_MOC_LITERAL(6, 106, 18),
QT_MOC_LITERAL(7, 125, 9),
QT_MOC_LITERAL(8, 135, 14),
QT_MOC_LITERAL(9, 150, 6),
QT_MOC_LITERAL(10, 157, 9),
QT_MOC_LITERAL(11, 167, 5),
QT_MOC_LITERAL(12, 173, 12),
QT_MOC_LITERAL(13, 186, 11)
    },
    "MercadoBitcoin\0on_pushButton_clicked\0"
    "\0on_pbGetTrades_clicked\0"
    "on_pbGetOrderBook_clicked\0on_pbTeste_clicked\0"
    "on_pbClear_clicked\0doDowload\0"
    "QNetworkReply*\0pReply\0getTrades\0rplay\0"
    "getOrderBook\0replayOrder"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MercadoBitcoin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    1,   59,    2, 0x0a /* Public */,
      10,    1,   62,    2, 0x0a /* Public */,
      12,    1,   65,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,   11,
    QMetaType::Void, 0x80000000 | 8,   13,

       0        // eod
};

void MercadoBitcoin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MercadoBitcoin *_t = static_cast<MercadoBitcoin *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_pbGetTrades_clicked(); break;
        case 2: _t->on_pbGetOrderBook_clicked(); break;
        case 3: _t->on_pbTeste_clicked(); break;
        case 4: _t->on_pbClear_clicked(); break;
        case 5: _t->doDowload((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 6: _t->getTrades((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 7: _t->getOrderBook((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

const QMetaObject MercadoBitcoin::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MercadoBitcoin.data,
      qt_meta_data_MercadoBitcoin,  qt_static_metacall, 0, 0}
};


const QMetaObject *MercadoBitcoin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MercadoBitcoin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MercadoBitcoin.stringdata))
        return static_cast<void*>(const_cast< MercadoBitcoin*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MercadoBitcoin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
