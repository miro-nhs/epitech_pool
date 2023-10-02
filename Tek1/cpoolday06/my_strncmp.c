/*
** EPITECH PROJECT, 2021
** my_strncmp
** File description:
** n cmp
*/

int my_strncmp(char *s1, char const *s2, int n)
{
    int a = 0;

    for (; s1[a] == s2[a] && a < n && s1[a] != '\0' && s2[a] != '\0'; a++);
    if ((s1[a] == '\0' && s2[a] == '\0') || a == n)
        return (0);
    else if (s1[a] > s2[a])
        return (1);
    else
        return (-1);
}