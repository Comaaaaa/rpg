/*
** EPITECH PROJECT, 2021
** f
** File description:
** d
*/

#include "my.h"

void minimap(sfRenderWindow *main, sfSprite *sprite, int x, int y)
{
    run_t window = {0};
    sfTexture *texture = sfTexture_createFromFile("pic/cube.jpg", NULL);
    sfVector2f vecstart = {x, y};
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, vecstart);

    while (sfRenderWindow_isOpen(main)) {
        sfRenderWindow_display(main);
        draw_sprite(main, "pic/minimap2.jpg");
        sfRenderWindow_drawSprite(main, sprite, NULL);
        minimap_func(main, sprite);
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            event_check(window.event, main);
        }
    }
}

int minimap_func(sfRenderWindow *main, sfSprite *sprite)
{
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyX)) {
        sfRenderWindow_close(main);
        return EXIT_SUCCESS;
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyW)) {
        save_if(main, sprite);
    }
    return (0);
}

void pminimap(sfRenderWindow *main, sfSprite *sprite, int x, int y)
{
    run_t window = {0};
    sfTexture *texture = sfTexture_createFromFile("pic/cube.jpg", NULL);
    sfVector2f vecstart = {x, y};
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, vecstart);

    while (sfRenderWindow_isOpen(main)) {
        sfRenderWindow_display(main);
        draw_sprite(main, "pic/minimap2.jpg");
        sfRenderWindow_drawSprite(main, sprite, NULL);
        pminimap_func(main, sprite);
        while (sfRenderWindow_pollEvent(main, &window.event)) {
        }
    }
}

int pminimap_func(sfRenderWindow *main, sfSprite *sprite)
{
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyX)) {
        sfRenderWindow_close(main);
        return EXIT_SUCCESS;
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyW)) {
        save_if2(main, sprite);
    }
    return (0);
}
