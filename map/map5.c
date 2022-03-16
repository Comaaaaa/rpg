/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void map5_func(sfRenderWindow *main, sfSprite *sprite, sfClock *clock)
{
    draw_sprite(main, "pic/map5.jpg");
    set_lifes(main);
    map5_col(main, sprite);
    event_minimap(main , sprite);
    sfRenderWindow_drawSprite(main, sprite, NULL);
    anime_goku(sprite, clock);
    collision_map5(sprite);
    save_pos(sprite);
    pause_game(main, sprite);
}

void my_map5(sfRenderWindow *main, sfSprite *sprite, int x, int y)
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
        map5_func(main, sprite, clock);
        my_clock(clockk);
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            event_map5(main, sprite);
            go_shop(main, sprite);
            go_inv(main, sprite);
            event_check(window.event, main);
        }
    }
}

void map5_col(sfRenderWindow *main, sfSprite *sprite)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    if ((psx.x > 1224 && psx.x < 1246 && psx.y > 309 && psx.y < 351 &&
        sfKeyboard_isKeyPressed(sfKeyS)) ||
        sfKeyboard_isKeyPressed(sfKeyDown)) {
        my_map6(main, sprite, 145, 335);
        sfRenderWindow_close(main);
    }
}

int event_map5(sfRenderWindow *main, sfSprite *sprite)
{
    move_guy(sprite);
    minimap_printx2(sprite, "text/miniposx.txt");
    minimap_printy2(sprite, "text/miniposy.txt");
    write_file("text/save.txt", "5");
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
