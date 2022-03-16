/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void test(void)
{
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyD))
        add_int(10, "text/ki.txt");
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyA) &&
        return_ki2("text/ki.txt") == 1 && return_ssj() == 0) {
        add_int(-5, "text/ki.txt");
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyA) &&
        return_ki2("text/ki.txt") == 1 && return_ssj() == 1) {
        add_int(-15, "text/ki.txt");
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyE) &&
        return_sword("text/sword.txt") == 1) {
        add_int(5, "text/ehp.txt");
        add_int(500, "text/ki.txt");
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyH) &&
        return_ki("text/senzu.txt") == 1) {
        add_int(-2, "text/hp.txt");
        add_int(1, "text/senzu.txt");
    }
}

void goku_coll(sfRenderWindow *main, sfSprite *sprite, sfSprite *sprite2)
{
    sfRenderWindow_drawSprite(main, sprite, NULL);
    sfRenderWindow_drawSprite(main, sprite2, NULL);
    anime_fightgoku(sprite);
    mvt();
}

void buu_coll(sfSprite *sprite, sfSprite *sprite2,
                sfSprite *sprite3)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    sfVector2f  psx2 = sfSprite_getPosition(sprite2);
    if (psx.x > 950) {
        anime_fightbuu(sprite3, 2);
    }
    else if (psx2.x > 900) {
        anime_fightbuu(sprite3, 4);
    }
    else {
        anime_fightbuu(sprite3, 3);
    }
}

void mvt(void)
{
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyZ) ||
        sfTrue == sfKeyboard_isKeyPressed(sfKeyS)) {
        if (sfTrue == sfKeyboard_isKeyPressed(sfKeyA)) {
            add_int(3, "text/ehp.txt");
        }
    }
}
