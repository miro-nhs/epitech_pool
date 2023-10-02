/*
** EPITECH PROJECT, 2021
** my_param-to-list
** File description:
** param into linked list
*/

#include "include/mylist.h"
#include "include/my.h"

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    linked_list_t *param = NULL;
    linked_list_t *tmp;

    for (int i = 0; i < ac; i++) {
        tmp = malloc(sizeof(linked_list_t));
        tmp->data = av[i];
        tmp->next = param;
        param = tmp;
    }
    return (param);
}
