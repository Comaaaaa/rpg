/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void map3_func(sfRenderWindow *main, sfSprite *sprite, sfClock *clock)
{
    draw_sprite(main, "pic/map3.jpg");
    set_lifes(main);
    talk2(main, sprite);
    map3_col(main, sprite);
    event_minimap(main , sprite);
    sfRenderWindow_drawSprite(main, sprite, NULL);
    anime_goku(sprite, clock);
    pause_game(main, sprite);
}

void my_map3(sfRenderWindow *main, sfSprite *sprite, int x, int y)
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
        map3_func(main, sprite, clock);
        my_clock(clockk);
            while (sfRenderWindow_pollEvent(main, &window.event)) {
            event_map3(main, sprite);
            go_shop(main, sprite);
            go_inv(main, sprite);
            event_check(window.event, main);
        }
    }
}

void map3_col(sfRenderWindow *main, sfSprite *sprite)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);

    if (psx.x < -1 && psx.y < 500 && psx.y > 450) {
        my_map2(main, sprite, 1280, 480);
        sfRenderWindow_close(main);
    }
    if (psx.x < 711 && psx.x > 679 && psx.y < 481 && psx.y > 449) {
        draw_sprite2(main, "pic/enter.png", 720, 470);
        if (sfTrue == sfKeyboard_isKeyPressed(sfKeyA)) {
            shop_map(main, sprite);
        }
    }
}

int event_map3(sfRenderWindow *main, sfSprite *sprite)
{
    move_guy(sprite);
    save_pos(sprite);
    minimap_printx3(sprite, "text/miniposx.txt");
    minimap_printy1(sprite, "text/miniposy.txt");
    write_file("text/save.txt", "3");
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
