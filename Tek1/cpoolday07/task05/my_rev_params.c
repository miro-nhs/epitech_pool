/*
** EPITECH PROJECT, 2021
** my_rev_params
** File description:
** rev params print
*/

int my_rev_params(int ac, char **av)
{
    for (int i = ac - 1; i >= 0; i--) {
        my_putstr(av[i]);
        my_putchar('\n');
    }
    return (0);
}

int main(int ac, char **av)
{
    my_rev_params(ac, av);
    return (0);
}