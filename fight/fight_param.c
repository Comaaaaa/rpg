/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void set_ki(sfRenderWindow *main)
{
    int fd = open("text/ki.txt", O_RDONLY);
    char buffer[10];
    read(fd, buffer, 10);
    int ki = my_getnbr(buffer);
    close (fd);
    if (ki > 1000)
        write_file("text/ki.txt", "1000");
    if (ki == 1000)
        draw_sprite3(main, "pic/e1.png", -3, 100);
    if (ki < 1000 && ki > 660)
        draw_sprite3(main, "pic/e2.png", -3, 100);
    if (ki <= 660 && ki > 330)
        draw_sprite3(main, "pic/e3.png", -3, 100);
    if (ki <= 330 && ki > 10)
        draw_sprite3(main, "pic/e4.png", -3, 100);
    if (ki <= 0) {
        write_file("text/ki.txt", "0");
        draw_sprite3(main, "pic/e5.png", -3, 100);
    }
}

void set_ki2(sfRenderWindow *main)
{
    int fd = open("text/eki.txt", O_RDONLY);
    char buffer[10];
    read(fd, buffer, 10);
    int ki = my_getnbr(buffer);
    close (fd);
    if (ki >= 1000) {
        draw_sprite3(main, "pic/e11.png", 917, 100);
        ki = 1000;
    }
    if (ki < 1000 && ki > 660)
        draw_sprite3(main, "pic/e22.png", 917, 100);
    if (ki <= 660 && ki > 330)
        draw_sprite3(main, "pic/e33.png", 917, 100);
    if (ki <= 330 && ki > 10)
        draw_sprite3(main, "pic/e44.png", 917, 100);
    if (ki <= 1) {
        ki = 1;
        draw_sprite3(main, "pic/e55.png", 917, 100);
    }
}

int check_ki(void)
{
    int fd = open("text/eki.txt", O_RDONLY);
    char buffer[10];
    read(fd, buffer, 10);
    int ki = my_getnbr(buffer);
    close (fd);
    if (ki <= 0) {
        return (1);
    } else {
        return (0);
    }
}

int set_hp2(sfRenderWindow *main)
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
        win_map(main);
        return (1);
    }
    return (0);
}

int set_hp(sfRenderWindow *main)
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
    if (hp <= 1) {
        loose_map(main);
        return (1);
    }
    return (0);
}
