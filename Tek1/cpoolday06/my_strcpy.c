/*
** EPITECH PROJECT, 2021
** my_strcpy
** File description:
** str cpy
*/

char *my_strcpy(char *dest, char const *src)
{
    int a = 0;

    for (; src[a] != '\0'; a++) {
        dest[a] = src[a];
    }
    dest[a] = '\0';
    return (dest);
}