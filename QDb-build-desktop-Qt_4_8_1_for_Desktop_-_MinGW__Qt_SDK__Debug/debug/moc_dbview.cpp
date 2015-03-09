/****************************************************************************
** Meta object code from reading C++ file 'dbview.h'
**
** Created: Tue 3. Jun 17:42:16 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QDb/dbview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_dbView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,    8,    7,    7, 0x05,
      80,    8,    7,    7, 0x05,
     143,    8,    7,    7, 0x05,
     208,    8,    7,    7, 0x05,
     271,    8,    7,    7, 0x05,
     334,    8,    7,    7, 0x05,
     466,  395,    7,    7, 0x05,
     639,  576,    7,    7, 0x05,
     744,    7,    7,    7, 0x05,
     759,    7,    7,    7, 0x05,
     783,    7,    7,    7, 0x05,
     799,    7,    7,    7, 0x05,
     840,    7,    7,    7, 0x05,
     857,    7,    7,    7, 0x05,
     900,    7,    7,    7, 0x05,
     916,    7,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
     932,    7,    7,    7, 0x0a,
     953,    7,    7,    7, 0x0a,
     973,    7,    7,    7, 0x0a,
    1010,    7,    7,    7, 0x0a,
    1049,    7,    7,    7, 0x08,
    1063,    7,    7,    7, 0x08,
    1077,    7,    7,    7, 0x08,
    1089,    7,    7,    7, 0x08,
    1115, 1101,    7,    7, 0x08,
    1221, 1101,    7,    7, 0x08,
    1322,    7,    7,    7, 0x08,
    1335,    7,    7,    7, 0x08,
    1348,    7,    7,    7, 0x08,
    1368,    7,    7,    7, 0x08,
    1389,    7,    7,    7, 0x08,
    1401,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_dbView[] = {
    "dbView\0\0,,,,,,\0"
    "insertFrigoClick(double,double,double,double,int,QString,double)\0"
    "insertLavastClick(double,double,double,double,int,QString,int)\0"
    "deleteFrigoClick(double,double,double,double,int,QString,double)\0"
    "deleteLavastClick(double,double,double,double,int,QString,int)\0"
    "findFrigoClick(double,double,double,double,int,QString,double)\0"
    "findLavastClick(double,double,double,double,int,QString,int)\0"
    "pr,alt,lar,prof,kw,prod,tempMin,prm,altm,larm,profm,kwm,prodm,tempMinm\0"
    "editFrigoClick(double,double,double,double,int,QString,double,double,d"
    "ouble,double,double,int,QString,double)\0"
    "pr,alt,lar,prof,kw,prod,prg,prm,altm,larm,profm,kwm,prodm,prgm\0"
    "editLavastClick(double,double,double,double,int,QString,int,double,dou"
    "ble,double,double,int,QString,int)\0"
    "printDBClick()\0outViewRequest(QString)\0"
    "outFrigoClick()\0"
    "outputFrighiSgnl(Container<frigorifero>)\0"
    "outLavastClick()\0"
    "outputLavastSgnl(Container<lavastoviglie>)\0"
    "openClickSgnl()\0saveClickSgnl()\0"
    "alertOutput(QString)\0viewOutput(QString)\0"
    "outputFrighi(Container<frigorifero>)\0"
    "outputLavast(Container<lavastoviglie>)\0"
    "insertClick()\0deleteClick()\0findClick()\0"
    "editClick()\0,,,,,,,,,,,,,\0"
    "FrigoClick(double,double,double,double,int,QString,double,double,doubl"
    "e,double,double,int,QString,double)\0"
    "LavastClick(double,double,double,double,int,QString,int,double,double,"
    "double,double,int,QString,int)\0"
    "printClick()\0eraseField()\0outFrigoClickSlot()\0"
    "outLavastClickSlot()\0openClick()\0"
    "saveClick()\0"
};

void dbView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        dbView *_t = static_cast<dbView *>(_o);
        switch (_id) {
        case 0: _t->insertFrigoClick((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7]))); break;
        case 1: _t->insertLavastClick((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7]))); break;
        case 2: _t->deleteFrigoClick((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7]))); break;
        case 3: _t->deleteLavastClick((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7]))); break;
        case 4: _t->findFrigoClick((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7]))); break;
        case 5: _t->findLavastClick((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7]))); break;
        case 6: _t->editFrigoClick((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< double(*)>(_a[11])),(*reinterpret_cast< int(*)>(_a[12])),(*reinterpret_cast< QString(*)>(_a[13])),(*reinterpret_cast< double(*)>(_a[14]))); break;
        case 7: _t->editLavastClick((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< double(*)>(_a[11])),(*reinterpret_cast< int(*)>(_a[12])),(*reinterpret_cast< QString(*)>(_a[13])),(*reinterpret_cast< int(*)>(_a[14]))); break;
        case 8: _t->printDBClick(); break;
        case 9: _t->outViewRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->outFrigoClick(); break;
        case 11: _t->outputFrighiSgnl((*reinterpret_cast< Container<frigorifero>(*)>(_a[1]))); break;
        case 12: _t->outLavastClick(); break;
        case 13: _t->outputLavastSgnl((*reinterpret_cast< Container<lavastoviglie>(*)>(_a[1]))); break;
        case 14: _t->openClickSgnl(); break;
        case 15: _t->saveClickSgnl(); break;
        case 16: _t->alertOutput((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->viewOutput((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: _t->outputFrighi((*reinterpret_cast< Container<frigorifero>(*)>(_a[1]))); break;
        case 19: _t->outputLavast((*reinterpret_cast< Container<lavastoviglie>(*)>(_a[1]))); break;
        case 20: _t->insertClick(); break;
        case 21: _t->deleteClick(); break;
        case 22: _t->findClick(); break;
        case 23: _t->editClick(); break;
        case 24: _t->FrigoClick((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< double(*)>(_a[11])),(*reinterpret_cast< int(*)>(_a[12])),(*reinterpret_cast< QString(*)>(_a[13])),(*reinterpret_cast< double(*)>(_a[14]))); break;
        case 25: _t->LavastClick((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< double(*)>(_a[11])),(*reinterpret_cast< int(*)>(_a[12])),(*reinterpret_cast< QString(*)>(_a[13])),(*reinterpret_cast< int(*)>(_a[14]))); break;
        case 26: _t->printClick(); break;
        case 27: _t->eraseField(); break;
        case 28: _t->outFrigoClickSlot(); break;
        case 29: _t->outLavastClickSlot(); break;
        case 30: _t->openClick(); break;
        case 31: _t->saveClick(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData dbView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject dbView::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_dbView,
      qt_meta_data_dbView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &dbView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *dbView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *dbView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dbView))
        return static_cast<void*>(const_cast< dbView*>(this));
    return QDialog::qt_metacast(_clname);
}

int dbView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    return _id;
}

// SIGNAL 0
void dbView::insertFrigoClick(double _t1, double _t2, double _t3, double _t4, int _t5, QString _t6, double _t7)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void dbView::insertLavastClick(double _t1, double _t2, double _t3, double _t4, int _t5, QString _t6, int _t7)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void dbView::deleteFrigoClick(double _t1, double _t2, double _t3, double _t4, int _t5, QString _t6, double _t7)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void dbView::deleteLavastClick(double _t1, double _t2, double _t3, double _t4, int _t5, QString _t6, int _t7)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void dbView::findFrigoClick(double _t1, double _t2, double _t3, double _t4, int _t5, QString _t6, double _t7)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void dbView::findLavastClick(double _t1, double _t2, double _t3, double _t4, int _t5, QString _t6, int _t7)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void dbView::editFrigoClick(double _t1, double _t2, double _t3, double _t4, int _t5, QString _t6, double _t7, double _t8, double _t9, double _t10, double _t11, int _t12, QString _t13, double _t14)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)), const_cast<void*>(reinterpret_cast<const void*>(&_t12)), const_cast<void*>(reinterpret_cast<const void*>(&_t13)), const_cast<void*>(reinterpret_cast<const void*>(&_t14)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void dbView::editLavastClick(double _t1, double _t2, double _t3, double _t4, int _t5, QString _t6, int _t7, double _t8, double _t9, double _t10, double _t11, int _t12, QString _t13, int _t14)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)), const_cast<void*>(reinterpret_cast<const void*>(&_t12)), const_cast<void*>(reinterpret_cast<const void*>(&_t13)), const_cast<void*>(reinterpret_cast<const void*>(&_t14)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void dbView::printDBClick()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void dbView::outViewRequest(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void dbView::outFrigoClick()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void dbView::outputFrighiSgnl(Container<frigorifero> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void dbView::outLavastClick()
{
    QMetaObject::activate(this, &staticMetaObject, 12, 0);
}

// SIGNAL 13
void dbView::outputLavastSgnl(Container<lavastoviglie> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void dbView::openClickSgnl()
{
    QMetaObject::activate(this, &staticMetaObject, 14, 0);
}

// SIGNAL 15
void dbView::saveClickSgnl()
{
    QMetaObject::activate(this, &staticMetaObject, 15, 0);
}
QT_END_MOC_NAMESPACE
