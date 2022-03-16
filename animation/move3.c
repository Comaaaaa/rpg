/*
** EPITECH PROJECT, 2021
** d
** File description:
** d$
*/

#include "my.h"

int offset = 33;
int max_value = 132;

void anime_picolo1(sfSprite *sprite, sfClock *clock)
{
    static sfIntRect rect = {0, 0, 33, 38};
    static sfIntRect rect2 = {0, 38, 33, 38};
    static sfIntRect rect3 = {0, 114, 33, 38};
    static sfIntRect rect4 = {0, 76, 33, 38};
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyD)) {
        move_rec(&rect2, offset, max_value, clock);
        sfSprite_setTextureRect(sprite, rect2);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyZ)) {
        move_rec(&rect3, offset, max_value, clock);
        sfSprite_setTextureRect(sprite, rect3);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyS)) {
        move_rec(&rect, offset, max_value, clock);
        sfSprite_setTextureRect(sprite, rect);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyQ)) {
        move_rec(&rect4, offset, max_value, clock);
        sfSprite_setTextureRect(sprite, rect4);
    }
}

void anime_picolo2(sfSprite *sprite, sfClock *clock)
{
    static sfIntRect rect = {0, 0, 33, 38};
    static sfIntRect rect2 = {0, 38, 33, 38};
    static sfIntRect rect3 = {0, 114, 33, 38};
    static sfIntRect rect4 = {0, 76, 33, 38};
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyRight)) {
        move_rec(&rect2, offset, max_value, clock);
        sfSprite_setTextureRect(sprite, rect2);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyUp)) {
        move_rec(&rect3, offset, max_value, clock);
        sfSprite_setTextureRect(sprite, rect3);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyDown)) {
        move_rec(&rect, offset, max_value, clock);
        sfSprite_setTextureRect(sprite, rect);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyLeft)) {
        move_rec(&rect4, offset, max_value, clock);
        sfSprite_setTextureRect(sprite, rect4);
    }
}

void anime_goku11(sfSprite *sprite, sfClock *clock)
{
    static sfIntRect rect = {0, 0, 33, 38};
    static sfIntRect rect2 = {0, 38, 33, 38};
    static sfIntRect rect3 = {0, 114, 33, 38};
    static sfIntRect rect4 = {0, 76, 33, 38};
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyZ)) {
        move_rec(&rect2, offset, max_value, clock);
        sfSprite_setTextureRect(sprite, rect2);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyQ)) {
        move_rec(&rect3, offset, max_value, clock);
        sfSprite_setTextureRect(sprite, rect3);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyS)) {
        move_rec(&rect, offset, max_value, clock);
        sfSprite_setTextureRect(sprite, rect);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyD)) {
        move_rec(&rect4, offset, max_value, clock);
        sfSprite_setTextureRect(sprite, rect4);
    }
}

void anime_goku1(sfSprite *sprite, sfClock *clock)
{
    static sfIntRect rect = {0, 266, 33, 38};
    static sfIntRect rect2 = {0, 190, 33, 38};
    static sfIntRect rect3 = {0, 152, 33, 38};
    static sfIntRect rect4 = {0, 228, 33, 38};
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyZ)) {
        move_rec(&rect2, offset, max_value, clock);
        sfSprite_setTextureRect(sprite, rect2);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyQ)) {
        move_rec(&rect, offset, max_value, clock);
        sfSprite_setTextureRect(sprite, rect);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyS)) {
        move_rec(&rect3, offset, max_value, clock);
        sfSprite_setTextureRect(sprite, rect3);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyD)) {
        move_rec(&rect4, offset, max_value, clock);
        sfSprite_setTextureRect(sprite, rect4);
    }
}

void anime_goku2(sfSprite *sprite, sfClock *clock)
{
    static sfIntRect rect = {0, 266, 33, 38};
    static sfIntRect rect2 = {0, 190, 33, 38};
    static sfIntRect rect3 = {0, 152, 33, 38};
    static sfIntRect rect4 = {0, 228, 33, 38};
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyUp)) {
        move_rec(&rect2, offset, max_value, clock);
        sfSprite_setTextureRect(sprite, rect2);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyLeft)) {
        move_rec(&rect, offset, max_value, clock);
        sfSprite_setTextureRect(sprite, rect);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyDown)) {
        move_rec(&rect3, offset, max_value, clock);
        sfSprite_setTextureRect(sprite, rect3);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyRight)) {
        move_rec(&rect4, offset, max_value, clock);
        sfSprite_setTextureRect(sprite, rect4);
    }
}
