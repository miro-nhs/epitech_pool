/*
** EPITECH PROJECT, 2021
** my_compute_power_it
** File description:
** my_compute_power_it
*/

int  my_compute_power_it(int nb , int p)
{
    int value = 1;
    int cpt = 0;

    if (p < 0)
        return (0);
    if (p == 0)
        return (1);
    while (cpt < p) {
        value = nb * value;
        cpt++;
    }
    return (value);
}