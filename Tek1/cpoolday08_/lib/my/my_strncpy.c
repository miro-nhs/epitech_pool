/*
** EPITECH PROJECT, 2021
** my_strncpy
** File description:
** n cpy
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int c = 0;
    for (c = 0; src[c] != '\0' && c != n ; c++) {
        dest[c] = src[c];
    }
    if (src[c] == '\0')
        dest[c] = '\0';
    return (dest);
}

