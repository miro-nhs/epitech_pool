/*
** EPITECH PROJECT, 2021
** my_revstr
** File description:
** reverse a str
*/

int strl(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

char *my_revstr(char *str)
{
    int i = strl(str);
    char n;

    for (int d = 0; d != strl(str) / 2; d++) {
        n = str[d];
        str[d] = str[i - 1];
        str[i - 1] = n;
        i--;
    }
    return (str);
}