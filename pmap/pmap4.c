/*
** EPITECH PROJECT, 2021
** s
** File description:
** s
*/

#include "my.h"

void pmap4_func(sfRenderWindow *main, sfSprite *sprite, sfClock *clock)
{
    draw_sprite(main, "pic/map4.jpg");
    pset_lifes(main);
    pmap4_col(main, sprite);
    pevent_minimap(main , sprite);
    sfRenderWindow_drawSprite(main, sprite, NULL);
    collision_map4(sprite);
    anime_picolo(sprite, clock);
    pause_game2(main, sprite);
}

void pmy_map4(sfRenderWindow *main, sfSprite *sprite, int x, int y)
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
        pmap4_func(main, sprite, clock);
        my_clock(clockk);
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            pevent_map4(main, sprite);
            pgo_shop(main, sprite);
            go_inv2(main, sprite);
            event_check(window.event, main);
        }
    }
}

void pmap4_col(sfRenderWindow *main, sfSprite *sprite)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    if (psx.y < 30 && sfKeyboard_isKeyPressed(sfKeyZ)) {
        pmy_map1(main, sprite, 570, 625);
        sfRenderWindow_close(main);
    }
    if (psx.x > 1215 && psx.y < 311 && psx.x > 299 &&
        sfKeyboard_isKeyPressed(sfKeyD)) {
        pmy_map5(main, sprite, 30, 360);
        sfRenderWindow_close(main);
    }
}

int pevent_map4(sfRenderWindow *main, sfSprite *sprite)
{
    move_guy(sprite);
    save_pos2(sprite);
    minimap_printx1(sprite, "text/minipos2x.txt");
    minimap_printy2(sprite, "text/minipos2y.txt");
    write_file("text/save2.txt", "4");
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
