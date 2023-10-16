/*
** EPITECH PROJECT, 2023
** Day04
** File description:
** sort
*/

#include <stddef.h>
#include <stdlib.h>

int compar(void *n1, void *n2)
{
    int nb1 = (int *) n1;
    int nb2 = (int *) n2;

    return (nb1 - nb2);
}

void sort_int_array(int *array, size_t nmemb)
{
    qsort(array, nmemb, sizeof(int), compar);
}
