/*
** EPITECH PROJECT, 2021
** Paradigms Seminar
** File description:
** Exercice 05
*/

#include <stdlib.h>
#include <stdarg.h>
#include "raise.h"
#include "array.h"
#include "new.h"

typedef struct
{
    Container base;
    Class *_type;
    size_t _size;
    Object **_tab;
} ArrayClass;

typedef struct
{
    Iterator base;
    ArrayClass *_array;
    size_t _idx;
} ArrayIteratorClass;

static void arrayIterator_ctor(ArrayIteratorClass *this, va_list *args)
{
    this->_array = va_arg(*args, ArrayClass *);
    this->_idx = va_arg(*args, int);
}

static bool arrayIterator_eq(ArrayIteratorClass *this,
                             ArrayIteratorClass *other)
{
    return (this->_idx == other->_idx);
}

static bool arrayIterator_gt(ArrayIteratorClass *this,
                             ArrayIteratorClass *other)
{
    return (this->_idx > other->_idx);
}

static bool arrayIterator_lt(ArrayIteratorClass *this,
                             ArrayIteratorClass *other)
{
    return (this->_idx < other->_idx);
}

static void arrayIterator_incr(ArrayIteratorClass *this)
{
    this->_idx += 1;
}

static Object *arrayIterator_getval(ArrayIteratorClass *this)
{
    if (this->_idx >= this->_array->_size)
        raise("Out of range");
    return (this->_array->_tab[this->_idx]);
}

static void arrayIterator_setval(ArrayIteratorClass *this, ...)
{
    va_list ap;

    va_start(ap, this);
    Class *valeur = va_arg(ap, Class*);
    free(this->_array->_tab[this->_idx]);
    this->_array->_tab[this->_idx] = new(this->_array->_type, valeur);
    va_end(ap);
}

static const ArrayIteratorClass ArrayIteratorDescr = {
    {
        {
            .__size__ = sizeof(ArrayIteratorClass),
            .__name__ = "ArrayIterator",
            .__ctor__ = (ctor_t)&arrayIterator_ctor,
            .__dtor__ = NULL,
            .__str__ = NULL,
            .__add__ = NULL,
            .__sub__ = NULL,
            .__mul__ = NULL,
            .__div__ = NULL,
            .__eq__ = (binary_comparator_t)&arrayIterator_eq,
            .__gt__ = (binary_comparator_t)&arrayIterator_gt,
            .__lt__ = (binary_comparator_t)&arrayIterator_lt,
        },
        .__incr__ = (incr_t)&arrayIterator_incr,
        .__getval__ = (getval_t)&arrayIterator_getval,
        .__setval__ = (setval_t)&arrayIterator_setval,
    },
    ._array = NULL,
    ._idx = 0};

static const Class *ArrayIterator = (const Class *)&ArrayIteratorDescr;

static void array_ctor(ArrayClass *this, va_list *args)
{
    Class *value;

    if (this == NULL || args == NULL)
        raise("NULL POINTER");
    this->_size = va_arg(*args, size_t);
    this->_type = va_arg(*args, Class*);
    value = va_arg(*args, Class*);
    this->_tab = malloc(this->_size * sizeof(this->_type));
    for (unsigned int i = 0; i < this->_size; i++)
        this->_tab[i] = va_new(this->_type, args);
}

static void array_dtor(ArrayClass *this)
{
    for (unsigned int i = 0; i < this->_size; i++)
        delete (this->_tab[i]);
    free(this->_tab);
}

static size_t array_len(ArrayClass *this)
{
    return (this->_size);
}

static Iterator *array_begin(ArrayClass *this)
{
    return (new (ArrayIterator, this, 0));
}

static Iterator *array_end(ArrayClass *this)
{
    return (new (ArrayIterator, this, this->_size));
}

static Object *array_getitem(ArrayClass *this, ...)
{
    Object *obj;
    va_list ap;

    va_start(ap, this);
    obj = new(ArrayIterator, this, va_arg(ap, size_t));
    va_end(ap);
    return (obj);
}

static void array_setitem(ArrayClass *this, ...)
{
    va_list ap;
    size_t position;

    va_start(ap, this);
    position = va_arg(ap, size_t);
    free(this->_tab[position]);
    this->_tab[position] = va_new(this->_type, &ap);
    va_end(ap);
}

static const ArrayClass _descr = {
    {
        {
            .__size__ = sizeof(ArrayClass),
            .__name__ = "Array",
            .__ctor__ = (ctor_t)&array_ctor,
            .__dtor__ = (dtor_t)&array_dtor,
            .__str__ = NULL,
            .__add__ = NULL,
            .__sub__ = NULL,
            .__mul__ = NULL,
            .__div__ = NULL,
            .__eq__ = NULL,
            .__gt__ = NULL,
            .__lt__ = NULL,
        },
        .__len__ = (len_t)&array_len,
        .__begin__ = (iter_t)&array_begin,
        .__end__ = (iter_t)&array_end,
        .__getitem__ = (getitem_t)&array_getitem,
        .__setitem__ = (setitem_t)&array_setitem,
    },
    ._type = NULL,
    ._size = 0,
    ._tab = NULL};

const Class *Array = (const Class *)&_descr;
