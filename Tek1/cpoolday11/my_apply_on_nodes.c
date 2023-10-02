/*
** EPITECH PROJECT, 2021
** my_apply_on_nodes
** File description:
** cpool day 11
*/

#include "./include/mylist.h"

int my_apply_on_nodes(linked_list_t *begin, int (*f)(void *))
{
    for (;begin != NULL;) {
        begin->data = (*f)(begin->data);
        begin = begin->next;
    }
    return (0);
}
