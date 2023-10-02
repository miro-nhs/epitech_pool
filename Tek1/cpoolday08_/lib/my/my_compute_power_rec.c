/*
** EPITECH PROJECT, 2021
** my_compute_power_rec
** File description:
** my_compute_power_rec
*/

int  my_compute_power_rec(int nb , int p)
{
    int value = 1;
    int cpt = 0;

    if (p < 0)
        return (0);
    if (p == 0)
        return (1);
    else
        value = nb * my_compute_power_rec(nb, p - 1);
    return (value);
}