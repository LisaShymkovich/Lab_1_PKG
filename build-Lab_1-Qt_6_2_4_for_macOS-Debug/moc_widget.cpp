/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Lab_1/widget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    const uint offsetsAndSize[68];
    char stringdata0[372];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 6), // "Widget"
QT_MOC_LITERAL(7, 5), // "Color"
QT_MOC_LITERAL(13, 0), // ""
QT_MOC_LITERAL(14, 5), // "color"
QT_MOC_LITERAL(20, 20), // "Names_For_LeftLabels"
QT_MOC_LITERAL(41, 4), // "text"
QT_MOC_LITERAL(46, 19), // "Names_For_MidLabels"
QT_MOC_LITERAL(66, 21), // "Names_For_RightLabels"
QT_MOC_LITERAL(88, 9), // "getValues"
QT_MOC_LITERAL(98, 10), // "QList<int>"
QT_MOC_LITERAL(109, 10), // "space_name"
QT_MOC_LITERAL(120, 8), // "value_id"
QT_MOC_LITERAL(129, 8), // "SetColor"
QT_MOC_LITERAL(138, 1), // "a"
QT_MOC_LITERAL(140, 1), // "b"
QT_MOC_LITERAL(142, 1), // "c"
QT_MOC_LITERAL(144, 1), // "d"
QT_MOC_LITERAL(146, 10), // "paintEvent"
QT_MOC_LITERAL(157, 12), // "QPaintEvent*"
QT_MOC_LITERAL(170, 5), // "event"
QT_MOC_LITERAL(176, 12), // "slidersMoved"
QT_MOC_LITERAL(189, 12), // "spinsChanged"
QT_MOC_LITERAL(202, 17), // "setSpacesAndLabel"
QT_MOC_LITERAL(220, 13), // "setColorLabel"
QT_MOC_LITERAL(234, 12), // "setSpinBoxes"
QT_MOC_LITERAL(247, 10), // "valuesLeft"
QT_MOC_LITERAL(258, 9), // "valuesMid"
QT_MOC_LITERAL(268, 11), // "valuesRight"
QT_MOC_LITERAL(280, 10), // "setSliders"
QT_MOC_LITERAL(291, 16), // "setSpinsAndLabel"
QT_MOC_LITERAL(308, 15), // "From_RGB_To_XYZ"
QT_MOC_LITERAL(324, 15), // "From_XYZ_To_LAB"
QT_MOC_LITERAL(340, 15), // "From_XYZ_To_RGB"
QT_MOC_LITERAL(356, 15) // "From_LAB_To_XYZ"

    },
    "Widget\0Color\0\0color\0Names_For_LeftLabels\0"
    "text\0Names_For_MidLabels\0Names_For_RightLabels\0"
    "getValues\0QList<int>\0space_name\0"
    "value_id\0SetColor\0a\0b\0c\0d\0paintEvent\0"
    "QPaintEvent*\0event\0slidersMoved\0"
    "spinsChanged\0setSpacesAndLabel\0"
    "setColorLabel\0setSpinBoxes\0valuesLeft\0"
    "valuesMid\0valuesRight\0setSliders\0"
    "setSpinsAndLabel\0From_RGB_To_XYZ\0"
    "From_XYZ_To_LAB\0From_XYZ_To_RGB\0"
    "From_LAB_To_XYZ"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  128,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,  131,    2, 0x0a,    3 /* Public */,
       6,    1,  134,    2, 0x0a,    5 /* Public */,
       7,    1,  137,    2, 0x0a,    7 /* Public */,
       8,    1,  140,    2, 0x0a,    9 /* Public */,
      12,    5,  143,    2, 0x0a,   11 /* Public */,
      12,    4,  154,    2, 0x2a,   17 /* Public | MethodCloned */,
      17,    1,  163,    2, 0x0a,   22 /* Public */,
      20,    1,  166,    2, 0x0a,   24 /* Public */,
      21,    1,  169,    2, 0x0a,   26 /* Public */,
      22,    0,  172,    2, 0x0a,   28 /* Public */,
      23,    0,  173,    2, 0x0a,   29 /* Public */,
      24,    3,  174,    2, 0x0a,   30 /* Public */,
      28,    1,  181,    2, 0x0a,   34 /* Public */,
      29,    0,  184,    2, 0x0a,   36 /* Public */,
      30,    1,  185,    2, 0x0a,   37 /* Public */,
      31,    1,  188,    2, 0x0a,   39 /* Public */,
      32,    1,  191,    2, 0x0a,   41 /* Public */,
      33,    1,  194,    2, 0x0a,   43 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    0x80000000 | 9, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   11,   13,   14,   15,   16,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int, QMetaType::Int, QMetaType::Int,   11,   13,   14,   15,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9, 0x80000000 | 9,   25,   26,   27,
    QMetaType::Void, 0x80000000 | 9,   25,
    QMetaType::Void,
    QMetaType::Double, QMetaType::Double,   13,
    QMetaType::Double, QMetaType::Double,   13,
    QMetaType::Double, QMetaType::Double,   13,
    QMetaType::Double, QMetaType::Double,   13,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Widget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Color((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 1: _t->Names_For_LeftLabels((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->Names_For_MidLabels((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->Names_For_RightLabels((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: { QList<int> _r = _t->getValues((*reinterpret_cast< std::add_pointer_t<space_name>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->SetColor((*reinterpret_cast< std::add_pointer_t<space_name>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5]))); break;
        case 6: _t->SetColor((*reinterpret_cast< std::add_pointer_t<space_name>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 7: _t->paintEvent((*reinterpret_cast< std::add_pointer_t<QPaintEvent*>>(_a[1]))); break;
        case 8: _t->slidersMoved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->spinsChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->setSpacesAndLabel(); break;
        case 11: _t->setColorLabel(); break;
        case 12: _t->setSpinBoxes((*reinterpret_cast< std::add_pointer_t<QList<int>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<int>>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QList<int>>>(_a[3]))); break;
        case 13: _t->setSliders((*reinterpret_cast< std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 14: _t->setSpinsAndLabel(); break;
        case 15: { double _r = _t->From_RGB_To_XYZ((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 16: { double _r = _t->From_XYZ_To_LAB((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 17: { double _r = _t->From_XYZ_To_RGB((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 18: { double _r = _t->From_LAB_To_XYZ((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Widget::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Widget::Color)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Widget.offsetsAndSize,
    qt_meta_data_Widget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Widget_t
, QtPrivate::TypeAndForceComplete<Widget, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<int>, std::false_type>, QtPrivate::TypeAndForceComplete<space_name, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<space_name, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<space_name, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPaintEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<int>, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<int>, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<int>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<int>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>


>,
    nullptr
} };


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void Widget::Color(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
