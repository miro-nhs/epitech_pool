/*
** EPITECH PROJECT, 2020
** my_compute_factorial_rec
** File description:
** display factorial of nb
*/

int my_compute_factorial_rec(int nb)
{
    unsigned int r;

    if (nb < 0 || nb > 12)
        return (0);
    if (nb == 1 || nb == 0)
        return (1);
    else
        r = nb * my_compute_factorial_rec(nb -1);
    return (r);
}

