/*
** EPITECH PROJECT, 2021
** c poool daay 11
** File description:
** day 11
*/

#include "include/mylist.h"
#include "include/my.h"

void my_rev_list(linked_list_t **begin)
{
    linked_list_t *before = NULL;
    linked_list_t *after = NULL;

    while ((*begin) != NULL) {
        after = (*begin)->next;
        (*begin)->next = before;
        before = (*begin);
        (*begin) = after;
    }
    (*begin) = before;
}
