/****************************************************************************
** Meta object code from reading C++ file 'dbmodel.h'
**
** Created: Tue 3. Jun 17:44:12 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QDb/dbmodel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_dbmodel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,
      30,    8,    8,    8, 0x05,
      52,    8,    8,    8, 0x05,
      89,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
     156,  128,    8,    8, 0x0a,
     256,  224,    8,    8, 0x0a,
     319,  224,    8,    8, 0x0a,
     380,  128,    8,    8, 0x0a,
     446,  224,    8,    8, 0x0a,
     505,  128,    8,    8, 0x0a,
     640,  569,    8,    8, 0x0a,
     812,  749,    8,    8, 0x0a,
     923,    8,    8,    8, 0x0a,
     933,    8,    8,    8, 0x0a,
     959,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_dbmodel[] = {
    "dbmodel\0\0alertSignal(QString)\0"
    "outputSignal(QString)\0"
    "outputFrighi(Container<frigorifero>)\0"
    "outputLavast(Container<lavastoviglie>)\0"
    "pr,alt,lar,prof,kw,prod,prg\0"
    "inserisciLavastoviglie(double,double,double,double,int,QString,int)\0"
    "pr,alt,lar,prof,kw,prod,tempMin\0"
    "inserisciFrigo(double,double,double,double,int,QString,double)\0"
    "rimuoviFrigo(double,double,double,double,int,QString,double)\0"
    "rimuoviLavastoviglie(double,double,double,double,int,QString,int)\0"
    "cercaFrigo(double,double,double,double,int,QString,double)\0"
    "cercaLavastoviglie(double,double,double,double,int,QString,int)\0"
    "pr,alt,lar,prof,kw,prod,tempMin,prm,altm,larm,profm,kwm,prodm,tempMinm\0"
    "modificaFrigo(double,double,double,double,int,QString,double,double,do"
    "uble,double,double,int,QString,double)\0"
    "pr,alt,lar,prof,kw,prod,prg,prm,altm,larm,profm,kwm,prodm,prgm\0"
    "modificaLavastoviglie(double,double,double,double,int,QString,int,doub"
    "le,double,double,double,int,QString,int)\0"
    "printDB()\0stampaTuttiIFrigoriferi()\0"
    "stampaTutteLavastoviglie()\0"
};

void dbmodel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        dbmodel *_t = static_cast<dbmodel *>(_o);
        switch (_id) {
        case 0: _t->alertSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->outputSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->outputFrighi((*reinterpret_cast< Container<frigorifero>(*)>(_a[1]))); break;
        case 3: _t->outputLavast((*reinterpret_cast< Container<lavastoviglie>(*)>(_a[1]))); break;
        case 4: _t->inserisciLavastoviglie((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7]))); break;
        case 5: _t->inserisciFrigo((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7]))); break;
        case 6: _t->rimuoviFrigo((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7]))); break;
        case 7: _t->rimuoviLavastoviglie((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7]))); break;
        case 8: _t->cercaFrigo((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7]))); break;
        case 9: _t->cercaLavastoviglie((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7]))); break;
        case 10: _t->modificaFrigo((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< double(*)>(_a[11])),(*reinterpret_cast< int(*)>(_a[12])),(*reinterpret_cast< QString(*)>(_a[13])),(*reinterpret_cast< double(*)>(_a[14]))); break;
        case 11: _t->modificaLavastoviglie((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< double(*)>(_a[11])),(*reinterpret_cast< int(*)>(_a[12])),(*reinterpret_cast< QString(*)>(_a[13])),(*reinterpret_cast< int(*)>(_a[14]))); break;
        case 12: _t->printDB(); break;
        case 13: _t->stampaTuttiIFrigoriferi(); break;
        case 14: _t->stampaTutteLavastoviglie(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData dbmodel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject dbmodel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_dbmodel,
      qt_meta_data_dbmodel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &dbmodel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *dbmodel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *dbmodel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dbmodel))
        return static_cast<void*>(const_cast< dbmodel*>(this));
    return QObject::qt_metacast(_clname);
}

int dbmodel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void dbmodel::alertSignal(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void dbmodel::outputSignal(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void dbmodel::outputFrighi(Container<frigorifero> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void dbmodel::outputLavast(Container<lavastoviglie> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
