/*
** EPITECH PROJECT, 2021
** get_color
** File description:
** how i test it ?
*/

int get_color(unsigned char red , unsigned char green , unsigned char blue)
{
    return ((255 & 0xFF) | (red & 0xFF) | (green & 0xFF) | (blue & 0xFF));
}
