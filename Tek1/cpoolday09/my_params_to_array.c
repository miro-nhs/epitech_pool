/*
** EPITECH PROJECT, 2021
** my_params_to_array
** File description:
** set argv to struc array
*/

#include "include/my.h"

struct info_param *my_params_to_array(int ac , char **av)
{
    struct info_param *param = malloc(sizeof(struct info_param));
    int i = 0;

    param->word_array = malloc(sizeof(char *) * (ac + 2));
    if (param == 0)
        return (0);
    for (; i < ac; i++) {
        param[i].length = my_strlen(av[i]);
        param[i].str = &av[i];
        param[i].copy = my_strdup(av[i]);
        param[i].word_array = my_str_to_word_array(av[i]);
    }
    param[i].length = 0;
    param[i].str = NULL;
    param[i].copy = NULL;
    param[i].word_array = NULL;
    return (param);
}