/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void anime_fightgoku1(sfSprite *sprite)
{
    static sfIntRect rect = {0, 0, 84, 146};
    static sfIntRect rect2 = {0, 146, 84, 146};
    static sfIntRect rect3 = {0, 292, 84, 146};
    static sfIntRect rect4 = {0, 438, 84, 146};
    static sfIntRect rect5 = {0, 584, 84, 146};

    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyZ))
        sfSprite_setTextureRect(sprite, rect2);
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyQ))
        sfSprite_setTextureRect(sprite, rect3);
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyA))
        sfSprite_setTextureRect(sprite, rect);
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyD))
        sfSprite_setTextureRect(sprite, rect4);
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyS))
        sfSprite_setTextureRect(sprite, rect5);
}

void anime_fightgoku0(sfSprite *sprite)
{
    static sfIntRect rect = {0, 730, 84, 146};
    static sfIntRect rect2 = {0, 1606, 84, 146};
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyE) && return_ssj() == 0)
        sfSprite_setTextureRect(sprite, rect);
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyE) && return_ssj() == 1)
        sfSprite_setTextureRect(sprite, rect2);
}

void anime_fightgoku2(sfSprite *sprite)
{
    static sfIntRect rect = {0, 876, 84, 146};
    static sfIntRect rect2 = {0, 1022, 84, 146};
    static sfIntRect rect3 = {0, 1168, 84, 146};
    static sfIntRect rect4 = {0, 1314, 84, 146};
    static sfIntRect rect5 = {0, 1460, 84, 146};
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyZ))
        sfSprite_setTextureRect(sprite, rect2);
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyQ))
        sfSprite_setTextureRect(sprite, rect3);
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyA))
        sfSprite_setTextureRect(sprite, rect);
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyD))
        sfSprite_setTextureRect(sprite, rect4);
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyS))
        sfSprite_setTextureRect(sprite, rect5);
}

void anime_fightgoku(sfSprite *sprite)
{
    if (time_retur() == 0) {
        anime_fgoku(sprite);
    }
    else {
        anime_fightgokuu(sprite);
    }
}

void anime_fightgokuu(sfSprite *sprite)
{
    if (return_ssj() == 0 && return_sword("text/sword.txt") == 0)
        anime_fightgoku1(sprite);
    if (return_ssj() == 1 && return_sword("text/sword.txt") == 0)
        anime_fightgoku2(sprite);
    if (return_ssj() == 0 && return_sword("text/sword.txt") == 1) {
        anime_fightgoku1(sprite);
        anime_fightgoku0(sprite);
    }
    if (return_ssj() == 1 && return_sword("text/sword.txt") == 1) {
        anime_fightgoku2(sprite);
        anime_fightgoku0(sprite);
    }
}
