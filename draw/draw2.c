/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

int draw_name(sfRenderWindow *window, char *str, sfFont *font)
{
    font = sfFont_createFromFile("font/font.ttf");
    if (!font)
        return EXIT_FAILURE;
    sfText *text;
    text = sfText_create();
    sfVector2f vec = {400, 205};
    sfText_setPosition(text, vec);
    sfText_setFont(text, font);
    sfText_setColor (text, sfWhite);
    sfText_setCharacterSize(text, 40);
    sfText_setString(text, str);
    sfRenderWindow_drawText(window, text, NULL);
    sfFont_destroy(font);
    return (0);
}

int draw_level(sfRenderWindow *window, char *str, sfFont *font)
{
    font = sfFont_createFromFile("font/font.ttf");
    if (!font)
        return EXIT_FAILURE;
    sfText *text;
    text = sfText_create();
    sfVector2f vec = {400, 495};
    sfText_setPosition(text, vec);
    sfText_setFont(text, font);
    sfText_setColor (text, sfWhite);
    sfText_setCharacterSize(text, 40);
    sfText_setString(text, str);
    sfRenderWindow_drawText(window, text, NULL);
    sfFont_destroy(font);
    return (0);
}

int draw_fps(sfRenderWindow *window, char *str, sfFont *font)
{
    font = sfFont_createFromFile("font/font.ttf");
    if (!font)
        return EXIT_FAILURE;
    sfText *text;
    text = sfText_create();
    sfVector2f vec = {190, 522};
    sfText_setPosition(text, vec);
    sfText_setFont(text, font);
    sfText_setColor (text, sfWhite);
    sfText_setCharacterSize(text, 60);
    sfText_setString(text, str);
    sfRenderWindow_drawText(window, text, NULL);
    sfFont_destroy(font);
    return (0);
}

int draw_name2(sfRenderWindow *window, char *str, sfFont *font)
{
    font = sfFont_createFromFile("font/font.ttf");
    if (!font)
        return EXIT_FAILURE;
    sfText *text;
    text = sfText_create();
    sfVector2f vec = {380, 233};
    sfText_setPosition(text, vec);
    sfText_setFont(text, font);
    sfText_setColor (text, sfWhite);
    sfText_setCharacterSize(text, 40);
    sfText_setString(text, str);
    sfRenderWindow_drawText(window, text, NULL);
    sfFont_destroy(font);
    return (0);
}

int draw_score1(sfRenderWindow *window, char *str, int y, sfFont *font)
{
    font = sfFont_createFromFile("font/font.ttf");
    if (!font)
        return EXIT_FAILURE;
    sfText *text;
    text = sfText_create();
    sfVector2f vec = {570, y};
    sfText_setPosition(text, vec);
    sfText_setFont(text, font);
    sfText_setColor (text, sfWhite);
    sfText_setCharacterSize(text, 60);
    sfText_setString(text, str);
    sfRenderWindow_drawText(window, text, NULL);
    sfFont_destroy(font);
    return (0);
}
