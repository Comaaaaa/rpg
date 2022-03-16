/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** move5.c
*/

#include "../include/my.h"

void anime_fightbuu(sfSprite *sprite, int x)
{
    static sfIntRect rect = {0, 0, 84, 146};
    static sfIntRect rect2 = {0, 146, 84, 146};
    static sfIntRect rect3 = {0, 292, 84, 146};
    static sfIntRect rect4 = {0, 438, 84, 146};

    if (x == 1)
        sfSprite_setTextureRect(sprite, rect2);
    if (x == 2) {
        sfSprite_setTextureRect(sprite, rect3);
    }
    if (x == 3) {
        sfSprite_setTextureRect(sprite, rect);
    }
    if (x == 4) {
        sfSprite_setTextureRect(sprite, rect4);
    }
}

void anime_picolo(sfSprite *sprite, sfClock *clock)
{
    if (time_retur() == 0) {
        anime_picolo101(sprite);
    }
    else {
        anime_picoolo(sprite, clock);
    }
}

void anime_picolo101(sfSprite *sprite)
{
    static sfIntRect rect = {0, 0, 33, 38};
    sfSprite_setTextureRect(sprite, rect);
}

void anime_attack(sfSprite *sprite)
{
    if (return_attack() == 1)
        anime_attack1(sprite, 1);
    if (return_attack() == 2)
        anime_attack1(sprite, 2);
}

void anime_attack1(sfSprite *sprite, int x)
{
    static sfIntRect rect = {0, 0, 74, 66};
    static sfIntRect rect2 = {0, 66, 74, 66};
    if (x == 1)
    sfSprite_setTextureRect(sprite, rect);
    if (x == 2)
        sfSprite_setTextureRect(sprite, rect2);
}
