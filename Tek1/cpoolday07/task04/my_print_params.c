/*
** EPITECH PROJECT, 2021
** my_print_params
** File description:
** print argument
*/

int my_print_params(int ac, char **av)
{
    for (int i = 0; i < ac; i++) {
        my_putstr(av[i]);
        my_putchar('\n');
    }
    return (0);
}

int main(int ac, char **av)
{
    my_print_params(ac, av);
    return (0);
}