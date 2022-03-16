/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void pmap9_func(sfRenderWindow *main, sfSprite *sprite, sfClock *clock)
{
    draw_sprite(main, "pic/map9.jpg");
    pset_lifes(main);
    ptalk5(main, sprite);
    pevent_minimap(main , sprite);
    sfRenderWindow_drawSprite(main, sprite, NULL);
    anime_picolo(sprite, clock);
    pause_game2(main, sprite);
}

void pmy_map9(sfRenderWindow *main, sfSprite *sprite, int x, int y)
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
        pmap9_func(main, sprite, clock);
        my_clock(clockk);
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            pevent_map9(main, sprite);
            pgo_shop(main, sprite);
            go_inv2(main, sprite);
            event_check(window.event, main);
        }
    }
}

int pevent_map9(sfRenderWindow *main, sfSprite *sprite)
{
    move_guy(sprite);
    save_pos2(sprite);
    minimap_printx1(sprite, "text/minipos2x.txt");
    minimap_printy3(sprite, "text/minipos2y.txt");
    write_file("text/save2.txt", "9");
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
