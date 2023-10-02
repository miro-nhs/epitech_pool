/*
** EPITECH PROJECT, 2021
** cpool day 11
** File description:
** c pool day 11
*/

#ifndef LINKED_H_
    #define LINKED_H_
    #include <stddef.h>
    #include <unistd.h>
    #include <stdlib.h>

typedef struct linked_list {
    void *data;
    struct linked_list *next;
} linked_list_t;

void my_show_list(linked_list_t const *begin);
void my_rev_list(linked_list_t **begin);

#endif /* !MY_H_ */
