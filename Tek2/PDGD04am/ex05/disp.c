/*
** EPITECH PROJECT, 2023
** Day04
** File description:
** disp
*/

#include <stddef.h>

void print(void *str)
{
    return;
}

void disp_array(const void *array, size_t nmemb, size_t size, void(*print)
(const void *))
{
    return;
}

void disp_int_array(const int *array, size_t nmemb)
{
    for (int i = 0; i < nmemb; i++)
        printf("%d\n", array[i]);
}
