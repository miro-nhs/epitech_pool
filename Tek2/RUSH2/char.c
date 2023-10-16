/*
** EPITECH PROJECT, 2023
** PDG
** File description:
** char
*/

#include <stdio.h>
#include "char.h"

int nblen(int nb);
Object *new(const Class *class, ...);

typedef struct CharClass {
    Class base;
    char x;
} CharClass;

static void char_ctor(CharClass *this, va_list *args)
{
    if (this == NULL || args == NULL)
        raise("NULL POINTER");
    this->x = va_arg(*args, int);
}

static void char_dtor(CharClass *this)
{
    if (this == NULL)
        raise("NULL POINTER");
}

static char* char_str(CharClass *this)
{
    char *str = malloc(12 + nblen(this->x) + 1);
    if (str == NULL)
        raise("Not enough memory.");
    sprintf(str, "<Char (%c)>", this->x);
    return (str);
}

static CharClass *char_add(const CharClass *this, const CharClass *other)
{
    return (new(Char, (this->x + other->x)));
}

static CharClass *char_sub(const CharClass *this, const CharClass *other)
{
    return (new(Char, (this->x - other->x)));
}

static CharClass *char_mul(const CharClass *this, const CharClass *other)
{
    return (new(Char, (this->x * other->x)));
}

static CharClass *char_div(const CharClass *this, const CharClass *other)
{
    if (other->x == 0)
        raise("Division by 0");
    else
        return (new(Char, (this->x / other->x)));
}

static bool char_eq(const CharClass *this, const CharClass *other)
{
    if (this->x == other->x)
        return (true);
    return (false);
}

static bool char_gt(const CharClass *this, const CharClass *other)
{
    if (this->x > other->x)
        return (true);
    return (false);
}

static bool char_lt(const CharClass *this, const CharClass *other)
{
    if (this->x < other->x)
        return (true);
    return (false);
}

static const CharClass _description = {
    {
    .__size__ = sizeof(CharClass),
    .__name__ = "Char",
    .__ctor__ = (ctor_t)&char_ctor,
    .__dtor__ = (dtor_t)&char_dtor,
    .__str__ = (to_string_t)&char_str,
    .__add__ = (binary_operator_t)&char_add,
    .__sub__ = (binary_operator_t)&char_sub,
    .__mul__ = (binary_operator_t)&char_mul,
    .__div__ = (binary_operator_t)&char_div,
    .__eq__ = (binary_comparator_t)&char_eq,
    .__gt__ = (binary_comparator_t)&char_gt,
    .__lt__ = (binary_comparator_t)&char_lt},
    .x = 0};

const Class *Char = (const Class *)&_description;
