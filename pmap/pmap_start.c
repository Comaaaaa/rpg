/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void pmap0_func(sfRenderWindow *main, sfSprite *sprite, sfClock *clock)
{
    draw_sprite(main , "pic/main.jpg");
    pset_lifes(main);
    sfRenderWindow_drawSprite(main, sprite, NULL);
    anime_picolo(sprite, clock);
    pmap0_col(main, sprite);
    pcollision_map0(sprite);
    pause_game2(main, sprite);
}

void pmy_map0(sfRenderWindow *main, sfSprite *sprite, int x , int y)
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
        pmap0_func(main, sprite, clock);
        my_clock(clockk);
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            pevent_map0(main, sprite);
            pgo_shop(main, sprite);
            go_inv2(main, sprite);
            event_check(window.event, main);
        }
    }
}

void pmap0_col(sfRenderWindow *main, sfSprite *sprite)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    if (psx.y > 680 && psx.x < 611 &&
    psx.x > 569 && sfKeyboard_isKeyPressed(sfKeyS)) {
        pmy_map1(main, sprite, 575, 175);
    }
}

int pevent_map0(sfRenderWindow *main, sfSprite *sprite)
{
    move_guy(sprite);
    save_pos2(sprite);
    write_file("text/save2.txt", "0");
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
