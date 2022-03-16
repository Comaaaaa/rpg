/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void pstart_map0(sfRenderWindow *main, sfSprite *sprite)
{
    run_t window = {0};
    sfTexture *texture = sfTexture_createFromFile("pic/picolo.png", NULL);
    sfVector2f vecstart = {9999, 9999};
    sfFont *font = sfFont_createFromFile("font/font.ttf");
    char *str = print_name2("text/pname.txt");
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, vecstart);
    while (sfRenderWindow_isOpen(main)) {
        draw_sprite(main, "pic/pintro.jpg");
        draw_name2(main, str, font);
        sfRenderWindow_display(main);
        pmap_start0(main, sprite);
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            event_check(window.event, main);
        }
    }
}

int pmap_start0(sfRenderWindow *main, sfSprite *sprite)
{
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyX)) {
        sfRenderWindow_close(main);
        return EXIT_SUCCESS;
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum3)) {
        pstart_map(main, sprite);
        sfRenderWindow_close(main);
    }
    return (0);
}

void pevent_minimap(sfRenderWindow *main, sfSprite *sprite)
{
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyM)) {
        pminimap(main , sprite, print_miniposx2(), print_miniposy2());
        sfRenderWindow_close(main);
    }
}
