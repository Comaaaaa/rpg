/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void map1_func(sfRenderWindow *main, sfSprite *sprite, sfClock *clock)
{
    draw_sprite(main, "pic/map11.jpg");
    map1_col(main, sprite);
    map11_col(main, sprite);
    map111_col(main, sprite);
    talk1(main, sprite);
    set_lifes(main);
    event_minimap(main , sprite);
    sfRenderWindow_drawSprite(main, sprite, NULL);
    anime_goku(sprite, clock);
    collision_map1(main, sprite);
    collision_map11(sprite);
    pause_game(main, sprite);
}

void my_map1(sfRenderWindow *main, sfSprite *sprite, int x, int y)
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
        map1_func(main, sprite, clock);
        my_clock(clockk);
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            event_map1(main, sprite);
            go_shop(main, sprite);
            go_inv(main, sprite);
            event_check(window.event, main);
        }
    }
}

void map1_col(sfRenderWindow *main, sfSprite *sprite)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    if (psx.x < 581 && psx.x > 559 && psx.y == 160) {
        draw_sprite2(main, "pic/enter.png", 630, 160);
        if (sfTrue == sfKeyboard_isKeyPressed(sfKeyA)) {
            my_map0(main, sprite, 580, 720);
            sfRenderWindow_close(main);
        }
    }
    if (psx.x > 899 && psx.y <= 360 && psx.y >= 310 &&
        sfKeyboard_isKeyPressed(sfKeyNum1) &&
        return_cloud("text/cloud.txt") == 1) {
        add_int(1 , "text/cloud.txt");
        my_map2(main, sprite, 0, 330);
        sfRenderWindow_close(main);
    }
    if (psx.y > 505 && return_cloud("text/cloud.txt") == 1 &&
        sfKeyboard_isKeyPressed(sfKeyNum1)) {
        txt_cloud(main, sprite);
    }
}

void map111_col(sfRenderWindow *main, sfSprite *sprite)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    sfVector2f no = {1180, psx.y};
    sfVector2f no2 = {psx.x, 610};
    if (psx.x > 1259 && psx.y <= 360 && psx.y >= 310 &&
        sfKeyboard_isKeyPressed(sfKeyD)  && (win_or_not() == 1
        || win_or_not() == 2 || win_or_not() == 3  ||
        win_or_not() == 4)) {
        my_map2(main, sprite, 0, 330);
        sfRenderWindow_close(main);
    }
    if (psx.y > 630 && (win_or_not() == 0 || win_or_not() == 1))
        sfSprite_setPosition(sprite, no2);
    if (psx.x > 1265 && psx.y <= 360 && psx.y >= 310 && (win_or_not() == 0))
        sfSprite_setPosition(sprite, no);
}

int event_map1(sfRenderWindow *main, sfSprite *sprite)
{
    move_guy(sprite);
    save_pos(sprite);
    minimap_printx1(sprite, "text/miniposx.txt");
    minimap_printy1(sprite, "text/miniposy.txt");
    write_file("text/save.txt", "1");
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
