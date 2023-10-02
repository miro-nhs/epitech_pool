/*
** EPITECH PROJECT, 2021
** my_strcapitalize
** File description:
** first letter of each word capitalize
*/

char *lowercase(char *str, int chara)
{
    if (str[chara] >= 'A' && str[chara] <= 'Z')
        str[chara] = str[chara] + 32;
    return (str);
}

char *upercase(char *str, int chara)
{
    if (str[chara] >= 'a' && str[chara] <= 'z')
        str[chara] = str[chara] - 32;
    return (str);
}

char *is_first_letter(char *str, int chara)
{
    if ((str[chara - 1] >= ' ' && str[chara - 1] <= '/')
        || (str[chara - 1] >= ':' && str[chara -1] <= '@')) {
        str = upercase(str, chara);
    }
    else if ((str[chara - 1] >= 'A' && str[chara - 1] <= 'Z')
        || (str[chara - 1] >= 'a' && str[chara - 1] <= 'z')
        || (str[chara - 1] >= '0' && str[chara - 1] <= '9'))
        str = lowercase(str, chara);
    else
        return (str);
}

char *my_strcapitalize(char *str)
{
    int chara = 0;

    if (str[chara] >= 'a' && str[chara] <= 'z') {
        str[chara] = str[0] - 32;
        chara++;
    }
    for (; str[chara] != '\0'; chara++)
        str = is_first_letter(str, chara);
    return (str);
}