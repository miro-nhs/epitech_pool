/*
** EPITECH PROJECT, 2021
** my_strdup
** File description:
** allocate memory and copy str in it
*/

#include "my.h"

char *my_strdup(char const *src)
{
    int nb = my_strlen(src);
    char *str = malloc(sizeof(char) * (nb + 1));
    int i = 0;

    if (str == NULL)
        return (NULL);
    while (i < nb) {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
