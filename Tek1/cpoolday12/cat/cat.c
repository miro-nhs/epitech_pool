/*
** EPITECH PROJECT, 2021
** cat
** File description:
** cat
*/

#include "../include/cat.h"
#include "../include/my.h"

int cat(int ac, char **av)
{
    int fd = 0;
    int s = 0;
    char buffer[30000] = "";
    int len = 0;

    for (int i = 1; av[i]; i++) {
        fd = open(av[i], O_RDONLY);
        if (fd < 0)
            return (errno);
            len = read(fd, &buffer, 30000);
        if (len < 0)
            return (errno);
        if (buffer == NULL)
            return (errno);
    }
    close(fd);
    return (errno);
}

void main(int ac, char **av)
{
    cat(ac, av);
}
