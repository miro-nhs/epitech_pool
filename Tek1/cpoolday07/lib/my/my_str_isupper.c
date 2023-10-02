/*
** EPITECH PROJECT, 2021
** my_str_isuper
** File description:
** is uper
*/

int  my_str_isupper(char  const *str)
{
    int test = 0;

    for (int a = 0; str[a] != '\0'; a++)
    {
    if (str[a] < 'A' || str[a] > 'Z')
            test++;
    }
    if (test == 0)
        return (1);
    else
        return (0);
}