/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void pcollision_map1(sfRenderWindow *main, sfSprite *sprite)
{
    sfVector2f psx = sfSprite_getPosition(sprite);
    sfVector2f rright = {555, psx.y};
    sfVector2f lleft = {590, psx.y};

    if (psx.x < 555 && psx.y < 660 && psx.y >= 160) {
        sfSprite_setPosition(sprite, rright);
    }
    if ((psx.x > 590 && psx.y < 300 && psx.y >= 160) ||
        (psx.x > 590 && psx.y < 660 && psx.y >= 375)) {
        sfSprite_setPosition(sprite, lleft);
    }
    if (psx.y > 630 && (pwin_or_not() == 2 ||
        pwin_or_not() == 3 || pwin_or_not() == 4)) {
        pmy_map4(main, sprite, 570, 0);
        sfRenderWindow_close(main);
    }
}

void pcollision_map11(sfSprite *sprite)
{
    sfVector2f psx = sfSprite_getPosition(sprite);
    sfVector2f upp = {psx.x, 310};
    sfVector2f downn = {psx.x, 360};
    sfVector2f popo = {psx.x, 160};

    if (psx.x > 620 && psx.y < 310 && psx.y > 290)
        sfSprite_setPosition(sprite, upp);
    if (psx.x > 620 && psx.y > 360)
        sfSprite_setPosition(sprite, downn);
    if (psx.x <= 590 && psx.x >= 540 && psx.y < 160)
        sfSprite_setPosition(sprite, popo);
}

void pcollision_map00(sfSprite *sprite)
{
    sfVector2f psx = sfSprite_getPosition(sprite);
    sfVector2f rright = {50, psx.y};
    sfVector2f lleft = {psx.x, 180};
    sfVector2f upp = {665, psx.y};
    sfVector2f downn = {psx.x, 310};
    sfVector2f dodo = {psx.x, 350};
    sfVector2f fofo = {800, psx.y};
    if (psx.x < 50 && psx.y >= 175 && psx.y <= 630)
        sfSprite_setPosition(sprite, rright);
    if (psx.x >= 665 && psx.x <= 680 && psx.y >= 180 && psx.y <= 300)
        sfSprite_setPosition(sprite, upp);
    if (psx.y <= 180 && psx.x >= 50 && psx.x < 670)
        sfSprite_setPosition(sprite, lleft);
    if (psx.x >= 685 && psx.x <= 740 && psx.y < 310)
        sfSprite_setPosition(sprite, downn);
    if (psx.x <= 820 && psx.x >= 800 && psx.y >= 370 && psx.y <= 490)
        sfSprite_setPosition(sprite, fofo);
    if (psx.x <= 1180 && psx.x >= 810 && psx.y >= 350 && psx.y <= 370)
        sfSprite_setPosition(sprite, dodo);
}

void pcollision_map0(sfSprite *sprite)
{
    sfVector2f psx = sfSprite_getPosition(sprite);
    sfVector2f rock = {psx.x, 630};
    sfVector2f popo = {755, psx.y};
    sfVector2f roro = {psx.x, 130};
    sfVector2f coco = {1180, psx.y};

    if (psx.x >= 1180 && psx.y >= 130 && psx.y <= 350)
        sfSprite_setPosition(sprite, coco);
    if (psx.x <= 755 && psx.x >= 745 && psx.y >= 130 && psx.y <= 300)
        sfSprite_setPosition(sprite, popo);
    if ((psx.y >= 630 && psx.x >= 50 && psx.x < 540) ||
        (psx.y >= 630 && psx.x >= 620 && psx.x <= 1225)) {
        sfSprite_setPosition(sprite, rock);
    }
    if ((psx.y <= 130 && psx.x >= 755 && psx.x < 855) ||
        (psx.y <= 130 && psx.x >= 1065 && psx.x <= 1180)) {
        sfSprite_setPosition(sprite, roro);
    }
}

void pcollision_map2(sfSprite *sprite)
{
    sfVector2f psx = sfSprite_getPosition(sprite);
    sfVector2f upp = {465, psx.y};
    sfVector2f downn = {psx.x, 315};
    sfVector2f gone = {psx.x, 495};
    sfVector2f bbb = {psx.x, 445};
    sfVector2f ccc = {psx.x, 495};

    if (psx.x < 465 && psx.y > 374 && psx.y < 496)
        sfSprite_setPosition(sprite, upp);
    if (psx.y < 315 && psx.x > 465 && psx.x <= 510)
        sfSprite_setPosition(sprite, downn);
    if (psx.y > 495 && psx.x >= 465 && psx.x <= 510)
        sfSprite_setPosition(sprite, gone);
    if (psx.x > 521 && psx.y < 445)
        sfSprite_setPosition(sprite, bbb);
    if (psx.x > 521 && psx.y > 495)
        sfSprite_setPosition(sprite, ccc);
}
