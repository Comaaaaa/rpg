/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void pmap1_func(sfRenderWindow *main, sfSprite *sprite, sfClock *clock)
{
    draw_sprite(main, "pic/map11.jpg");
    pmap1_col(main, sprite);
    pmap11_col(main, sprite);
    pmap111_col(main, sprite);
    ptalk1(main, sprite);
    pset_lifes(main);
    pevent_minimap(main , sprite);
    sfRenderWindow_drawSprite(main, sprite, NULL);
    anime_picolo(sprite, clock);
    pcollision_map1(main, sprite);
    pcollision_map11(sprite);
    pause_game2(main, sprite);
}

void pmy_map1(sfRenderWindow *main, sfSprite *sprite, int x, int y)
{
    run_t window = {0};
    sfTexture *texture = sfTexture_createFromFile("pic/picolo.png", NULL);
    sfVector2f vecstart = {x, y};
    sfClock *clock = sfClock_create();
    sfClock *clockk = sfClock_create();
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, vecstart);
    while (sfRenderWindow_isOpen(main)) {
        sfRenderWindow_display(main);
        pmap1_func(main, sprite, clock);
        my_clock(clockk);
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            pevent_map1(main, sprite);
            pgo_shop(main, sprite);
            go_inv2(main, sprite);
            event_check(window.event, main);
        }
    }
}

void pmap1_col(sfRenderWindow *main, sfSprite *sprite)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    if (psx.x < 581 && psx.x > 559 && psx.y == 160) {
        draw_sprite2(main, "pic/enter.png", 630, 160);
        if (sfTrue == sfKeyboard_isKeyPressed(sfKeyA)) {
            pmy_map0(main, sprite, 580, 720);
            sfRenderWindow_close(main);
        }
    }
}

void pmap111_col(sfRenderWindow *main, sfSprite *sprite)
{
    sfVector2f  ps = sfSprite_getPosition(sprite);
    sfVector2f no = {1180, ps.y};
    sfVector2f no2 = {ps.x, 610};
    if (ps.x > 1259 && ps.y <= 360 && ps.y >= 310 &&
        sfKeyboard_isKeyPressed(sfKeyD)  && (pwin_or_not() == 1
        || pwin_or_not() == 2 || pwin_or_not() == 3
        || pwin_or_not() == 4)) {
        pmy_map2(main, sprite, 0, 330);
        sfRenderWindow_close(main);
    }
    if (ps.x > 1259 && ps.y <= 360 && ps.y >= 310
        && (pwin_or_not() == 0)) {
    }
    if (ps.y > 630 && (pwin_or_not() == 0 || pwin_or_not() == 1))
        sfSprite_setPosition(sprite, no2);
    if (ps.x > 1265 && ps.y <= 360 && ps.y >= 310 && (pwin_or_not() == 0))
        sfSprite_setPosition(sprite, no);
}

int pevent_map1(sfRenderWindow *main, sfSprite *sprite)
{
    move_guy(sprite);
    save_pos2(sprite);
    minimap_printx1(sprite, "text/minipos2x.txt");
    minimap_printy1(sprite, "text/minipos2y.txt");
    write_file("text/save2.txt", "1");
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyX)) {
        sfRenderWindow_close(main);
        return EXIT_SUCCESS;
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyC)) {
        pstatus(main, sprite);
        sfRenderWindow_close(main);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyG)) {
        pgoal(main, sprite);
        sfRenderWindow_close(main);
    }
    return (0);
}
