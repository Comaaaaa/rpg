/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void map2_func(sfRenderWindow *main, sfSprite *sprite, sfClock *clock)
{
    draw_sprite(main , "pic/map2.jpg");
    set_lifes(main);
    event_minimap(main , sprite);
    sfRenderWindow_drawSprite(main, sprite, NULL);
    anime_goku(sprite, clock);
    collision_map2(sprite);
    collision_map22(sprite);
    map2_col(main, sprite);
    pause_game(main, sprite);
}

void my_map2(sfRenderWindow *main, sfSprite *sprite, int x, int y)
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
        map2_func(main, sprite, clock);
        my_clock(clockk);
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            event_map2(main, sprite);
            go_shop(main, sprite);
            event_check(window.event, main);
        }
    }
}

void map2_col(sfRenderWindow *main, sfSprite *sprite)
{
    sfVector2f psx;

    psx = sfSprite_getPosition(sprite);
    if (psx.x < 0) {
        my_map1(main, sprite, 1265, 340);
        sfRenderWindow_close(main);
    }
    if (psx.x > 1280 && psx.y < 495 && psx.x > 440) {
        my_map3(main, sprite, 0, 480);
    }
}

int event_map2(sfRenderWindow *main, sfSprite *sprite)
{
    move_guy(sprite);
    save_pos(sprite);
    minimap_printx2(sprite, "text/miniposx.txt");
    minimap_printy1(sprite, "text/miniposy.txt");
    write_file("text/save.txt", "2");
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
