/****************************************************************************
** Meta object code from reading C++ file 'choixvitessedefilement.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../choixvitessedefilement.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'choixvitessedefilement.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
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

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSchoixVitesseDefilementENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSchoixVitesseDefilementENDCLASS = QtMocHelpers::stringData(
    "choixVitesseDefilement",
    "envoyerVitesseDfl",
    "",
    "enableButton",
    "demanderEnvoiValeur"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSchoixVitesseDefilementENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[23];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSchoixVitesseDefilementENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSchoixVitesseDefilementENDCLASS_t qt_meta_stringdata_CLASSchoixVitesseDefilementENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22),  // "choixVitesseDefilement"
        QT_MOC_LITERAL(23, 17),  // "envoyerVitesseDfl"
        QT_MOC_LITERAL(41, 0),  // ""
        QT_MOC_LITERAL(42, 12),  // "enableButton"
        QT_MOC_LITERAL(55, 19)   // "demanderEnvoiValeur"
    },
    "choixVitesseDefilement",
    "envoyerVitesseDfl",
    "",
    "enableButton",
    "demanderEnvoiValeur"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSchoixVitesseDefilementENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   35,    2, 0x08,    3 /* Private */,
       4,    0,   36,    2, 0x08,    4 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject choixVitesseDefilement::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSchoixVitesseDefilementENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSchoixVitesseDefilementENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSchoixVitesseDefilementENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<choixVitesseDefilement, std::true_type>,
        // method 'envoyerVitesseDfl'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned int, std::false_type>,
        // method 'enableButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'demanderEnvoiValeur'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void choixVitesseDefilement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<choixVitesseDefilement *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->envoyerVitesseDfl((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 1: _t->enableButton(); break;
        case 2: _t->demanderEnvoiValeur(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (choixVitesseDefilement::*)(unsigned int );
            if (_t _q_method = &choixVitesseDefilement::envoyerVitesseDfl; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *choixVitesseDefilement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *choixVitesseDefilement::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSchoixVitesseDefilementENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int choixVitesseDefilement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void choixVitesseDefilement::envoyerVitesseDfl(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
