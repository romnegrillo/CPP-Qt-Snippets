/****************************************************************************
** Meta object code from reading C++ file 'httpconnectionhandler.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../QtWebApp/QtWebApp/httpserver/httpconnectionhandler.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'httpconnectionhandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_stefanfrings__HttpConnectionHandler[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      54,   37,   36,   36, 0x0a,
      90,   36,   36,   36, 0x08,
     104,   36,   36,   36, 0x08,
     111,   36,   36,   36, 0x08,
     126,   36,   36,   36, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_stefanfrings__HttpConnectionHandler[] = {
    "stefanfrings::HttpConnectionHandler\0"
    "\0socketDescriptor\0handleConnection(tSocketDescriptor)\0"
    "readTimeout()\0read()\0disconnected()\0"
    "thread_done()\0"
};

void stefanfrings::HttpConnectionHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HttpConnectionHandler *_t = static_cast<HttpConnectionHandler *>(_o);
        switch (_id) {
        case 0: _t->handleConnection((*reinterpret_cast< const tSocketDescriptor(*)>(_a[1]))); break;
        case 1: _t->readTimeout(); break;
        case 2: _t->read(); break;
        case 3: _t->disconnected(); break;
        case 4: _t->thread_done(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData stefanfrings::HttpConnectionHandler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject stefanfrings::HttpConnectionHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_stefanfrings__HttpConnectionHandler,
      qt_meta_data_stefanfrings__HttpConnectionHandler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &stefanfrings::HttpConnectionHandler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *stefanfrings::HttpConnectionHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *stefanfrings::HttpConnectionHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_stefanfrings__HttpConnectionHandler))
        return static_cast<void*>(const_cast< HttpConnectionHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int stefanfrings::HttpConnectionHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
