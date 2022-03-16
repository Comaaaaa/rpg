/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** map_start2.c
*/

#include "../include/my.h"

int event_map0(sfRenderWindow *main, sfSprite *sprite)
{
    move_guy(sprite);
    save_pos(sprite);
    write_file("text/save.txt", "0");
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyX)) {
        sfRenderWindow_close(main);
        return EXIT_SUCCESS;
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyG)) {
        goal(main, sprite);
        sfRenderWindow_close(main);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyC)) {
        status(main, sprite);
        sfRenderWindow_close(main);
    }
    go_inv(main, sprite);
    return (0);
}

void event_minimap(sfRenderWindow *main, sfSprite *sprite)
{
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyM)) {
        minimap(main , sprite, print_miniposx(), print_miniposy());
        sfRenderWindow_close(main);
    }
}