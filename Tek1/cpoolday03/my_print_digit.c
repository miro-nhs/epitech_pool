/*
** EPITECH PROJECT, 2021
** my_print_digit
** File description:
** print digit
*/

int my_print_digits(void)
{
    int compteur = 48;

    for (; compteur < 58 ; compteur++)
        my_putchar(compteur);
    my_putchar('\n');
    return (0);
}