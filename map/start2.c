/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void start_map0(sfRenderWindow *main, sfSprite *sprite)
{
    run_t window = {0};
    sfTexture *texture = sfTexture_createFromFile("pic/goku.png", NULL);
    sfVector2f vecstart = {9999, 9999};
    sfFont *font = sfFont_createFromFile("font/font.ttf");
    char *str = print_name2("text/name.txt");
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, vecstart);
    while (sfRenderWindow_isOpen(main)) {
        draw_sprite(main, "pic/intro.jpg");
        draw_name2(main, str, font);
        sfRenderWindow_display(main);
        map_start0(main, sprite);
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            event_check(window.event, main);
        }
    }
}

int map_start0(sfRenderWindow *main, sfSprite *sprite)
{
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyX)) {
        sfRenderWindow_close(main);
        return EXIT_SUCCESS;
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum2)) {
        start_map(main, sprite);
        sfRenderWindow_close(main);
    }
    return (0);
}
