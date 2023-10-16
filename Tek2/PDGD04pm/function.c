/*
** EPITECH PROJECT, 2023
** Day04pm
** File description:
** function
*/

#include <stdio.h>
#include <stdlib.h>
#include "int_list.h"

bool int_list_is_empty(int_list_t list)
{
    return (list == NULL);
}

void int_list_dump(int_list_t list)
{
    for (; list; list = list->next)
        printf("%d\n", list->value);
}

bool int_list_add_elem_at_front(int_list_t *front_ptr, int elem)
{
    int_list_t next = malloc(sizeof(int_node_t));

    if (next == NULL)
        return (false);
    next->value = elem;
    next->next = *front_ptr;
    *front_ptr = next;
    return (true);
}

bool int_list_add_elem_at_back(int_list_t *front_ptr, int elem)
{
    int_list_t next = malloc(sizeof(int_node_t));
    int_list_t begin = *front_ptr;

    if (next == NULL)
        return (false);
    next->value = elem;
    next->next = NULL;
    if (*front_ptr == NULL)
        *front_ptr = next;
    else {
        for (; begin->next; begin = begin->next);
        begin->next = next;
    }
    return (true);
}

bool int_list_add_elem_at_position(int_list_t * front_ptr,
int elem, unsigned int position)
{
    int_list_t list = *front_ptr;
    int_list_t next = NULL;
    int_list_t prev = NULL;

    if (position >= int_list_get_size(*front_ptr))
        return (position == int_list_get_size(*front_ptr) ?
        int_list_add_elem_at_back(front_ptr, elem) : false);
    if (position == 0)
    return (int_list_add_elem_at_front(front_ptr, elem));
    if ((next = malloc(sizeof(int_node_t))) == NULL)
        return (false);
    next->value = elem;
    for (int i = 0; list; list = list->next, i++) {
        if (prev != NULL && i == position) {
            next->next = list;
            prev->next = next;
        }
        prev = list;
    }
    return (true);
}
