/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** c pool day 4
*/

int my_new_strlen(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return (i);
}

int my_putstr(char const *str)
{
    write(1, str, my_new_strlen(str));
}