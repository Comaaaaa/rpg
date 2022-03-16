/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void anime_goku(sfSprite *sprite, sfClock *clock)
{
    if (time_retur() == 0) {
        anime_goku101(sprite);
    }
    else {
        anime_gokuu(sprite, clock);
    }
}

void anime_gokuu(sfSprite *sprite, sfClock *clock)
{
    if (return_key() == 2) {
        anime_goku2(sprite, clock);
    }
    else {
        if (return_ssj() == 0)
            anime_goku1(sprite, clock);
        if (return_ssj() == 1)
            anime_goku11(sprite, clock);
    }
}

void anime_picoolo(sfSprite *sprite, sfClock *clock)
{
    if (return_key() == 2) {
        anime_picolo2(sprite, clock);
    }
    else {
        anime_picolo1(sprite, clock);
    }
}

void anime_goku101(sfSprite *sprite)
{
    static sfIntRect rect = {0, 152, 33, 38};
    sfSprite_setTextureRect(sprite, rect);
}

void anime_fgoku(sfSprite *sprite)
{
    static sfIntRect rect2 = {0, 0, 876, 146};
    sfSprite_setTextureRect(sprite, rect2);
}
