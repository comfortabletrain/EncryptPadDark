/****************************************************************************
** Meta object code from reading C++ file 'fake_vim_edit.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qt_ui/fake_vim_edit.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fake_vim_edit.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5ProxyE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN5ProxyE = QtMocHelpers::stringData(
    "Proxy",
    "handleInput",
    "",
    "keys",
    "requestRead",
    "path",
    "requestSave",
    "requestSaveAndQuit",
    "requestQuit",
    "requestRun",
    "changeStatusData",
    "info",
    "highlightMatches",
    "pattern",
    "changeStatusMessage",
    "contents",
    "cursorPos",
    "changeExtraInformation",
    "updateStatusBar",
    "handleExCommand",
    "bool*",
    "handled",
    "FakeVim::Internal::ExCommand",
    "cmd",
    "requestSetBlockSelection",
    "QTextCursor",
    "tc",
    "requestDisableBlockSelection",
    "updateBlockSelection",
    "requestHasBlockSelection",
    "on",
    "indentRegion",
    "beginBlock",
    "endBlock",
    "typedChar",
    "checkForElectricCharacter",
    "result",
    "c",
    "thinCursorModeUpdated",
    "thinCursorMode"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN5ProxyE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  140,    2, 0x06,    1 /* Public */,
       4,    1,  143,    2, 0x06,    3 /* Public */,
       6,    0,  146,    2, 0x06,    5 /* Public */,
       7,    0,  147,    2, 0x06,    6 /* Public */,
       6,    1,  148,    2, 0x06,    7 /* Public */,
       7,    1,  151,    2, 0x06,    9 /* Public */,
       8,    0,  154,    2, 0x06,   11 /* Public */,
       9,    0,  155,    2, 0x06,   12 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,  156,    2, 0x0a,   13 /* Public */,
      12,    1,  159,    2, 0x0a,   15 /* Public */,
      14,    2,  162,    2, 0x0a,   17 /* Public */,
      17,    1,  167,    2, 0x0a,   20 /* Public */,
      18,    0,  170,    2, 0x0a,   22 /* Public */,
      19,    2,  171,    2, 0x0a,   23 /* Public */,
      24,    1,  176,    2, 0x0a,   26 /* Public */,
      27,    0,  179,    2, 0x0a,   28 /* Public */,
      28,    0,  180,    2, 0x0a,   29 /* Public */,
      29,    1,  181,    2, 0x0a,   30 /* Public */,
      31,    3,  184,    2, 0x0a,   32 /* Public */,
      35,    2,  191,    2, 0x0a,   36 /* Public */,
      38,    1,  196,    2, 0x0a,   39 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   15,   16,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20, 0x80000000 | 22,   21,   23,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,   30,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QChar,   32,   33,   34,
    QMetaType::Void, 0x80000000 | 20, QMetaType::QChar,   36,   37,
    QMetaType::Void, QMetaType::Bool,   39,

       0        // eod
};

Q_CONSTINIT const QMetaObject Proxy::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN5ProxyE.offsetsAndSizes,
    qt_meta_data_ZN5ProxyE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN5ProxyE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Proxy, std::true_type>,
        // method 'handleInput'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'requestRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'requestSave'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'requestSaveAndQuit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'requestSave'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'requestSaveAndQuit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'requestQuit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'requestRun'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changeStatusData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'highlightMatches'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'changeStatusMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'changeExtraInformation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'updateStatusBar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleExCommand'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const FakeVim::Internal::ExCommand &, std::false_type>,
        // method 'requestSetBlockSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTextCursor &, std::false_type>,
        // method 'requestDisableBlockSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateBlockSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'requestHasBlockSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool *, std::false_type>,
        // method 'indentRegion'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QChar, std::false_type>,
        // method 'checkForElectricCharacter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QChar, std::false_type>,
        // method 'thinCursorModeUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void Proxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Proxy *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->handleInput((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->requestRead((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->requestSave(); break;
        case 3: _t->requestSaveAndQuit(); break;
        case 4: _t->requestSave((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->requestSaveAndQuit((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->requestQuit(); break;
        case 7: _t->requestRun(); break;
        case 8: _t->changeStatusData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->highlightMatches((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->changeStatusMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 11: _t->changeExtraInformation((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->updateStatusBar(); break;
        case 13: _t->handleExCommand((*reinterpret_cast< std::add_pointer_t<bool*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<FakeVim::Internal::ExCommand>>(_a[2]))); break;
        case 14: _t->requestSetBlockSelection((*reinterpret_cast< std::add_pointer_t<QTextCursor>>(_a[1]))); break;
        case 15: _t->requestDisableBlockSelection(); break;
        case 16: _t->updateBlockSelection(); break;
        case 17: _t->requestHasBlockSelection((*reinterpret_cast< std::add_pointer_t<bool*>>(_a[1]))); break;
        case 18: _t->indentRegion((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QChar>>(_a[3]))); break;
        case 19: _t->checkForElectricCharacter((*reinterpret_cast< std::add_pointer_t<bool*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QChar>>(_a[2]))); break;
        case 20: _t->thinCursorModeUpdated((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (Proxy::*)(const QString & );
            if (_q_method_type _q_method = &Proxy::handleInput; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (Proxy::*)(const QString & );
            if (_q_method_type _q_method = &Proxy::requestRead; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (Proxy::*)();
            if (_q_method_type _q_method = &Proxy::requestSave; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (Proxy::*)();
            if (_q_method_type _q_method = &Proxy::requestSaveAndQuit; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (Proxy::*)(const QString & );
            if (_q_method_type _q_method = &Proxy::requestSave; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (Proxy::*)(const QString & );
            if (_q_method_type _q_method = &Proxy::requestSaveAndQuit; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (Proxy::*)();
            if (_q_method_type _q_method = &Proxy::requestQuit; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (Proxy::*)();
            if (_q_method_type _q_method = &Proxy::requestRun; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject *Proxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Proxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN5ProxyE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Proxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void Proxy::handleInput(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Proxy::requestRead(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Proxy::requestSave()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Proxy::requestSaveAndQuit()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Proxy::requestSave(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Proxy::requestSaveAndQuit(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Proxy::requestQuit()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Proxy::requestRun()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
