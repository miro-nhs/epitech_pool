/*
** EPITECH PROJECT, 2021
** rush2
** File description:
** language finder
*/

#include "include/my.h"

int occurence(char *world, char *let)
{
    int result = 0;
    int i = 0;
    char c;

    for (i = 0; let[i] != '\0'; i++);
    if (i != 1)
        return (-1);
    if (let[0] < 'a' && let[0] > 'z' || let[0] < 'A' && let[0] > 'Z')
        return (-1);
    for (i = 0; world[i] != '\0'; i++) {
        if (world[i] == let[0] || world[i] - 32 == let[0])
            result++;
    }
    return (result);
}

void display(char letters, int occ, float res)
{
    my_putchar(letters);
    my_putchar(':');
    my_put_nbr(occ);
    my_putchar(' ');
}

void display_float(float res)
{
    int nbr = (int)(res * 100);

    my_putchar('(');
    my_put_nbr(nbr / 100);
    my_putchar('.');
    my_putchar(((nbr / 10) % 10) + 48);
    my_putchar((nbr % 10) + 48);
    my_putstr("%)");
    my_putchar('\n');
}

int my_count_alpha(char *str)
{
    int res = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            res++;
        if (str[i] >= 'A' && str[i] <= 'Z')
            res++;
    }
    return (res);
}

int main(int ac, char **av)
{
    int i = 0;
    int occ = 0;
    char *str = &av[1][0];
    int tot = my_count_alpha(av[1]);
    float res = 0;

    my_strlowcase(av[1]);
    for (int j = 2; av[j] != NULL; j++) {
        occ = occurence(av[1], av[j]);
        res = (float)occ / tot * 100;
        display(av[j][0], occ, res);
        display_float(res);
    }
    return (0);
}