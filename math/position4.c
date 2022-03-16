/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

int print_miniposx2(void)
{
    struct stat size;
    stat("text/minipos2x.txt", &size);
    int fd = open("text/minipos2x.txt", O_RDONLY);
    char *buffer = malloc(sizeof(char) *(size.st_size + 1));
    read(fd, buffer, size.st_size);
    buffer[size.st_size] = '\0';
    return (my_getnbr(buffer));
}

int print_miniposy2(void)
{
    struct stat size;
    stat("text/minipos2y.txt", &size);
    int fd = open("text/minipos2y.txt", O_RDONLY);
    char *buffer = malloc(sizeof(char) *(size.st_size + 1));
    read(fd, buffer, size.st_size);
    buffer[size.st_size] = '\0';
    return (my_getnbr(buffer));
}
