/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void pause1(sfRenderWindow *main, sfSprite *sprite)
{
    run_t window = {0};
    while (sfRenderWindow_isOpen(main)) {
        draw_sprite(main, "pic/pause.png");
        sfRenderWindow_display(main);
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            pause_col(main, sprite);
            event_check(window.event, main);
        }
    }
}

void pause2(sfRenderWindow *main, sfSprite *sprite)
{
    run_t window = {0};
    while (sfRenderWindow_isOpen(main)) {
        draw_sprite(main, "pic/pause2.png");
        sfRenderWindow_display(main);
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            pause_col2(main, sprite);
            event_check(window.event, main);
        }
    }
}

int pause_col(sfRenderWindow *main, sfSprite *sprite)
{
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyQ)) {
        sfRenderWindow_close(main);
        return EXIT_SUCCESS;
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyM)) {
        sfRenderWindow_close(main);
        draw_menu();
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyR)) {
        save_if(main, sprite);
        sfRenderWindow_close(main);
    }
    return (0);
}

int pause_col2(sfRenderWindow *main, sfSprite *sprite)
{
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyQ)) {
        sfRenderWindow_close(main);
        return EXIT_SUCCESS;
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyM)) {
        sfRenderWindow_close(main);
        draw_menu();
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyR)) {
        save_if2(main, sprite);
        sfRenderWindow_close(main);
    }
    return (0);
}

void pause_game(sfRenderWindow *main, sfSprite *sprite)
{
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyEscape)) {
        pause1(main, sprite);
        sfRenderWindow_close(main);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeySpace)) {
        add_int(-999999 , "text/money.txt");
        add_int(-999 , "text/level.txt");
        add_int(-999 , "text/cloud.txt");
        add_int(-999999 , "text/senzu.txt");
        add_int(-7 , "text/db.txt");
        add_int(-1 , "text/sword.txt");
        add_int(-1 , "text/ssj.txt");
        add_int(-999999 , "text/lifes.txt");
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyN)) {
        set_all_to_nul();
        my_map0(main, sprite, 145, 240);
    }
}
