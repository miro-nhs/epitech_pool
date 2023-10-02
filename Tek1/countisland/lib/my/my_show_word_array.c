/*
** EPITECH PROJECT, 2021
** my_show_word_array
** File description:
** show word array
*/

#include "../../include/my.h"

int my_show_word_array(char **tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
    return (0);
}
