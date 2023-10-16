/*
** EPITECH PROJECT, 2021
** Paradigms Seminar
** File description:
** Exercice 02
*/

#include <stdio.h>
#include "float.h"

float nblen(float nb);
Object *new(const Class *class, ...);

typedef struct FloatClass {
    Class base;
    float x;
} FloatClass;

static void float_ctor(FloatClass *this, va_list *args)
{
    if (this == NULL || args == NULL)
        raise("NULL POINTER");
    this->x = va_arg(*args, double);
}

static void float_dtor(FloatClass *this)
{
    if (this == NULL)
        raise("NULL POINTER");
}

static char* float_str(FloatClass *this)
{
    char *str = malloc(11 + __FLT_MAX_10_EXP__);
    if (str == NULL)
        raise("Not enough memory.");
    sprintf(str, "<Float (%f)>", this->x);
    return (str);
}

static FloatClass *float_add(const FloatClass *this, const FloatClass *other)
{
    return (new(Float, (this->x + other->x)));
}

static FloatClass *float_sub(const FloatClass *this, const FloatClass *other)
{
    return (new(Float, (this->x - other->x)));
}

static FloatClass *float_mul(const FloatClass *this, const FloatClass *other)
{
    return (new(Float, (this->x * other->x)));
}

static FloatClass *float_div(const FloatClass *this, const FloatClass *other)
{
    if (other->x == 0)
        raise("Division by 0.");
    return (new(Float, (this->x / other->x)));
}

static bool float_eq(const FloatClass *this, const FloatClass *other)
{
    if (this->x == other->x)
        return (true);
    return (false);
}

static bool float_gt(const FloatClass *this, const FloatClass *other)
{
    if (this->x > other->x)
        return (true);
    return (false);
}

static bool float_lt(const FloatClass *this, const FloatClass *other)
{
    if (this->x < other->x)
        return (true);
    return (false);
}

static const FloatClass _description = {
    {
    .__size__ = sizeof(FloatClass),
    .__name__ = "Float",
    .__ctor__ = (ctor_t)&float_ctor,
    .__dtor__ = (dtor_t)&float_dtor,
    .__str__ = (to_string_t)&float_str,
    .__add__ = (binary_operator_t)&float_add,
    .__sub__ = (binary_operator_t)&float_sub,
    .__mul__ = (binary_operator_t)&float_mul,
    .__div__ = (binary_operator_t)&float_div,
    .__eq__ = (binary_comparator_t)&float_eq,
    .__gt__ = (binary_comparator_t)&float_gt,
    .__lt__ = (binary_comparator_t)&float_lt},
    .x = 0};

const Class *Float = (const Class *)&_description;
