/*
** EPITECH PROJECT, 2021
** z
** File description:
** z
*/

#include "my.h"

int return_db(void)
{
    int fd = open("text/db.txt", O_RDONLY);
    char buffer[10];

    read(fd, buffer, 10);
    close (fd);
    if (my_getnbr(buffer) > 6) {
        return (7);
    }
    else {
        return (0);
    }
    return (my_getnbr(buffer));
}

void make_db(sfRenderWindow *main)
{
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum7) && return_db() == 7) {
        shenron(main);
        sfRenderWindow_close(main);
    }
}

void shenron(sfRenderWindow *main)
{
    run_t window = {0};
    while (sfRenderWindow_isOpen(main)) {
        sfRenderWindow_display(main);
        draw_sprite(main, "pic/shenron.jpg");
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            shenron_col(main);
            event_check(window.event, main);
        }
    }
}

void shenron_col(sfRenderWindow *main)
{
    print_score("text/money.txt");
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum1)) {
        write_file("text/level.txt", "99");
        write_file("text/db.txt", "0");
        shenronl(main);
        sfRenderWindow_close(main);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum3)) {
        write_file("text/kill.txt", "999999");
        write_file("text/db.txt", "0");
        shenronl(main);
        sfRenderWindow_close(main);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum2)) {
        write_file("text/money.txt", "999999");
        shenronl(main);
        write_file("text/db.txt", "0");
    }
}

void shenronl(sfRenderWindow *main)
{
    int time = 10;
    run_t window = {0};
    while (sfRenderWindow_isOpen(main)) {
        time++;
        write_file("text/db.txt", "0");
        draw_sprite(main, "pic/lshenron.jpg");
        sfRenderWindow_display(main);
        if (time > 350) {
            sfRenderWindow_close(main);
            save();
        }
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            event_check(window.event, main);
        }
    }
}
