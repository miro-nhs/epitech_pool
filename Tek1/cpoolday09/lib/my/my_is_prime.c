/*
** EPITECH PROJECT, 2021
** my_is_prime
** File description:
** my_is_prime
*/

int my_is_prime(int nbr)
{
    int cpt = 2;

    if (nbr == 0 || nbr == 1)
        return (0);
    while (cpt <= nbr) {
        cpt++;
        if (nbr % cpt == 0 && nbr != cpt)
            return (1);
    }
    return (0);
}