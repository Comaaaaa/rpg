/*
** EPITECH PROJECT, 2021
** ddd
** File description:
** dd
*/

#include "my.h"

void pmap7_func(sfRenderWindow *main, sfSprite *sprite, sfClock *clock)
{
    draw_sprite(main, "pic/map7.jpg");
    pset_lifes(main);
    pmap7_col(main, sprite);
    pevent_minimap(main , sprite);
    sfRenderWindow_drawSprite(main, sprite, NULL);
    anime_picolo(sprite, clock);
    pause_game2(main, sprite);
}

void pmy_map7(sfRenderWindow *main, sfSprite *sprite, int x, int y)
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
        pmap7_func(main, sprite, clock);
        my_clock(clockk);
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            pevent_map7(main, sprite);
            pgo_shop(main, sprite);
            go_inv2(main, sprite);
            event_check(window.event, main);
        }
    }
}

void pmap7_col(sfRenderWindow *main, sfSprite *sprite)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    if (psx.x < -5 && psx.y < 385 && psx.y > 275) {
        pmy_map8(main, sprite, 1260, 330);
    }
}

int pevent_map7(sfRenderWindow *main, sfSprite *sprite)
{
    move_guy(sprite);
    save_pos2(sprite);
    minimap_printx3(sprite, "text/minipos2x.txt");
    minimap_printy3(sprite, "text/minipos2y.txt");
    write_file("save2.txt", "7");
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
