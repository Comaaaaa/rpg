/*
** EPITECH PROJECT, 2021
** s
** File description:
** s
*/

#include "my.h"

int return_sword(char  const *fil)
{
    int fd = open(fil, O_RDONLY);
    char buffer[10];

    read(fd, buffer, 10);
    close (fd);
    if (my_getnbr(buffer) == 0) {
        return (0);
    }
    else {
        return (1);
    }
    return (my_getnbr(buffer));
}

int return_cloud(char  const *fil)
{
    int fd = open(fil, O_RDONLY);
    char buffer[10];

    read(fd, buffer, 10);
    close (fd);
    if (my_getnbr(buffer) == 0) {
        return (0);
    }
    else {
        return (1);
    }
    return (my_getnbr(buffer));
}

int return_level(char  const *fil)
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

void go_shop(sfRenderWindow *main, sfSprite *sprite)
{
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyLControl) &&
        return_level("text/level.txt") == 1) {
        shop_map(main, sprite);
    }
}

void pgo_shop(sfRenderWindow *main, sfSprite *sprite)
{
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyLControl) &&
        return_level("text/level2.txt") == 1) {
        pshop_map(main, sprite);
    }
}
