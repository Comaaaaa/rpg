/*
** EPITECH PROJECT, 2021
** dd
** File description:
** d
*/

#include "my.h"

void end(sfRenderWindow *main)
{
    run_t window = {0};
    while (sfRenderWindow_isOpen(main)) {
        sfRenderWindow_display(main);
        draw_sprite(main, "pic/end.png");
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            close_game(main);
            back_to_menu3(main);
            event_check(window.event, main);
        }
    }
}

void game_over(sfRenderWindow *main)
{
    run_t window = {0};
    while (sfRenderWindow_isOpen(main)) {
        draw_sprite(main, "pic/gameover.png");
        sfRenderWindow_display(main);
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            close_game(main);
            back_to_menu2(main);
            event_check(window.event, main);
        }
    }
}

void pgame_over(sfRenderWindow *main)
{
    run_t window = {0};
    while (sfRenderWindow_isOpen(main)) {
        draw_sprite(main, "pic/pgameover.png");
        sfRenderWindow_display(main);
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            close_game(main);
            back_to_menu2(main);
            event_check(window.event, main);
        }
    }
}

int back_to_menu2(sfRenderWindow *main)
{
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyX)) {
        sfRenderWindow_close(main);
        return EXIT_SUCCESS;
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyH)) {
        sfRenderWindow_close(main);
        draw_menu();
    }
    return (0);
}

int back_to_menu3(sfRenderWindow *main)
{
    int kill = print_score("text/kill.txt");
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyH)) {
        set_highscore(kill);
        sfRenderWindow_close(main);
        map_score();
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyM)) {
        sfRenderWindow_close(main);
        draw_menu();
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyC)) {
        sfRenderWindow_close(main);
        save();
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyX)) {
        sfRenderWindow_close(main);
        return EXIT_SUCCESS;
    }
    return (0);
}
