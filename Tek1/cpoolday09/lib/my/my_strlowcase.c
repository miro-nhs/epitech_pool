/*
** EPITECH PROJECT, 2021
** my_strupcase
** File description:
** lower case put char
*/

char *my_strlowcase(char *str)
{
    for (int a = 0; str[a] != '\0'; a++) {
        if (str[a] >= 'A' && str[a] <= 'Z')
            str[a] = str[a] + 32;
    }
    return (str);
}