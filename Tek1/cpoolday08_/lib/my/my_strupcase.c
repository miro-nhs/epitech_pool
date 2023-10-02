/*
** EPITECH PROJECT, 2021
** my_strupcase
** File description:
** put char in uppercase
*/

char *my_strupcase(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i += 1) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32 ;
    }
    return (str);
}
