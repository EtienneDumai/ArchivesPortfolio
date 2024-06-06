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
    "sendDiapoInfos",
    "Diaporamas",
    "demandeAvancement",
    "demandeReculement",
    "demandeEnleverDiapo",
    "demanderInfosDiapos",
    "receptionDemandeChangementDiaporama",
    "InfosDiaporama",
    "receptionDemandeChangementVitesse"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSModeleLecteurENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[14];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[6];
    char stringdata5[10];
    char stringdata6[13];
    char stringdata7[11];
    char stringdata8[15];
    char stringdata9[11];
    char stringdata10[18];
    char stringdata11[18];
    char stringdata12[20];
    char stringdata13[20];
    char stringdata14[36];
    char stringdata15[15];
    char stringdata16[34];
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
        QT_MOC_LITERAL(75, 14),  // "sendDiapoInfos"
        QT_MOC_LITERAL(90, 10),  // "Diaporamas"
        QT_MOC_LITERAL(101, 17),  // "demandeAvancement"
        QT_MOC_LITERAL(119, 17),  // "demandeReculement"
        QT_MOC_LITERAL(137, 19),  // "demandeEnleverDiapo"
        QT_MOC_LITERAL(157, 19),  // "demanderInfosDiapos"
        QT_MOC_LITERAL(177, 35),  // "receptionDemandeChangementDia..."
        QT_MOC_LITERAL(213, 14),  // "InfosDiaporama"
        QT_MOC_LITERAL(228, 33)   // "receptionDemandeChangementVit..."
    },
    "ModeleLecteur",
    "imageChanged",
    "",
    "chemin",
    "titre",
    "categorie",
    "diapoChanged",
    "titreDiapo",
    "sendDiapoInfos",
    "Diaporamas",
    "demandeAvancement",
    "demandeReculement",
    "demandeEnleverDiapo",
    "demanderInfosDiapos",
    "receptionDemandeChangementDiaporama",
    "InfosDiaporama",
    "receptionDemandeChangementVitesse"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSModeleLecteurENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   68,    2, 0x06,    1 /* Public */,
       6,    1,   75,    2, 0x06,    5 /* Public */,
       8,    1,   78,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,   81,    2, 0x0a,    9 /* Public */,
      11,    0,   82,    2, 0x0a,   10 /* Public */,
      12,    0,   83,    2, 0x0a,   11 /* Public */,
      13,    0,   84,    2, 0x0a,   12 /* Public */,
      14,    1,   85,    2, 0x0a,   13 /* Public */,
      16,    1,   88,    2, 0x0a,   15 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 9,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::Void, QMetaType::UInt,    2,

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
        // method 'sendDiapoInfos'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Diaporamas, std::false_type>,
        // method 'demandeAvancement'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'demandeReculement'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'demandeEnleverDiapo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'demanderInfosDiapos'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receptionDemandeChangementDiaporama'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<InfosDiaporama, std::false_type>,
        // method 'receptionDemandeChangementVitesse'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned int, std::false_type>
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
        case 2: _t->sendDiapoInfos((*reinterpret_cast< std::add_pointer_t<Diaporamas>>(_a[1]))); break;
        case 3: _t->demandeAvancement(); break;
        case 4: _t->demandeReculement(); break;
        case 5: _t->demandeEnleverDiapo(); break;
        case 6: _t->demanderInfosDiapos(); break;
        case 7: _t->receptionDemandeChangementDiaporama((*reinterpret_cast< std::add_pointer_t<InfosDiaporama>>(_a[1]))); break;
        case 8: _t->receptionDemandeChangementVitesse((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
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
        {
            using _t = void (ModeleLecteur::*)(Diaporamas );
            if (_t _q_method = &ModeleLecteur::sendDiapoInfos; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
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
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
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

// SIGNAL 2
void ModeleLecteur::sendDiapoInfos(Diaporamas _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
