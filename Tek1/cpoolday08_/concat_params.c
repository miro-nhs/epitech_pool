/*
** EPITECH PROJECT, 2021
** concat_params
** File description:
** strings into a single string
*/

#include <stdlib.h>

char *concat_params(int argc, char **argv)
{
    char *str = malloc(sizeof(char) * (argc + 1));
    int i = 0;
    int j = 0;
    int g = 0;

    for (int i = 0; i < argc; i++) {
        while (argv[i][j] != '\0') {
            str[g] = argv[i][j];
            j++;
            g++;
        }
        str[g] = '\n';
        j = 0;
        g++;
    }
    str[g - 1] = '\0';
    return (str);
}