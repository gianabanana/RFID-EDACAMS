/****************************************************************************
** Meta object code from reading C++ file 'edacams.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../edacams.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'edacams.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_edacams_t {
    QByteArrayData data[8];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_edacams_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_edacams_t qt_meta_stringdata_edacams = {
    {
QT_MOC_LITERAL(0, 0, 7), // "edacams"
QT_MOC_LITERAL(1, 8, 29), // "on_onlineRegistration_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 27), // "on_onlineEnrollment_clicked"
QT_MOC_LITERAL(4, 67, 17), // "on_logout_clicked"
QT_MOC_LITERAL(5, 85, 17), // "on_search_clicked"
QT_MOC_LITERAL(6, 103, 21), // "on_recStudent_clicked"
QT_MOC_LITERAL(7, 125, 21) // "on_recFaculty_clicked"

    },
    "edacams\0on_onlineRegistration_clicked\0"
    "\0on_onlineEnrollment_clicked\0"
    "on_logout_clicked\0on_search_clicked\0"
    "on_recStudent_clicked\0on_recFaculty_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_edacams[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void edacams::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        edacams *_t = static_cast<edacams *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_onlineRegistration_clicked(); break;
        case 1: _t->on_onlineEnrollment_clicked(); break;
        case 2: _t->on_logout_clicked(); break;
        case 3: _t->on_search_clicked(); break;
        case 4: _t->on_recStudent_clicked(); break;
        case 5: _t->on_recFaculty_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject edacams::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_edacams.data,
      qt_meta_data_edacams,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *edacams::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *edacams::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_edacams.stringdata0))
        return static_cast<void*>(const_cast< edacams*>(this));
    return QWidget::qt_metacast(_clname);
}

int edacams::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
