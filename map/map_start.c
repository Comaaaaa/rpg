/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void my_clock(sfClock *clock)
{
    sfTime time;
    float second;
    time = sfClock_getElapsedTime(clock);
    second = time.microseconds / 1000000.0;
    if (second < 0.1) {
        write_file("text/timer.txt", "0");
    }
    else {
        write_file("text/timer.txt", "1");
    }
}

void timer(sfClock *clock)
{
    sfTime time;
    float second;
    time = sfClock_getElapsedTime(clock);
    second = time.microseconds / 1000000.0;
    second = second - 1;
}

void map0_func(sfRenderWindow *main, sfSprite *sprite, sfClock *clock)
{
    draw_sprite(main , "pic/main.jpg");
    set_lifes(main);
    sfRenderWindow_drawSprite(main, sprite, NULL);
    anime_goku(sprite, clock);
    collision_map0(sprite);
    collision_map00(sprite);
    map0_col(main, sprite);
    pause_game(main, sprite);
}

void my_map0(sfRenderWindow *main, sfSprite *sprite, int x , int y)
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
        map0_func(main, sprite, clock);
        my_clock(clockk);
        timer(clock);
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            event_map0(main, sprite);
            go_shop(main, sprite);
            event_check(window.event, main);
        }
    }
}

void map0_col(sfRenderWindow *main, sfSprite *sprite)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    if ((psx.y > 680 && psx.x < 611 &&
        psx.x > 569 && sfKeyboard_isKeyPressed(sfKeyS)) ||
        sfKeyboard_isKeyPressed(sfKeyDown)) {
        my_map1(main, sprite, 575, 175);
    }
}
