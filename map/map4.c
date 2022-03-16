/*
** EPITECH PROJECT, 2021
** s
** File description:
** s
*/

#include "my.h"

void map4_func(sfRenderWindow *main, sfSprite *sprite, sfClock *clock)
{
    draw_sprite(main, "pic/map4.jpg");
    set_lifes(main);
    map4_col(main, sprite);
    event_minimap(main , sprite);
    sfRenderWindow_drawSprite(main, sprite, NULL);
    anime_goku(sprite, clock);
    collision_map4(sprite);
    save_pos(sprite);
    pause_game(main, sprite);
}

void my_map4(sfRenderWindow *main, sfSprite *sprite, int x, int y)
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
        map4_func(main, sprite, clock);
        my_clock(clockk);
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            event_map4(main, sprite);
            go_shop(main, sprite);
            go_inv(main, sprite);
            event_check(window.event, main);
        }
    }
}

void map4_col(sfRenderWindow *main, sfSprite *sprite)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    if ((psx.y < 30 && sfKeyboard_isKeyPressed(sfKeyZ))
        || sfKeyboard_isKeyPressed(sfKeyUp)){
        my_map1(main, sprite, 570, 625);
        sfRenderWindow_close(main);
    }
    if ((psx.x > 1215 && psx.y < 311 && psx.x > 299 &&
        sfKeyboard_isKeyPressed(sfKeyD)) ||
        sfKeyboard_isKeyPressed(sfKeyRight)) {
        my_map5(main, sprite, 30, 360);
        sfRenderWindow_close(main);
    }
}

int event_map4(sfRenderWindow *main, sfSprite *sprite)
{
    move_guy(sprite);
    minimap_printx1(sprite, "text/miniposx.txt");
    minimap_printy2(sprite, "text/miniposy.txt");
    write_file("text/save.txt", "4");
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
