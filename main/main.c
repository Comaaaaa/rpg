/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void tchange_map(sfRenderWindow *main)
{
    draw_sprite(main, "pic/choose.png");
}

int  check_trans(char  const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char buffer[10];

    read(fd, buffer, 10);
    if (my_strcmp(buffer, "0") == 0)
        return (0);
    if (my_strcmp(buffer, "1") == 0)
        return (1);
    return (0);
}

void set_all_to_nul2(void)
{
    write_file("text/plifes.txt", "1");
    write_file("text/plevel.txt", "1");
    write_file("text/money.txt", "100");
    write_file("text/save2.txt", "pmap 1");
    write_file("text/posx2.txt", "140");
    write_file("text/posy2.txt", "240");
    write_file("text/penemy.txt", "0");
    write_file("text/cell2.txt", "0");
    write_file("text/buu2.txt", "0");
    write_file("text/freezer2.txt", "0");
    write_file("text/kill2.txt", "0");
    write_file("text/senzu.txt", "0");
}

void set_all_to_nul(void)
{
    write_file("text/ssj.txt", "0");
    write_file("text/lifes.txt", "3");
    write_file("text/level.txt", "1");
    write_file("text/money.txt", "1000");
    write_file("text/save.txt", "map 1");
    write_file("text/posx.txt", "140");
    write_file("text/posy.txt", "240");
    write_file("text/enemy.txt", "0");
    write_file("text/cell.txt", "0");
    write_file("text/buu.txt", "0");
    write_file("text/freezer.txt", "0");
    write_file("text/kill.txt", "0");
    write_file("text/sword.txt", "0");
    write_file("text/senzu.txt", "0");
    write_file("text/db.txt", "0");
    write_file("text/cloud.txt", "0");
    write_file("text/attack.txt", "1");
}

int main(void)
{
    write_file("text/music.txt", "0");
    draw_menu();
    return (0);
}
