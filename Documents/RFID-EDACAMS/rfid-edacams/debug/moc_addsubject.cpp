/****************************************************************************
** Meta object code from reading C++ file 'addsubject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../addsubject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addsubject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_addsubject_t {
    QByteArrayData data[12];
    char stringdata0[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_addsubject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_addsubject_t qt_meta_stringdata_addsubject = {
    {
QT_MOC_LITERAL(0, 0, 10), // "addsubject"
QT_MOC_LITERAL(1, 11, 14), // "on_add_clicked"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 17), // "on_cancel_clicked"
QT_MOC_LITERAL(4, 45, 21), // "on_addsection_clicked"
QT_MOC_LITERAL(5, 67, 22), // "on_subject_textChanged"
QT_MOC_LITERAL(6, 90, 4), // "arg1"
QT_MOC_LITERAL(7, 95, 26), // "on_description_textChanged"
QT_MOC_LITERAL(8, 122, 27), // "on_units_currentTextChanged"
QT_MOC_LITERAL(9, 150, 27), // "on_prerequisite_textChanged"
QT_MOC_LITERAL(10, 178, 32), // "on_subjectfor_currentTextChanged"
QT_MOC_LITERAL(11, 211, 33) // "on_subjecttype_currentTextCha..."

    },
    "addsubject\0on_add_clicked\0\0on_cancel_clicked\0"
    "on_addsection_clicked\0on_subject_textChanged\0"
    "arg1\0on_description_textChanged\0"
    "on_units_currentTextChanged\0"
    "on_prerequisite_textChanged\0"
    "on_subjectfor_currentTextChanged\0"
    "on_subjecttype_currentTextChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_addsubject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    1,   62,    2, 0x08 /* Private */,
       7,    1,   65,    2, 0x08 /* Private */,
       8,    1,   68,    2, 0x08 /* Private */,
       9,    1,   71,    2, 0x08 /* Private */,
      10,    1,   74,    2, 0x08 /* Private */,
      11,    1,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void addsubject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        addsubject *_t = static_cast<addsubject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_add_clicked(); break;
        case 1: _t->on_cancel_clicked(); break;
        case 2: _t->on_addsection_clicked(); break;
        case 3: _t->on_subject_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_description_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_units_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_prerequisite_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_subjectfor_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_subjecttype_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject addsubject::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_addsubject.data,
      qt_meta_data_addsubject,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *addsubject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *addsubject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_addsubject.stringdata0))
        return static_cast<void*>(const_cast< addsubject*>(this));
    return QWidget::qt_metacast(_clname);
}

int addsubject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
