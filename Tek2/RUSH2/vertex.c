/*
** EPITECH PROJECT, 2023
** PDG
** File description:
** vertex
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "vertex.h"
Object *new(const Class *class, ...);
int nblen(int nb);

typedef struct VertexClass {
    Class base;
    int x, y, z;
} VertexClass;

static void vertex_ctor(VertexClass *this, va_list *args)
{
    if (this == NULL || args == NULL)
        raise("NULL POINTER");
    this->x = va_arg(*args, int);
    this->y = va_arg(*args, int);
    this->z = va_arg(*args, int);
}

static void vertex_dtor(VertexClass *this)
{
    if (this == NULL)
        raise("NULL POINTER");
}

static char *vertex_str(VertexClass *this)
{
    char *str = malloc(15 + nblen(this->x) + nblen(this->y) +
    nblen(this->z) + 3);
    if (str == NULL)
        raise("Not enough memory.");
    sprintf(str, "<Vertex (%d, %d, %d)>", this->x, this->y,
    this->z);
    return (str);
}

static VertexClass *vertex_add(const VertexClass *this, const VertexClass *other)
{
    return (new(Vertex, (this->x + other->x), (this->y + other ->y), (this->z + other ->z)));
}

static VertexClass *vertex_sub(const VertexClass *this, const VertexClass *other)
{
    return (new(Vertex, (this->x - other->x), (this->y - other ->y), this->z - other ->z));
}

static const VertexClass _description = {
    {
    .__size__ = sizeof(VertexClass),
    .__name__ = "Vertex",
    .__ctor__ = (ctor_t)&vertex_ctor,
    .__dtor__ = (dtor_t)&vertex_dtor,
    .__str__ = (to_string_t)&vertex_str,
    .__add__ = (binary_operator_t)&vertex_add,
    .__sub__ = (binary_operator_t)&vertex_sub,
    .__mul__ = NULL,
    .__div__ = NULL,
    .__eq__ = NULL,
    .__gt__ = NULL,
    .__lt__ = NULL},
    .x = 0,
    .y = 0,
    .z = 0};

const Class *Vertex = (const Class *)&_description;
