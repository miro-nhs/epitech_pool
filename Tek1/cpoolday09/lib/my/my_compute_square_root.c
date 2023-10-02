/*
** EPITECH PROJECT, 2021
** my_compute_square_root
** File description:
** my_compute_square_root
*/

int is_root(int x, int nb)
{
    while (x <= nb / 2) {
        if (x * x == nb)
            return (x);
        x++;
    }
    return (0);
}

int  my_compute_square_root(int nb)
{
    int x = 0;
    int result = 0;

    if (nb < 0)
        return (84);
    else if (nb == 0)
        return (0);
    else {
        if (nb == 1)
            return (nb);
        result = is_root(x, nb);
    }
    return (result);
}