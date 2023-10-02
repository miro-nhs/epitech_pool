/*
** EPITECH PROJECT, 2021
** my_evil_str
** File description:
** c pool day 4
*/

char *my_evil_str(char *str)
{
    char c;
    int len = 0;

    for (; str[len] != '\0'; len++);
    for (int i = 0; i < len / 2; i++) {
        c = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = c;
    }
    return (str);
}