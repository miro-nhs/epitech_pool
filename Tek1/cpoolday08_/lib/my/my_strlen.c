/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** c pool day 4
*/

int my_strlen(char const *str)
{
    int cpt = 0;

    for (; str[cpt]; cpt++);
    return (cpt);
}
