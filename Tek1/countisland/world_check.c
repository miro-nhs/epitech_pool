/*
** EPITECH PROJECT, 2021
** count_island
** File description:
** check world error
*/

#include "./include/my.h"

static int check(char o)
{
    if (o != '.' && o != 'X')
        return (1);
    else
        return (0);
}

int za_warudo(char **world)
{
    int cpt = 0;
    int d = 0;
    int i = 0;

    for (; world[d]; d++) {
        for (; world[d][i]; i++) {
            cpt += check(world[d][i]);
        }
    }
    if (cpt > 0)
        return (84);
    else
        return (cpt);
}
