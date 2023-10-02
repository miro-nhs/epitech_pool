/*
** EPITECH PROJECT, 2021
** my_str_isprintable
** File description:
** is printable
*/

int  my_str_isprintable(char  const *str)
{
    int i = 0;

    for (int a = 0; str[a] != '\0'; a++) {
        if (str[a] <= 32 || str[a] >= 176)
            i++;
    }
    if (i == 0)
        return (1);
    else
        return (0);
}