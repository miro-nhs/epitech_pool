/*
** EPITECH PROJECT, 2021
** my_print_alpha
** File description:
** print the alphabet
*/

int my_print_alpha(void)
{
    int compteur = 97;

    for (compteur = 97 ; compteur < 123 ; compteur++) {
        my_putchar(compteur);
    }
    return (0);
}