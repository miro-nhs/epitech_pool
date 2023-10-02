/*
** EPITECH PROJECT, 2021
** my_str_to_word_array
** File description:
** str to word array
*/

#include <stdlib.h>

int is_alphanum(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        return (1);
    else
        return (0);
}

int count_words(char const *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (is_alphanum(str[i]) == 1 && is_alphanum(str[i+1]) == 0)
            count++;
    }
    return (count);
}

char **my_str_to_word_array(char const *str)
{
    char **res = malloc(sizeof(char *) * (count_words(str) + 1));
    int length = 0;
    int j = 0;

    if (res == NULL)
        return (NULL);

    for (int i = 0; str != NULL && str[i] != '\0'; i++) {
        if (is_alphanum(str[i]) == 1)
            length++;
        if (is_alphanum(str[i]) == 1 && is_alphanum(str[i + 1]) == 0) {
            res[j] = malloc(sizeof(char) * (length + 1));
            my_strncpy(res[j], &str[i - length + 1], length);
            length = 0;
            j++;
        }
    }
    res[j] = NULL;
    return (res);
}