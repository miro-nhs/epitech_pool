/*
** EPITECH PROJECT, 2021
** Paradigms Seminar
** File description:
** Exercice 02
*/

#include <stdio.h>
#include "point.h"
int nblen(int nb);
Object *new(const Class *class, ...);

typedef struct PointClass {
    Class base;
    int x, y;
} PointClass;

static void point_ctor(PointClass *this, va_list *args)
{
    if (this == NULL || args == NULL)
        raise("NULL POINTER");
    this->x = va_arg(*args, int);
    this->y = va_arg(*args, int);
}

static void point_dtor(PointClass *this)
{
    if (this == NULL)
        raise("NULL POINTER");
}

static char* point_str(PointClass *this)
{
    char *str = malloc(12 + nblen(this->x) + nblen(this->y) + 2);
    if (str == NULL)
        raise("Not enough memory.");
    sprintf(str, "<Point (%d, %d)>", this->x, this->y);
    return (str);
}

static PointClass *point_add(const PointClass *this, const PointClass *other)
{
    return (new(Point, (this->x + other->x), (this->y + other ->y)));
}

static PointClass *point_sub(const PointClass *this, const PointClass *other)
{
    return (new(Point, (this->x - other->x), (this->y - other ->y)));
}

static const PointClass _description = {
    {
    .__size__ = sizeof(PointClass),
    .__name__ = "Point",
    .__ctor__ = (ctor_t)&point_ctor,
    .__dtor__ = (dtor_t)&point_dtor,
    .__str__ = (to_string_t)&point_str,
    .__add__ = (binary_operator_t)&point_add,
    .__sub__ = (binary_operator_t)&point_sub,
    .__mul__ = NULL,
    .__div__ = NULL,
    .__eq__ = NULL,
    .__gt__ = NULL,
    .__lt__ = NULL},
    .x = 0,
    .y = 0};

const Class *Point = (const Class *)&_description;
