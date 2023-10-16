/*
** EPITECH PROJECT, 2023
** PDG
** File description:
** function2
*/

#include <stdlib.h>
#include "list.h"
#include <stdio.h>

bool list_add_elem_at_position(list_t * front_ptr, void *elem,
unsigned int position)
{
    list_t x = *front_ptr;
    list_t prev = NULL;
    list_t next = NULL;

    if (position >= list_get_size(*front_ptr))
        return (position == list_get_size(*front_ptr) ?
        list_add_elem_at_back(front_ptr, elem) : false);
    if (position == 0)
        return (list_add_elem_at_front(front_ptr, elem));
    if ((next = malloc(sizeof(node_t))) == NULL)
        return (false);
    next->value = elem;
    for (int i = 0; x; x = x->next, i++) {
        if (prev != NULL && i == position) {
            next->next = x;
            prev->next = next;
        }
        prev = x;
    }
    return (true);
}

bool list_is_empty(list_t list)
{
    if (list == NULL)
        return true;
    else
        return false;
}

void list_dump(list_t list, value_displayer_t val_disp)
{
    for (; list; list = list->next)
        val_disp(list->value);
}

bool list_add_elem_at_front(list_t *front_ptr, void *elem)
{
    list_t next = malloc(sizeof(node_t));

    if (next == NULL)
        return (false);
    next->value = elem;
    next->next = *front_ptr;
    *front_ptr = next;
    return (true);
}

bool list_add_elem_at_back(list_t *front_ptr, void *elem)
{
    list_t head = *front_ptr;
    list_t next = malloc(sizeof(node_t));

    if (next == NULL)
        return (false);
    next->value = elem;
    next->next = NULL;
    if (*front_ptr == NULL) {
        *front_ptr = next;
    } else {
        for (; head->next; head = head->next);
        head->next = next;
    }
    return (true);
}
