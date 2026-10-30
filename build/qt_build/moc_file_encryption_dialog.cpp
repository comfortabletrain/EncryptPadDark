/****************************************************************************
** Meta object code from reading C++ file 'file_encryption_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qt_ui/file_encryption_dialog.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'file_encryption_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.2. It"
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
struct qt_meta_tag_ZN20FileEncryptionDialogE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN20FileEncryptionDialogE = QtMocHelpers::stringData(
    "FileEncryptionDialog",
    "ToggleWorkInProgress",
    "",
    "WorkDone",
    "Progress",
    "progress_percent",
    "on_uiInputBrowse_clicked",
    "on_uiOutputBrowse_clicked",
    "on_uiParameters_clicked",
    "on_uiSelectKeyFile_clicked",
    "on_uiStart_clicked",
    "on_uiCancel_clicked",
    "on_actionSwitchDirection_triggered",
    "on_actionIOChange_triggered",
    "on_uiInputFile_editingFinished",
    "on_toggleWorkInProgress",
    "value",
    "on_toggleExtension"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN20FileEncryptionDialogE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   98,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,  101,    2, 0x08,    3 /* Private */,
       4,    1,  102,    2, 0x08,    4 /* Private */,
       6,    0,  105,    2, 0x08,    6 /* Private */,
       7,    0,  106,    2, 0x08,    7 /* Private */,
       8,    0,  107,    2, 0x08,    8 /* Private */,
       9,    0,  108,    2, 0x08,    9 /* Private */,
      10,    0,  109,    2, 0x08,   10 /* Private */,
      11,    0,  110,    2, 0x08,   11 /* Private */,
      12,    0,  111,    2, 0x08,   12 /* Private */,
      13,    0,  112,    2, 0x08,   13 /* Private */,
      14,    0,  113,    2, 0x08,   14 /* Private */,
      15,    1,  114,    2, 0x08,   15 /* Private */,
      17,    1,  117,    2, 0x08,   17 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,

       0        // eod
};

Q_CONSTINIT const QMetaObject FileEncryptionDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ZN20FileEncryptionDialogE.offsetsAndSizes,
    qt_meta_data_ZN20FileEncryptionDialogE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN20FileEncryptionDialogE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FileEncryptionDialog, std::true_type>,
        // method 'ToggleWorkInProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'WorkDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Progress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_uiInputBrowse_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_uiOutputBrowse_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_uiParameters_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_uiSelectKeyFile_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_uiStart_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_uiCancel_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSwitchDirection_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionIOChange_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_uiInputFile_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toggleWorkInProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_toggleExtension'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void FileEncryptionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FileEncryptionDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->ToggleWorkInProgress((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->WorkDone(); break;
        case 2: _t->Progress((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->on_uiInputBrowse_clicked(); break;
        case 4: _t->on_uiOutputBrowse_clicked(); break;
        case 5: _t->on_uiParameters_clicked(); break;
        case 6: _t->on_uiSelectKeyFile_clicked(); break;
        case 7: _t->on_uiStart_clicked(); break;
        case 8: _t->on_uiCancel_clicked(); break;
        case 9: _t->on_actionSwitchDirection_triggered(); break;
        case 10: _t->on_actionIOChange_triggered(); break;
        case 11: _t->on_uiInputFile_editingFinished(); break;
        case 12: _t->on_toggleWorkInProgress((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->on_toggleExtension((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (FileEncryptionDialog::*)(bool );
            if (_q_method_type _q_method = &FileEncryptionDialog::ToggleWorkInProgress; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *FileEncryptionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileEncryptionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN20FileEncryptionDialogE.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int FileEncryptionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void FileEncryptionDialog::ToggleWorkInProgress(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
