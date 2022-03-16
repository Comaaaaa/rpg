/*
** EPITECH PROJECT, 2021
** zz
** File description:
** z
*/

#include "my.h"

void win_map(sfRenderWindow *main)
{
    run_t window = {0};

    while (sfRenderWindow_isOpen(main)) {
        sfRenderWindow_display(main);
        set_lifes(main);
        draw_sprite(main, "pic/win.png");
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            if (sfTrue == sfKeyboard_isKeyPressed(sfKeyW)) {
                add_int(-100 , "text/money.txt");
                add_int(-1, "text/lifes.txt");
                add_int(-1, "text/level.txt");
                add_int(-1, "text/kill.txt");
                check_enemy();
                check_enemy1();
                sfRenderWindow_close(main);
                save();
            }
            event_check(window.event, main);
        }
    }
}

void loose_map(sfRenderWindow *main)
{
    run_t window = {0};

    while (sfRenderWindow_isOpen(main)) {
        sfRenderWindow_display(main);
        set_lifes(main);
        draw_sprite(main, "pic/win2.png");
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            if (sfTrue == sfKeyboard_isKeyPressed(sfKeyW)) {
                add_int(1, "text/lifes.txt");
                add_int(1, "text/enemy.txt");
                sfRenderWindow_close(main);
                save();
            }
            event_check(window.event, main);
        }
    }
}

void pwin_map(sfRenderWindow *main)
{
    run_t window = {0};

    while (sfRenderWindow_isOpen(main)) {
        sfRenderWindow_display(main);
        set_lifes(main);
        draw_sprite(main, "pic/pwin.png");
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            if (sfTrue == sfKeyboard_isKeyPressed(sfKeyW)) {
                add_int(-1, "text/plifes.txt");
                add_int(-1, "text/plevel.txt");
                add_int(-1, "text/kill2.txt");
                check_enemy2();
                check_enemy4();
                sfRenderWindow_close(main);
                save2();
            }
            event_check(window.event, main);
        }
    }
}

void ploose_map(sfRenderWindow *main)
{
    run_t window = {0};

    while (sfRenderWindow_isOpen(main)) {
        sfRenderWindow_display(main);
        set_lifes(main);
        draw_sprite(main, "pic/ploose.png");
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            if (sfTrue == sfKeyboard_isKeyPressed(sfKeyW)) {
                add_int(1, "text/plifes.txt");
                check_enemy2();
                sfRenderWindow_close(main);
                save2();
            }
            event_check(window.event, main);
        }
    }
}
