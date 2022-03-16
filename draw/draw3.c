/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

int draw_score2(sfRenderWindow *window, char *str, int y, sfFont *font)
{
    font = sfFont_createFromFile("font/font.ttf");
    if (!font)
        return EXIT_FAILURE;
    sfText *text;
    text = sfText_create();
    sfVector2f vec = {960, y};
    sfText_setPosition(text, vec);
    sfText_setFont(text, font);
    sfText_setColor (text, sfWhite);
    sfText_setCharacterSize(text, 60);
    sfText_setString(text, str);
    sfRenderWindow_drawText(window, text, NULL);
    sfFont_destroy(font);
    return (0);
}

int draw_inv(sfRenderWindow *window, char *str, int x, sfFont *font)
{
    font = sfFont_createFromFile("font/font.ttf");
    if (!font)
        return EXIT_FAILURE;
    sfText *text;
    text = sfText_create();
    sfVector2f vec = {x, 473};
    sfText_setPosition(text, vec);
    sfText_setFont(text, font);
    sfText_setColor (text, sfWhite);
    sfText_setCharacterSize(text, 20);
    sfText_setString(text, str);
    sfRenderWindow_drawText(window, text, NULL);
    sfFont_destroy(font);
    return (0);
}
