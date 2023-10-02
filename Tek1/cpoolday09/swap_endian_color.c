/*
** EPITECH PROJECT, 2021
** swap_endian_color
** File description:
** idk
*/

int swap_endian_color(int color)
{
    unsigned char red = (color >> 16) & 0xFF;
    unsigned char green = (color >> 8) & 0xFF;
    unsigned char blue = color & 0xFF;
    unsigned char alpha = 255;
    unsigned char argb = red;

    argb = (argb << 8) + green;
    argb = (argb << 8) + blue;
    argb = (argb << 16) + alpha;
    return (argb);
}