/*
** EPITECH PROJECT, 2021
** *
** File description:
** x
*/

#include "my.h"

int pset_life(sfRenderWindow *main)
{
    int fd = open("text/plifes.txt", O_RDONLY);
    char buffer[10];
    read(fd, buffer, 1);
    close (fd);
    if (my_strcmp(buffer, "0") == 0) {
        pgame_over(main);
    }
    if (my_strcmp(buffer, "1") == 0) {
        draw_sprite(main, "pic/lifes1.png");
        return (1);
    }
    if (my_strcmp(buffer, "2") == 0) {
        draw_sprite(main, "pic/lifes2.png");
        return (2);
    }
    if (my_getnbr(buffer) > 2) {
        draw_sprite(main, "pic/lifes3.png");
        return (3);
    }
    return (0);
}

void pset_lifes(sfRenderWindow *main)
{
    pset_life(main);
    return_life("text/plifes.txt");
}
