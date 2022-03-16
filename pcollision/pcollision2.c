/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void pcollision_map22(sfSprite *sprite)
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

void pmap11_col(sfRenderWindow *main, sfSprite *sprite)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    if (psx.x < 581 && psx.x > 559 && psx.y < 151 && psx.y > 130) {
        draw_sprite2(main, "pic/enter.png", 630, 160);
        if (sfTrue == sfKeyboard_isKeyPressed(sfKeyA)) {
            pmy_map0(main, sprite, 580, 720);
            sfRenderWindow_close(main);
        }
    }
}
