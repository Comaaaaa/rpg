/*
** EPITECH PROJECT, 2021
** d
** File description:
** s
*/

#include "my.h"

int event_check(sfEvent event, sfRenderWindow *window)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(window);
    return EXIT_SUCCESS;
}


int p_event(sfEvent event, sfRenderWindow *window)
{
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyX)) {
        sfRenderWindow_close(window);
        draw_menu();
    }

    if (event.type == sfEvtClosed)
        sfRenderWindow_close(window);
    return EXIT_SUCCESS;
}
