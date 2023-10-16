/*
** EPITECH PROJECT, 2023
** Paradimgs Seminar
** File description:
** Exercice 01
*/

#include "object.h"
Object *va_new(const Class *class, va_list* ap);

int nblen(int nb)
{
    int i = 0;

    for (nb = nb > 0 ? nb : nb * -10; nb > 0; i++, nb /= 10);
    return (i);
}

Object *new(const Class *class, ...)
{
    va_list list;
    va_start(list, class);
    Class *new_object = va_new(class, &list);
    va_end(list);
    return (new_object);
}

void delete(Object *ptr)
{
    if (ptr == NULL)
        return;
    if (((Class *)ptr)->__dtor__ != NULL)
        ((Class *)ptr)->__dtor__(ptr);
    free(ptr);
    ptr = NULL;
}

Object *va_new(const Class *class, va_list* ap)
{
    Class *obj = malloc(class->__size__);

    if (obj == NULL)
        raise("Not enough memory.");
    memcpy(obj, class, class->__size__);
    if (class->__ctor__ != NULL)
        class->__ctor__(obj, ap);
    return (obj);
}
