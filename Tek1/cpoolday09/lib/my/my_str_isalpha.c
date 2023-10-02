/*
** EPITECH PROJECT, 2021
** my_str_isalpha
** File description:
** is alpha
*/

int test_cara(char const *str, int a, int test)
{
    if (str[a] < 'a' || str[a] > 'z') {
        if (str[a] < 'A' || str[a] > 'Z')
            test++;
    }
    return (test);
}

int  my_str_isalpha(char  const *str)
{
    int test = 0;

    for (int a = 0; str[a] != '\0'; a++)
    {
        test = test_cara(str, a, test);
    }
    if (test == 0)
        return (1);
    else
        return (0);
}