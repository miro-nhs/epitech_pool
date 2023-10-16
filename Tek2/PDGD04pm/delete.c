/*
** EPITECH PROJECT, 2023
** PDG
** File description:
** delete
*/

#include <stdlib.h>
#include "int_list.h"
#include <stdio.h>

bool int_list_del_elem_at_back(int_list_t *front_ptr)
{
    int_list_t prev = NULL;
    int_list_t next = *front_ptr;

    if (int_list_is_empty(*front_ptr))
        return (false);
    for (; next->next; prev = next, next = next->next);
    if (prev == NULL) {
        free(front_ptr);
        *front_ptr = NULL;
    } else {
        free(next);
        prev->next = NULL;
    }
    return (true);
}

bool int_list_del_elem_at_position(int_list_t *front_ptr,
unsigned int position)
{
    int_list_t head = *front_ptr;
    int_list_t prev = NULL;

    if (int_list_is_empty(head) || position >= int_list_get_size(head))
        return (false);
    if (position == 0)
        return (int_list_del_elem_at_front(front_ptr));
    for (; head && position > 0; prev = head,
    head = head->next, position--);
    prev->next = head->next;
    free(head);
    return (true);
}

void int_list_clear(int_list_t *front_ptr)
{
    int_list_t after = NULL;
    int_list_t head = *front_ptr;

    for (; head; head = after) {
        after = head->next;
        head->next = NULL;
        free(head);
    }
    *front_ptr = NULL;
}

bool int_list_del_elem_at_front(int_list_t *front_ptr)
{
    int_list_t x = *front_ptr;

    if (int_list_is_empty(*front_ptr))
        return (false);
    *front_ptr = (*front_ptr)->next;
    free(x);
    return (true);
}
