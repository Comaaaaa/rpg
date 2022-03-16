/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void pdia2(sfRenderWindow *main, sfSprite *sprite)
{
    int time = 10;
    run_t window = {0};
    while (sfRenderWindow_isOpen(main)) {
        time++;
        write_file("text/ki.txt", "1000");
        write_file("text/hp.txt", "70");
        write_file("text/eki.txt", "1000");
        write_file("text/ehp.txt", "175");
        draw_sprite(main, "pic/load.jpg");
        sfRenderWindow_display(main);
        map_dia1(main);
        if (time > 350) {
            pfight1(main , sprite, "pic/cjcell.png", "pic/attack4.png");
            sfRenderWindow_close(main);
        }
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            event_check(window.event, main);
        }
    }
}

void pdia3(sfRenderWindow *main, sfSprite *sprite)
{
    int time = 10;
    run_t window = {0};
    while (sfRenderWindow_isOpen(main)) {
        time++;
        write_file("text/ki.txt", "1000");
        write_file("text/hp.txt", "50");
        write_file("text/eki.txt", "1000");
        write_file("text/ehp.txt", "200");
        draw_sprite(main, "pic/load.jpg");
        sfRenderWindow_display(main);
        map_dia1(main);
        if (time > 350) {
            pfight1(main , sprite, "pic/cjfreez.png", "pic/attack5.png");
            sfRenderWindow_close(main);
        }
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            event_check(window.event, main);
        }
    }
}

void dia4(sfRenderWindow *main, sfSprite *sprite)
{
    int time = 10;
    run_t window = {0};
    while (sfRenderWindow_isOpen(main)) {
        time++;
        write_file("text/ki.txt", "1000");
        write_file("text/hp.txt", "25");
        write_file("text/eki.txt", "1000");
        write_file("text/ehp.txt", "200");
        draw_sprite(main, "pic/load.jpg");
        sfRenderWindow_display(main);
        map_dia1(main);
        if (time > 350) {
            fight1(main , sprite, "pic/cjvegeta.png", "pic/attack3.png");
            sfRenderWindow_close(main);
        }
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            event_check(window.event, main);
        }
    }
}

void pdia4(sfRenderWindow *main, sfSprite *sprite)
{
    int time = 10;
    run_t window = {0};
    while (sfRenderWindow_isOpen(main)) {
        time++;
        write_file("text/ki.txt", "1000");
        write_file("text/hp.txt", "25");
        write_file("text/eki.txt", "1000");
        write_file("text/ehp.txt", "250");
        draw_sprite(main, "pic/load.jpg");
        sfRenderWindow_display(main);
        map_dia1(main);
        if (time > 350) {
            pfight1(main , sprite, "pic/cjvegeta.png", "pic/attack3.png");
            sfRenderWindow_close(main);
        }
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            event_check(window.event, main);
        }
    }
}
