/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

int set_life(sfRenderWindow *main)
{
    int fd = open("text/lifes.txt", O_RDONLY);
    char buffer[1];
    read(fd, buffer, 1);
    close (fd);
    if (my_strcmp(buffer, "0") == 0) {
        game_over(main);
    }
    if (my_strcmp(buffer, "1") == 0) {
        draw_sprite(main, "pic/lifes1.png");
        return (1);
    }
    if (my_strcmp(buffer, "2") == 0) {
        draw_sprite(main, "pic/lifes2.png");
        return (2);
    }
    if (my_strcmp(buffer, "3") == 0) {
        draw_sprite(main, "pic/lifes3.png");
        return (3);
    }
    return (0);
}

int return_life(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char buffer[10];

    read(fd, buffer, 10);
    close (fd);
    if (my_getnbr(buffer) > 3) {
        write_file("text/lifes.txt", "3");
        return (1);
    }
    return (my_getnbr(buffer));
}

void set_lifes(sfRenderWindow *main)
{
    set_life(main);
    return_life("text/lifes.txt");
}
