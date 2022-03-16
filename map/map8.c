/*
** EPITECH PROJECT, 2021
** ee
** File description:
** ee
*/

#include "my.h"

void map8_func(sfRenderWindow *main, sfSprite *sprite, sfClock *clock)
{
    draw_sprite(main, "pic/map8.jpg");
    set_lifes(main);
    talk4(main, sprite);
    map8_col(main, sprite);
    event_minimap(main , sprite);
    sfRenderWindow_drawSprite(main, sprite, NULL);
    anime_goku(sprite, clock);
    pause_game(main, sprite);
}

void my_map8(sfRenderWindow *main, sfSprite *sprite, int x, int y)
{
    run_t window = {0};
    sfTexture *texture = sfTexture_createFromFile("pic/goku.png", NULL);
    sfVector2f vecstart = {x, y};
    sfClock *clock = sfClock_create();
    sfClock *clockk = sfClock_create();
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, vecstart);

    while (sfRenderWindow_isOpen(main)) {
        sfRenderWindow_display(main);
        map8_func(main, sprite, clock);
        my_clock(clockk);
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            event_map8(main, sprite);
            go_shop(main, sprite);
            go_inv(main, sprite);
            event_check(window.event, main);
        }
    }
}

void map8_col(sfRenderWindow *main, sfSprite *sprite)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    sfVector2f no = { 60, psx.y};
    if (psx.x < 0  && psx.y < 391 && psx.y > 279 && win_or_not() == 4) {
        my_map9(main, sprite, 1270, 308);
    }
    if (psx.x < 40  && psx.y < 391 && psx.y > 279 && win_or_not() != 4) {
        sfSprite_setPosition(sprite, no);
    }
    if (psx.x < 200  && psx.y < 391 && psx.y > 279 &&
        return_cloud("text/cloud.txt") == 1 &&
        sfKeyboard_isKeyPressed(sfKeyNum1)) {
        add_int(1, "text/cloud.txt");
        my_map9(main, sprite, 1270, 308);
    }
}

int event_map8(sfRenderWindow *main, sfSprite *sprite)
{
    move_guy(sprite);
    save_pos(sprite);
    minimap_printx2(sprite, "text/miniposx.txt");
    minimap_printy3(sprite, "text/miniposy.txt");
    write_file("text/save.txt", "8");
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyX)) {
        sfRenderWindow_close(main);
        return EXIT_SUCCESS;
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyC)) {
        status(main, sprite);
        sfRenderWindow_close(main);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyG)) {
        goal(main, sprite);
        sfRenderWindow_close(main);
    }
    return (0);
}
