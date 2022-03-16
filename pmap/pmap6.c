/*
** EPITECH PROJECT, 2021
** sd
** File description:
** d
*/

#include "my.h"

void pmap6_func(sfRenderWindow *main, sfSprite *sprite, sfClock *clock)
{
    draw_sprite(main, "pic/map6.jpg");
    pset_lifes(main);
    ptalk3(main, sprite);
    pmap6_col(main, sprite);
    pevent_minimap(main , sprite);
    sfRenderWindow_drawSprite(main, sprite, NULL);
    anime_picolo(sprite, clock);
    pause_game2(main, sprite);
}

void pmy_map6(sfRenderWindow *main, sfSprite *sprite, int x, int y)
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
        pmap6_func(main, sprite, clock);
        my_clock(clockk);
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            pevent_map6(main, sprite);
            pgo_shop(main, sprite);
            go_inv2(main, sprite);
            event_check(window.event, main);
        }
    }
}

void pmap6_col(sfRenderWindow *main, sfSprite *sprite)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    sfVector2f no = {584, psx.y};
    if (psx.x > 604 && psx.x < 647 && psx.y > 659 &&
    (pwin_or_not() == 3 || pwin_or_not() == 4)) {
        pmy_map7(main, sprite, 626, 85);
        sfRenderWindow_close(main);
    }
    if (psx.x > 594 && psx.x < 647 && psx.y > 659 && pwin_or_not() != 3)
        sfSprite_setPosition(sprite, no);
}

int pevent_map6(sfRenderWindow *main, sfSprite *sprite)
{
    move_guy(sprite);
    save_pos2(sprite);
    minimap_printx3(sprite, "text/minipos2x.txt");
    minimap_printy2(sprite, "text/minipos2y.txt");
    write_file("text/save2.txt", "6");
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
