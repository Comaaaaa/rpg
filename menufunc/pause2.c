/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void pause_game2(sfRenderWindow *main, sfSprite *sprite)
{
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyEscape)) {
        pause2(main, sprite);
        sfRenderWindow_close(main);
    }
}
