/*
** EPITECH PROJECT, 2021
** sd
** File description:
** d
*/

#include "my.h"

void map6_func(sfRenderWindow *main, sfSprite *sprite, sfClock *clock)
{
    draw_sprite(main, "pic/map6.jpg");
    set_lifes(main);
    talk3(main, sprite);
    map6_col(main, sprite);
    event_minimap(main , sprite);
    sfRenderWindow_drawSprite(main, sprite, NULL);
    anime_goku(sprite, clock);
    pause_game(main, sprite);
}

void my_map6(sfRenderWindow *main, sfSprite *sprite, int x, int y)
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
        map6_func(main, sprite, clock);
        my_clock(clockk);
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            event_map6(main, sprite);
            go_shop(main, sprite);
            go_inv(main, sprite);
            event_check(window.event, main);
        }
    }
}

void map6_col(sfRenderWindow *main, sfSprite *sprite)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    sfVector2f no = {584, psx.y};
    if (psx.x > 604 && psx.x < 647 && psx.y > 659 &&
        (win_or_not() == 3 || win_or_not() == 4)) {
        add_int(1 , "text/cloud.txt");
        my_map7(main, sprite, 626, 85);
        sfRenderWindow_close(main);
    }
    if (psx.x > 604 && psx.x < 647 && psx.y > 555 &&
        return_cloud("text/cloud.txt") == 1 &&
        sfKeyboard_isKeyPressed(sfKeyNum1)) {
        my_map7(main, sprite, 626, 85);
        sfRenderWindow_close(main);
    }
    if (psx.x > 594 && psx.x < 647 && psx.y > 659 && win_or_not() != 3)
        sfSprite_setPosition(sprite, no);
}

int event_map6(sfRenderWindow *main, sfSprite *sprite)
{
    move_guy(sprite);
    save_pos(sprite);
    minimap_printx3(sprite, "text/miniposx.txt");
    minimap_printy2(sprite, "text/miniposy.txt");
    write_file("text/save.txt", "6");
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
