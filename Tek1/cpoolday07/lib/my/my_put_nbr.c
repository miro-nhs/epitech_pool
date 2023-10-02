/*
** EPITECH PROJECT, 2021
** my_put_nbr.c
** File description:
** put nbr
*/

int my_put_nnbr(int nb)
{
    my_putchar('-');
    nb = nb * -1;
    if (nb == -2147483648) {
        write(1, "-2147483648", 11);
        return (0);
    }
    return (nb);
}

int my_put_nbr(int nb)
{
    int module;

    if (nb < 0) {
        nb = my_put_nnbr(nb);
    }
    if (nb >= 0) {
        if (nb >= 10) {
            module = nb % 10;
            nb = nb / 10;
            my_put_nbr(nb);
            my_putchar(48 + module);
        }
        else
        my_putchar(48 + nb % 10);
    }
    return (0);
}