/*
** EPITECH PROJECT, 2021
** my_show_word_array
** File description:
** show word array
*/

#include <stddef.h>

int my_show_word_array(char **tab)
{
    int i = 0;

    for (i; tab[i] != NULL; i = i + 1) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
    return (0);
}