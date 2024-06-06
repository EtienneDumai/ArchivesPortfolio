/****************************************************************************
** Meta object code from reading C++ file 'modelelecteur.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../modelelecteur.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modelelecteur.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSModeleLecteurENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSModeleLecteurENDCLASS = QtMocHelpers::stringData(
    "ModeleLecteur",
    "imageChanged",
    "",
    "chemin",
    "titre",
    "categorie",
    "diapoChanged",
    "titreDiapo",
    "demandeAvancement",
    "demandeReculement",
    "demandeAffichageImageDebut",
    "demanderAffichage1erDiapo"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSModeleLecteurENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[14];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[6];
    char stringdata5[10];
    char stringdata6[13];
    char stringdata7[11];
    char stringdata8[18];
    char stringdata9[18];
    char stringdata10[27];
    char stringdata11[26];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSModeleLecteurENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSModeleLecteurENDCLASS_t qt_meta_stringdata_CLASSModeleLecteurENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "ModeleLecteur"
        QT_MOC_LITERAL(14, 12),  // "imageChanged"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 6),  // "chemin"
        QT_MOC_LITERAL(35, 5),  // "titre"
        QT_MOC_LITERAL(41, 9),  // "categorie"
        QT_MOC_LITERAL(51, 12),  // "diapoChanged"
        QT_MOC_LITERAL(64, 10),  // "titreDiapo"
        QT_MOC_LITERAL(75, 17),  // "demandeAvancement"
        QT_MOC_LITERAL(93, 17),  // "demandeReculement"
        QT_MOC_LITERAL(111, 26),  // "demandeAffichageImageDebut"
        QT_MOC_LITERAL(138, 25)   // "demanderAffichage1erDiapo"
    },
    "ModeleLecteur",
    "imageChanged",
    "",
    "chemin",
    "titre",
    "categorie",
    "diapoChanged",
    "titreDiapo",
    "demandeAvancement",
    "demandeReculement",
    "demandeAffichageImageDebut",
    "demanderAffichage1erDiapo"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSModeleLecteurENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   50,    2, 0x06,    1 /* Public */,
       6,    1,   57,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   60,    2, 0x0a,    7 /* Public */,
       9,    0,   61,    2, 0x0a,    8 /* Public */,
      10,    0,   62,    2, 0x0a,    9 /* Public */,
      11,    0,   63,    2, 0x0a,   10 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ModeleLecteur::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSModeleLecteurENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSModeleLecteurENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSModeleLecteurENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ModeleLecteur, std::true_type>,
        // method 'imageChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'diapoChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'demandeAvancement'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'demandeReculement'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'demandeAffichageImageDebut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'demanderAffichage1erDiapo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ModeleLecteur::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ModeleLecteur *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->imageChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 1: _t->diapoChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->demandeAvancement(); break;
        case 3: _t->demandeReculement(); break;
        case 4: _t->demandeAffichageImageDebut(); break;
        case 5: _t->demanderAffichage1erDiapo(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ModeleLecteur::*)(const QString & , const QString & , const QString & );
            if (_t _q_method = &ModeleLecteur::imageChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ModeleLecteur::*)(const QString & );
            if (_t _q_method = &ModeleLecteur::diapoChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *ModeleLecteur::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModeleLecteur::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSModeleLecteurENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ModeleLecteur::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ModeleLecteur::imageChanged(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ModeleLecteur::diapoChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
