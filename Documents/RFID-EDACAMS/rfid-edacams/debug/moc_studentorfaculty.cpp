/****************************************************************************
** Meta object code from reading C++ file 'studentorfaculty.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../studentorfaculty.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'studentorfaculty.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_studentORfaculty_t {
    QByteArrayData data[4];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_studentORfaculty_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_studentORfaculty_t qt_meta_stringdata_studentORfaculty = {
    {
QT_MOC_LITERAL(0, 0, 16), // "studentORfaculty"
QT_MOC_LITERAL(1, 17, 18), // "on_student_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 18) // "on_faculty_clicked"

    },
    "studentORfaculty\0on_student_clicked\0"
    "\0on_faculty_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_studentORfaculty[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void studentORfaculty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        studentORfaculty *_t = static_cast<studentORfaculty *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_student_clicked(); break;
        case 1: _t->on_faculty_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject studentORfaculty::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_studentORfaculty.data,
      qt_meta_data_studentORfaculty,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *studentORfaculty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *studentORfaculty::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_studentORfaculty.stringdata0))
        return static_cast<void*>(const_cast< studentORfaculty*>(this));
    return QWidget::qt_metacast(_clname);
}

int studentORfaculty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
