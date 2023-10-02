/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** c pool day 4
*/

int my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}