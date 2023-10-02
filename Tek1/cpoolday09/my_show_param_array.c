/*
** EPITECH PROJECT, 2021
** my_show_param
** File description:
** show array param
*/

#include "include/my.h"

int my_show_param_array(struct info_param const *param)
{
    for (int i = 0; param[i].word_array != NULL; i++) {
        my(my_put_nbr(param[i].length));
        my_putstr(param[i].str);
        my_putstr(param[i].copy);
        my_show_word_array(param[i].word_array);
    }
    return (0);
}