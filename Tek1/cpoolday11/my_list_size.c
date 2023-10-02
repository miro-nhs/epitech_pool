/*
** EPITECH PROJECT, 2021
** c poool daay 11
** File description:
** day 11
*/

#include "include/mylist.h"

int my_list_size(linked_list_t const *begin){
    linked_list_t *tmp;
    int i = 0;

    tmp = begin;
    for (; tmp != NULL; i++) {
        tmp = tmp->next;
    }
    return (i);
}
