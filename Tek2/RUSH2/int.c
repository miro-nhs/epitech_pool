/*
** EPITECH PROJECT, 2021
** Paradigms Seminar
** File description:
** Exercice 02
*/

#include <stdio.h>
#include "int.h"

int nblen(int nb);
Object *new(const Class *class, ...);

typedef struct IntClass {
    Class base;
    int x;
} IntClass;

static void int_ctor(IntClass *this, va_list *args)
{
    if (this == NULL || args == NULL)
        raise("NULL POINTER");
    this->x = va_arg(*args, int);
}

static void int_dtor(IntClass *this)
{
    if (this == NULL)
        raise("NULL POINTER");
}

static char* int_str(IntClass *this)
{
    char *str = malloc(12 + nblen(this->x) + 10);
    if (str == NULL)
        raise("Not enough memory.");
    sprintf(str, "<Int (%d)>", this->x);
    return (str);
}

static IntClass *int_add(const IntClass *this, const IntClass *other)
{
    return (new(Int, (this->x + other->x)));
}

static IntClass *int_sub(const IntClass *this, const IntClass *other)
{
    return (new(Int, (this->x - other->x)));
}

static IntClass *int_mul(const IntClass *this, const IntClass *other)
{
    return (new(Int, (this->x * other->x)));
}

static IntClass *int_div(const IntClass *this, const IntClass *other)
{
    if (other->x == 0)
        raise("Division by 0.");
    return (new(Int, (this->x / other->x)));
}

static bool int_eq(const IntClass *this, const IntClass *other)
{
    if (this->x == other->x)
        return (true);
    return (false);
}

static bool int_gt(const IntClass *this, const IntClass *other)
{
    if (this->x > other->x)
        return (true);
    return (false);
}

static bool int_lt(const IntClass *this, const IntClass *other)
{
    if (this->x < other->x)
        return (true);
    return (false);
}

static const IntClass _description = {
    {
    .__size__ = sizeof(IntClass),
    .__name__ = "Int",
    .__ctor__ = (ctor_t)&int_ctor,
    .__dtor__ = (dtor_t)&int_dtor,
    .__str__ = (to_string_t)&int_str,
    .__add__ = (binary_operator_t)&int_add,
    .__sub__ = (binary_operator_t)&int_sub,
    .__mul__ = (binary_operator_t)&int_mul,
    .__div__ = (binary_operator_t)&int_div,
    .__eq__ = (binary_comparator_t)&int_eq,
    .__gt__ = (binary_comparator_t)&int_gt,
    .__lt__ = (binary_comparator_t)&int_lt},
    .x = 0};

const Class *Int = (const Class *)&_description;
