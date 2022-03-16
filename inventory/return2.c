/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

int  return_attack(void)
{
    int fd = open("text/attack.txt", O_RDONLY);
    char buffer[10];

    read(fd, buffer, 10);
    close (fd);
    if (my_getnbr(buffer) == 1) {
        return (1);
    }
    if (my_getnbr(buffer) > 1) {
        return (2);
    }
    return (my_getnbr(buffer));
}

int  return_music(void)
{
    int fd = open("text/music.txt", O_RDONLY);
    char buffer[10];

    read(fd, buffer, 10);
    close (fd);
    if (my_getnbr(buffer) == 1) {
        return (1);
    }
    return (my_getnbr(buffer));
}
