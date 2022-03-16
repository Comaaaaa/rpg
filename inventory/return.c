/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

int return_senzu(char  const *fil)
{
    int fd = open(fil, O_RDONLY);
    char buffer[10];

    read(fd, buffer, 10);
    close (fd);
    if (my_getnbr(buffer) < 4) {
        return (0);
    }
    else {
        return (1);
    }
    return (my_getnbr(buffer));
}

int return_ki2(char  const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char buffer[10];

    read(fd, buffer, 10);
    close (fd);
    if (my_getnbr(buffer) >= 0 && my_getnbr(buffer) <= 1000) {
        return (1);
    }
    if (my_getnbr(buffer) > 1000) {
        return (2);
    }
    return (my_getnbr(buffer));
}

int return_ki(char  const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char buffer[10];

    read(fd, buffer, 10);
    close (fd);
    if (my_getnbr(buffer) > 0) {
        return (1);
    }
    if (my_getnbr(buffer) > 499) {
        return (2);
    }
    return (my_getnbr(buffer));
}

int return_key(void)
{
    int fd = open("text/key.txt", O_RDONLY);
    char buffer[10];

    read(fd, buffer, 10);
    close (fd);
    if (my_getnbr(buffer) == 1) {
        return (1);
    }
    if (my_getnbr(buffer) == 2) {
        return (2);
    }
    return (my_getnbr(buffer));
}

int time_retur(void)
{
    int fd = open("text/timer.txt", O_RDONLY);
    char buffer[10];

    read(fd, buffer, 10);
    close (fd);
    if (my_getnbr(buffer) == 0) {
        return (0);
    }
    if (my_getnbr(buffer) == 1) {
        return (1);
    }
    return (my_getnbr(buffer));
}
