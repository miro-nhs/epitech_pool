/*
** EPITECH PROJECT, 2023
** PDG
** File description:
** get
*/

#include <stdlib.h>
#include "int_list.h"
#include <stdio.h>

int int_list_get_elem_at_front(int_list_t list)
{
    if (int_list_is_empty(list))
        return (0);
    return (list->value);
}

int int_list_get_elem_at_back(int_list_t list)
{
    if (int_list_is_empty(list))
        return (0);
    for (; list->next; list = list->next);
    return (list->value);
}

int int_list_get_elem_at_position(int_list_t list,
unsigned int position)
{
    if (int_list_is_empty(list) || position >= int_list_get_size(list))
        return (0);
    if (position == 0)
        return (int_list_get_elem_at_front(list));
    for (; list && position > 0; list = list->next, position--);
    return (list->value);
}

unsigned int int_list_get_size(int_list_t list)
{
    int size = 0;

    for (; list; list = list->next, size++);
    return (size);
}
