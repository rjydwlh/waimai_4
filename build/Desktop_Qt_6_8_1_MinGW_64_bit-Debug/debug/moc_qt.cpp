/****************************************************************************
** Meta object code from reading C++ file 'qt.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qt.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN2QTE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN2QTE = QtMocHelpers::stringData(
    "QT",
    "on_sign_in_btn_clicked",
    "",
    "checked",
    "on_account_line_editingFinished",
    "on_key_line_editingFinished",
    "on_account_line_textEdited",
    "arg1",
    "on_key_line_textEdited",
    "on_regis_btn_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN2QTE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x08,    1 /* Private */,
       4,    0,   59,    2, 0x08,    3 /* Private */,
       5,    0,   60,    2, 0x08,    4 /* Private */,
       6,    1,   61,    2, 0x08,    5 /* Private */,
       8,    1,   64,    2, 0x08,    7 /* Private */,
       9,    1,   67,    2, 0x08,    9 /* Private */,
       9,    0,   70,    2, 0x08,   11 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject QT::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ZN2QTE.offsetsAndSizes,
    qt_meta_data_ZN2QTE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN2QTE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QT, std::true_type>,
        // method 'on_sign_in_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_account_line_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_key_line_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_account_line_textEdited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_key_line_textEdited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_regis_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_regis_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QT *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_sign_in_btn_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->on_account_line_editingFinished(); break;
        case 2: _t->on_key_line_editingFinished(); break;
        case 3: _t->on_account_line_textEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->on_key_line_textEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->on_regis_btn_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->on_regis_btn_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *QT::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QT::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN2QTE.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int QT::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
