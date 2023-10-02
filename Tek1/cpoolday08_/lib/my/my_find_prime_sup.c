/*
** EPITECH PROJECT, 2021
** my_find_prime_sup
** File description:
** my_find_prime_sup
*/

int my_is_primed(int nbr)
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

int my_find_prime_sup(int nbr)
{
    for (; my_is_primed(nbr) != 1; nbr++);
    return (nbr);
}