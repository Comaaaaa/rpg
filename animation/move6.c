/*
** EPITECH PROJECT, 2021
** s
** File description:
** s
*/

#include "my.h"

void anime_fpicolo(sfSprite *sprite)
{
    static sfIntRect rect2 = {0, 0, 84, 146};
    sfSprite_setTextureRect(sprite, rect2);
}

void anime_fightpicolo(sfSprite *sprite)
{
    if (time_retur() == 0) {
        anime_fpicolo(sprite);
    }
    else {
        anime_fightgoku1(sprite);
    }
}
