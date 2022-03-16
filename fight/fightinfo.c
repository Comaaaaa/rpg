/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void dia1(sfRenderWindow *main, sfSprite *sprite)
{
    int time = 10;
    run_t window = {0};
    while (sfRenderWindow_isOpen(main)) {
        time++;
        write_file("text/ki.txt", "1000");
        write_file("text/hp.txt", "100");
        write_file("text/eki.txt", "1000");
        write_file("text/ehp.txt", "100");
        draw_sprite(main, "pic/load.jpg");
        sfRenderWindow_display(main);
        map_dia1(main);
        if (time > 350) {
            fight1(main , sprite, "pic/cjbuu.png", "pic/attack2.png");
            sfRenderWindow_close(main);
        }
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            event_check(window.event, main);
        }
    }
}

void dia2(sfRenderWindow *main, sfSprite *sprite)
{
    int time = 10;
    run_t window = {0};
    while (sfRenderWindow_isOpen(main)) {
        time++;
        write_file("text/ki.txt", "1000");
        write_file("text/hp.txt", "70");
        write_file("text/eki.txt", "1000");
        write_file("text/ehp.txt", "125");
        draw_sprite(main, "pic/load.jpg");
        sfRenderWindow_display(main);
        map_dia1(main);
        if (time > 350) {
            fight1(main , sprite, "pic/cjcell.png", "pic/attack4.png");
            sfRenderWindow_close(main);
        }
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            event_check(window.event, main);
        }
    }
}

void dia3(sfRenderWindow *main, sfSprite *sprite)
{
    int time = 10;
    run_t window = {0};
    while (sfRenderWindow_isOpen(main)) {
        time++;
        write_file("text/ki.txt", "1000");
        write_file("text/hp.txt", "50");
        write_file("text/eki.txt", "1000");
        write_file("text/ehp.txt", "150");
        draw_sprite(main, "pic/load.jpg");
        sfRenderWindow_display(main);
        map_dia1(main);
        if (time > 350) {
            fight1(main , sprite, "pic/cjfreez.png", "pic/attack5.png");
            sfRenderWindow_close(main);
        }
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            event_check(window.event, main);
        }
    }
}

void pdia1(sfRenderWindow *main, sfSprite *sprite)
{
    int time = 10;
    run_t window = {0};
    while (sfRenderWindow_isOpen(main)) {
        time++;
        write_file("text/ki.txt", "1000");
        write_file("text/hp.txt", "100");
        write_file("text/eki.txt", "1000");
        write_file("text/ehp.txt", "150");
        draw_sprite(main, "pic/load.jpg");
        sfRenderWindow_display(main);
        map_dia1(main);
        if (time > 350) {
            pfight1(main , sprite, "pic/cjbuu.png", "pic/attack2.png");
            sfRenderWindow_close(main);
        }
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            event_check(window.event, main);
        }
    }
}

int map_dia1(sfRenderWindow *main)
{
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyX)) {
        sfRenderWindow_close(main);
        return EXIT_SUCCESS;
    }
    return (0);
}
