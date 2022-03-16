/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void pstart_map(sfRenderWindow *main, sfSprite *sprite)
{
    run_t window = {0};
    sfTexture *texture = sfTexture_createFromFile("pic/picolo.png", NULL);
    sfVector2f vecstart = {9999, 9999};
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, vecstart);
    while (sfRenderWindow_isOpen(main)) {
        draw_sprite(main, "pic/pintro2.jpg");
        sfRenderWindow_display(main);
        pmap_start(main, sprite);
        while (sfRenderWindow_pollEvent(main, &window.event)) {
        }
    }
}

void pstart_map2(sfRenderWindow *main, sfSprite *sprite)
{
    run_t window = {0};
    sfTexture *texture = sfTexture_createFromFile("pic/picolo.png", NULL);
    sfVector2f vecstart = {9999, 9999};
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, vecstart);
    while (sfRenderWindow_isOpen(main)) {
        draw_sprite(main, "pic/intro3.png");
        sfRenderWindow_display(main);
        pmap_start2(main, sprite);
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            event_check(window.event, main);
        }
    }
}

int pmap_start2(sfRenderWindow *main, sfSprite *sprite)
{
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyX)) {
        sfRenderWindow_close(main);
        return EXIT_SUCCESS;
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum5)) {
        pmy_map0(main, sprite, 145, 240);
        sfRenderWindow_close(main);
    }
    return (0);
}

int pmap_start(sfRenderWindow *main, sfSprite *sprite)
{
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyX)) {
        sfRenderWindow_close(main);
        return EXIT_SUCCESS;
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum4)) {
        pstart_map2(main, sprite);
        sfRenderWindow_close(main);
    }
    return (0);
}
