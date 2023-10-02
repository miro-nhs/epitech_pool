/*
** EPITECH PROJECT, 2021
** my_strstr
** File description:
** str str
*/

int new_strncmp(char *str, char const *to_find, int n, int b)
{
    int a = 0;

    while (str[b] == to_find[a] && a < n) {
        a++;
        b++;
    } if ((str[b] == '\0' && to_find[a] == '\0') || a == n)
        return (0);
    else if (str[b] > to_find[a])
        return (1);
}

char *my_strstr(char *str, char const *to_find)
{
    int n = my_strlen(to_find);
    int res = 1;

    for (int a = 0; str[a] != '\0'; a++) {
        if (str[a] == to_find[0])
            res = new_strncmp(str, to_find, n, a);
        if (to_find[0] == '\0')
            return (str);
        if (res == 0)
            return (&str[a]);
    }
    return (0);
}