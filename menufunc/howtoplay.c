/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void htp(sfRenderWindow *main)
{
    run_t window = {0};
    while (sfRenderWindow_isOpen(main)) {
        sfRenderWindow_display(main);
        draw_sprite(main, "pic/howtoplay.png");
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            if (sfTrue == sfKeyboard_isKeyPressed(sfKeyX)) {
                sfRenderWindow_close(main);
                draw_menu();
            }
            event_check(window.event, main);
            close_game(main);
        }
    }
}
