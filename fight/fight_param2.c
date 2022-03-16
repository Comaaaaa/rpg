/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

int pset_hp2(sfRenderWindow *main)
{
    int fd = open("text/ehp.txt", O_RDONLY);
    char buffer[10];
    read(fd, buffer, 10);
    int hp = my_getnbr(buffer);
    close (fd);
    if (hp >= 100)
        draw_sprite3(main, "pic/h1.png", 840, 50);
    if (hp < 100 && hp > 66)
        draw_sprite3(main, "pic/h2.png", 840, 50);
    if (hp <= 66 && hp > 33)
        draw_sprite3(main, "pic/h3.png", 840, 50);
    if (hp <= 33 && hp > 10)
        draw_sprite3(main, "pic/h4.png", 840, 50);
    if (hp <= 10 && hp > 0)
        draw_sprite3(main, "pic/h5.png", 840, 50);
    if (hp <= 1) {
        pwin_map(main);
        return (1);
    }
    return (0);
}

int pset_hp(sfRenderWindow *main)
{
    int fd = open("text/hp.txt", O_RDONLY);
    char buffer[10];
    read(fd, buffer, 10);
    int hp = my_getnbr(buffer);
    close (fd);
    if (hp >= 100)
        draw_sprite3(main, "pic/h11.png", -60, 50);
    if (hp < 100 && hp > 66)
        draw_sprite3(main, "pic/h22.png", -60, 50);
    if (hp <= 66 && hp > 33)
        draw_sprite3(main, "pic/h33.png", -60, 50);
    if (hp <= 33 && hp > 10)
        draw_sprite3(main, "pic/h44.png", -60, 50);
    if (hp <= 10 && hp > 0)
        draw_sprite3(main, "pic/h55.png", -60, 50);
    if (hp <= 0) {
        ploose_map(main);
        return (1);
    }
    return (0);
}
