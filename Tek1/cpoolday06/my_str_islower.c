/*
** EPITECH PROJECT, 2021
** my_str_islower
** File description:
** is lower
*/

int  my_str_islower(char const *str)
{
    int test = 0;

    for (int a = 0; str[a] != '\0'; a++) {
    if (str[a] < 'a' || str[a] > 'z')
            test++;
    }
    if (test == 0)
        return (1);
    else
        return (0);
}