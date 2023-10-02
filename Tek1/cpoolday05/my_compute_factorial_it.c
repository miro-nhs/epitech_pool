/*
** EPITECH PROJECT, 2020
** my_factorial_it
** File description:
** factorial of a nb
*/

int my_compute_factorial_it(int nb)
{
    int r;
    if (nb == 1)
        return (1);
    if (nb == 0)
        return (1);
    if (nb < 0 || nb > 12)
        return (0);
    for (r = 1 ; nb > 1 ; nb--)
        r = r * nb;
    return (r);
}