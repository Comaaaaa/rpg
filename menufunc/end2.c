/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void end2(sfRenderWindow *main)
{
    run_t window = {0};

    int kill = print_score("text/kill2.txt");
    while (sfRenderWindow_isOpen(main)) {
        draw_sprite(main, "pic/end.png");
        sfRenderWindow_display(main);
        pset_highscore(kill);
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            close_game(main);
            pback_to_menu3(main);
            event_check(window.event, main);
        }
    }
}

int pback_to_menu3(sfRenderWindow *main)
{
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyH)) {
        sfRenderWindow_close(main);
        map_score();
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyM)) {
        sfRenderWindow_close(main);
        draw_menu();
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyC)) {
        sfRenderWindow_close(main);
        save2();
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyQ)) {
        sfRenderWindow_close(main);
        return EXIT_SUCCESS;
    }
    return (0);
}

int close_game(sfRenderWindow *main)
{
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyX)){
        sfRenderWindow_close(main);
        return EXIT_SUCCESS;
    }
    return (0);
}
