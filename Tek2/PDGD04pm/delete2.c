/*
** EPITECH PROJECT, 2023
** PDG
** File description:
** delete2
*/

#include <stdlib.h>
#include "list.h"
#include <stdio.h>

bool list_del_elem_at_back(list_t *front_ptr)
{
    list_t prev = NULL;
    list_t head = *front_ptr;

    if (list_is_empty(*front_ptr))
        return (false);
    for (; head->next; prev = head, head = head->next);
    if (prev == NULL) {
        *front_ptr = NULL;
    } else {
        prev->next = NULL;
    }
    free(head);
    return (true);
}

bool list_del_elem_at_position(list_t *front_ptr,
unsigned int position)
{
    list_t prev = NULL;
    list_t list = *front_ptr;

    if (list_is_empty(list) || position >= list_get_size(list))
        return (false);
    if (position == 0)
        return (list_del_elem_at_front(front_ptr));
    for (; list && position > 0; prev = list, list = list->next, position--);
    prev->next = list->next;
    free(list);
    return (true);
}

void list_clear(list_t *front_ptr)
{
    list_t next = NULL;
    list_t list = *front_ptr;

    for (; list; list = next) {
        next = list->next;
        list->next = NULL;
        free(list);
    }
    *front_ptr = NULL;
}

bool list_del_elem_at_front(list_t *front_ptr)
{
    list_t x = *front_ptr;

    if (list_is_empty(*front_ptr))
        return (false);
    *front_ptr = (*front_ptr)->next;
    free(x);
    return (true);
}
