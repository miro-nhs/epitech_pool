/*
** EPITECH PROJECT, 2021
**  my_apply_on_matching_nodes.
** File description:
** c pool day 11
*/

#include "include/mylist.h"

int my_apply_on_matching_nodes(linked_list_t *begin , int (*f)(),
void const *data_ref, int (*cmp)())
{
    for (;begin != NULL;) {
        if (cmp(begin->data, data_ref) == 0)
            begin->data = (*f)(begin->data);
        begin = begin->next;
    }
    return (0);
}
