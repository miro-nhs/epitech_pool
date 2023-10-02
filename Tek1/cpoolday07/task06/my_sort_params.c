/*
** EPITECH PROJECT, 2021
** my_sort_params
** File description:
** sort argv
*/

#include <stdio.h>

int strl(char *str)
{
    int cpt = 0;

    for (; str[cpt] != '\0'; cpt++);
    return (cpt);
}

void compare(int cpt, char *str)
{
    char c = '\n';

    if (cpt == str[0]) {
        write(1, str, strl(str));
        write(1, &c, 1);
    }
}

int my_sort_params(char **av)
{
    int cpt = 0;

    for (; cpt < 127; cpt++) {
        for (int i = 0; av[i]; i++)
            compare(cpt, av[i]);
    }
    return (0);
}

int main(int ac, char **av)
{
    my_sort_params(av);
    return (0);
}