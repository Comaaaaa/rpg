/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void pmap2_func(sfRenderWindow *main, sfSprite *sprite, sfClock *clock)
{
    draw_sprite(main, "pic/map2.jpg");
    pset_lifes(main);
    pevent_minimap(main , sprite);
    sfRenderWindow_drawSprite(main, sprite, NULL);
    anime_picolo(sprite, clock);
    pcollision_map2(sprite);
    pcollision_map22(sprite);
    pmap2_col(main, sprite);
    pause_game2(main, sprite);
}

void pmy_map2(sfRenderWindow *main, sfSprite *sprite, int x, int y)
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
        pmap2_func(main, sprite, clock);
        my_clock(clockk);
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            pevent_map2(main, sprite);
            pgo_shop(main, sprite);
            go_inv2(main, sprite);
            event_check(window.event, main);
        }
    }
}

void pmap2_col(sfRenderWindow *main, sfSprite *sprite)
{
    sfVector2f psx;

    psx = sfSprite_getPosition(sprite);
    if (psx.x < 0) {
        pmy_map1(main, sprite, 1265, 340);
        sfRenderWindow_close(main);
    }
    if (psx.x > 1280 && psx.y < 495 && psx.x > 440) {
        pmy_map3(main, sprite, 0, 480);
    }
}

int pevent_map2(sfRenderWindow *main, sfSprite *sprite)
{
    move_guy(sprite);
    save_pos2(sprite);
    minimap_printx2(sprite, "text/minipos2x.txt");
    minimap_printy1(sprite, "text/minipos2y.txt");
    write_file("text/save2.txt", "2");
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
