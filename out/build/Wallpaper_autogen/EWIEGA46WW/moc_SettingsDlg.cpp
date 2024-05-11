/****************************************************************************
** Meta object code from reading C++ file 'SettingsDlg.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../SettingsDlg.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SettingsDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
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
struct qt_meta_stringdata_CLASSSettingsDlgENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSSettingsDlgENDCLASS = QtMocHelpers::stringData(
    "SettingsDlg",
    "modelChanged",
    "",
    "ModelType",
    "emojiChanged",
    "EmojiType",
    "backgroundChanged",
    "BackgroundType",
    "selectBackground",
    "on_model1btn_clicked",
    "on_model2btn_clicked",
    "on_model3btn_clicked",
    "on_settingsbtn_clicked",
    "on_closeBtn_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSettingsDlgENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[12];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[13];
    char stringdata5[10];
    char stringdata6[18];
    char stringdata7[15];
    char stringdata8[17];
    char stringdata9[21];
    char stringdata10[21];
    char stringdata11[21];
    char stringdata12[23];
    char stringdata13[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSettingsDlgENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSettingsDlgENDCLASS_t qt_meta_stringdata_CLASSSettingsDlgENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "SettingsDlg"
        QT_MOC_LITERAL(12, 12),  // "modelChanged"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 9),  // "ModelType"
        QT_MOC_LITERAL(36, 12),  // "emojiChanged"
        QT_MOC_LITERAL(49, 9),  // "EmojiType"
        QT_MOC_LITERAL(59, 17),  // "backgroundChanged"
        QT_MOC_LITERAL(77, 14),  // "BackgroundType"
        QT_MOC_LITERAL(92, 16),  // "selectBackground"
        QT_MOC_LITERAL(109, 20),  // "on_model1btn_clicked"
        QT_MOC_LITERAL(130, 20),  // "on_model2btn_clicked"
        QT_MOC_LITERAL(151, 20),  // "on_model3btn_clicked"
        QT_MOC_LITERAL(172, 22),  // "on_settingsbtn_clicked"
        QT_MOC_LITERAL(195, 19)   // "on_closeBtn_clicked"
    },
    "SettingsDlg",
    "modelChanged",
    "",
    "ModelType",
    "emojiChanged",
    "EmojiType",
    "backgroundChanged",
    "BackgroundType",
    "selectBackground",
    "on_model1btn_clicked",
    "on_model2btn_clicked",
    "on_model3btn_clicked",
    "on_settingsbtn_clicked",
    "on_closeBtn_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSettingsDlgENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,    1 /* Public */,
       4,    1,   71,    2, 0x06,    3 /* Public */,
       6,    1,   74,    2, 0x06,    5 /* Public */,
       8,    0,   77,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   78,    2, 0x0a,    8 /* Public */,
      10,    0,   79,    2, 0x0a,    9 /* Public */,
      11,    0,   80,    2, 0x0a,   10 /* Public */,
      12,    0,   81,    2, 0x0a,   11 /* Public */,
      13,    0,   82,    2, 0x0a,   12 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SettingsDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSSettingsDlgENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSettingsDlgENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSettingsDlgENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SettingsDlg, std::true_type>,
        // method 'modelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ModelType, std::false_type>,
        // method 'emojiChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<EmojiType, std::false_type>,
        // method 'backgroundChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<BackgroundType, std::false_type>,
        // method 'selectBackground'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_model1btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_model2btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_model3btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_settingsbtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_closeBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SettingsDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SettingsDlg *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->modelChanged((*reinterpret_cast< std::add_pointer_t<ModelType>>(_a[1]))); break;
        case 1: _t->emojiChanged((*reinterpret_cast< std::add_pointer_t<EmojiType>>(_a[1]))); break;
        case 2: _t->backgroundChanged((*reinterpret_cast< std::add_pointer_t<BackgroundType>>(_a[1]))); break;
        case 3: _t->selectBackground(); break;
        case 4: _t->on_model1btn_clicked(); break;
        case 5: _t->on_model2btn_clicked(); break;
        case 6: _t->on_model3btn_clicked(); break;
        case 7: _t->on_settingsbtn_clicked(); break;
        case 8: _t->on_closeBtn_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SettingsDlg::*)(ModelType );
            if (_t _q_method = &SettingsDlg::modelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SettingsDlg::*)(EmojiType );
            if (_t _q_method = &SettingsDlg::emojiChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SettingsDlg::*)(BackgroundType );
            if (_t _q_method = &SettingsDlg::backgroundChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SettingsDlg::*)();
            if (_t _q_method = &SettingsDlg::selectBackground; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *SettingsDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSettingsDlgENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SettingsDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void SettingsDlg::modelChanged(ModelType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SettingsDlg::emojiChanged(EmojiType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SettingsDlg::backgroundChanged(BackgroundType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SettingsDlg::selectBackground()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
