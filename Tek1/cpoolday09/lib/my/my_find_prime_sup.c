/*
** EPITECH PROJECT, 2021
** my_find_prime_sup
** File description:
** my_find_prime_sup
*/

int my_find_prime_sup(int nbr)
{
    for (; my_is_prime(nbr) != 1; nbr++);
    return (nbr);
}