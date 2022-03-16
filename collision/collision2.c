/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void collision_map22(sfSprite *sprite)
{
    sfVector2f psx = sfSprite_getPosition(sprite);
    sfVector2f rright = {psx.x, 315};
    sfVector2f lleft = {psx.x, 360};
    sfVector2f rock = {510, psx.y};

    if (psx.y < 315 && psx.x < 449 && psx.x > 0)
        sfSprite_setPosition(sprite, rright);
    if (psx.y > 360 && psx.x < 449 && psx.x > 0)
        sfSprite_setPosition(sprite, lleft);
    if (psx.x > 510 && psx.x < 525 && psx.y > 315 && psx.y < 435)
        sfSprite_setPosition(sprite, rock);
}

void map11_col(sfRenderWindow *main, sfSprite *sprite)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    if (psx.x < 581 && psx.x > 559 && psx.y < 151 && psx.y > 130) {
        draw_sprite2(main, "pic/enter.png", 630, 160);
        if (sfTrue == sfKeyboard_isKeyPressed(sfKeyA)) {
            my_map0(main, sprite, 580, 720);
            sfRenderWindow_close(main);
        }
    }
}

void collision_map4(sfSprite *sprite)
{
    sfVector2f psx = sfSprite_getPosition(sprite);
    sfVector2f rright = {600, psx.y};
    sfVector2f right = {550, psx.y};
    sfVector2f rig = {psx.x, 326};

    if (psx.x > 601 && psx.y < 271 && psx.y > 24)
        sfSprite_setPosition(sprite, rright);
    if (psx.x < 548 && psx.y < 320 && psx.y > 24)
        sfSprite_setPosition(sprite, right);
    if (psx.y >= 325 && psx.x < 1211 && psx.x > 625)
        sfSprite_setPosition(sprite, rig);
}

void collision_map5(sfSprite *sprite)
{
    sfVector2f psx = sfSprite_getPosition(sprite);
    sfVector2f rright = {psx.x, 262};
    sfVector2f right = {psx.x, 408};
    sfVector2f righ = {-1, psx.y};
    sfVector2f rig = {1240, psx.y};
    if (psx.y < 261 && psx.x > -6 && psx.x < 1256)
        sfSprite_setPosition(sprite, rright);
    if (psx.y > 409 && psx.x > -6 && psx.x < 1256)
        sfSprite_setPosition(sprite, right);
    if (psx.x < -6)
        sfSprite_setPosition(sprite, righ);
    if (psx.x > 1249)
        sfSprite_setPosition(sprite, rig);
}
