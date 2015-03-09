/****************************************************************************
** Meta object code from reading C++ file 'outfrigoview.h'
**
** Created: Sat 17. May 10:17:30 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QDb/outfrigoview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'outfrigoview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_outFrigoView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_outFrigoView[] = {
    "outFrigoView\0\0outputFrighi(Container<frigorifero>)\0"
};

void outFrigoView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        outFrigoView *_t = static_cast<outFrigoView *>(_o);
        switch (_id) {
        case 0: _t->outputFrighi((*reinterpret_cast< Container<frigorifero>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData outFrigoView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject outFrigoView::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_outFrigoView,
      qt_meta_data_outFrigoView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &outFrigoView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *outFrigoView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *outFrigoView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_outFrigoView))
        return static_cast<void*>(const_cast< outFrigoView*>(this));
    return QDialog::qt_metacast(_clname);
}

int outFrigoView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
