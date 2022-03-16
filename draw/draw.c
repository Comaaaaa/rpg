/*
** EPITECH PROJECT, 2021
** sd
** File description:
** d
*/

#include "my.h"

void draw_sprite(sfRenderWindow *main, char  const *filepath)
{
    sfTexture *win;
    sfSprite *winsprite = sfSprite_create();

    win = sfTexture_createFromFile(filepath , NULL);
    sfSprite_setTexture(winsprite, win, sfTrue);
    sfRenderWindow_drawSprite(main, winsprite, NULL);
    sfSprite_destroy(winsprite);
    sfTexture_destroy(win);
}

void draw_sprite2(sfRenderWindow *main, char  const *filepath, int x, int y)
{
    sfTexture *exit;
    sfSprite *exitsprite = sfSprite_create();
    sfVector2f vec = {x, y};

    sfSprite_setPosition(exitsprite, vec);
    exit = sfTexture_createFromFile(filepath , NULL);
    sfSprite_setTexture(exitsprite, exit, sfTrue);
    sfRenderWindow_drawSprite(main, exitsprite, NULL);
    sfSprite_destroy(exitsprite);
    sfTexture_destroy(exit);
}

void draw_sprite3(sfRenderWindow *main, char  const *filepath, int x, int y)
{
    sfTexture *exit;
    sfSprite *exitsprite = sfSprite_create();
    sfVector2f vec = {x, y};

    sfSprite_setPosition(exitsprite, vec);
    exit = sfTexture_createFromFile(filepath , NULL);
    sfSprite_setTexture(exitsprite, exit, sfTrue);
    sfRenderWindow_drawSprite(main, exitsprite, NULL);
    sfSprite_destroy(exitsprite);
    sfTexture_destroy(exit);
}

int draw_money(sfRenderWindow *window, char *str, sfFont *font)
{
    font = sfFont_createFromFile("font/font.ttf");
    if (!font)
        return EXIT_FAILURE;
    sfText *text;
    text = sfText_create();
    sfVector2f vec = {1065, 35};
    sfText_setPosition(text, vec);
    sfText_setFont(text, font);
    sfText_setColor (text, sfWhite);
    sfText_setCharacterSize(text, 40);
    sfText_setString(text, str);
    sfRenderWindow_drawText(window, text, NULL);
    sfFont_destroy(font);
    return (0);
}
