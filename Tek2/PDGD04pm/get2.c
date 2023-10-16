/*
** EPITECH PROJECT, 2023
** PDG
** File description:
** get2
*/

#include <stdlib.h>
#include "list.h"
#include <stdio.h>

unsigned int list_get_size(list_t list)
{
    int size = 0;

    for (; list; list = list->next, size++);
    return (size);
}

void *list_get_elem_at_front(list_t list)
{
    if (list_is_empty(list))
        return (0);
    return (list->value);
}

void *list_get_elem_at_back(list_t list)
{
    if (list_is_empty(list))
        return (0);
    for (; list->next; list = list->next);
    return (list->value);
}

void *list_get_elem_at_position(list_t list,
unsigned int position)
{
    if (list_is_empty(list) || position >= list_get_size(list))
        return (0);
    if (position == 0)
        return (list_get_elem_at_front(list));
    for (; list && position > 0; list = list->next, position--);
    return (list->value);
}
