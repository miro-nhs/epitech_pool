/*
** EPITECH PROJECT, 2021
** my_strcmp
** File description:
** cmp
*/

int my_strcmp(char *s1, char const *s2)
{
    int a = 0;

    for (; s1[a] == s2[a] && s1[a] != '\0' && s2[a] != '\0'; a++);
    if (s1[a] == '\0' && s2[a] == '\0')
        return (0);
    else if (s1[a] > s2[a])
        return (1);
    else
        return (-1);
}