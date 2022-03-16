/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"
#include <string.h>

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

void draw_menu(void)
{
    run_t window;
    window.video_mode.width = 1280;
    window.video_mode.height = 720;
    window.video_mode.bitsPerPixel = 32;
    window.main = sfRenderWindow_create(window.video_mode,
                                        "My RPG", sfDefaultStyle, NULL);
    while (sfRenderWindow_isOpen(window.main)) {
        sfRenderWindow_display(window.main);
        draw_sprite(window.main, "map/menu.jpg");
        menu_mouse_func(window);
        while (sfRenderWindow_pollEvent(window.main, &window.event)) {
            event_check(window.event, window.main);
        }
    }
}

void menu_mouse_func(run_t window)
{
    sfMouseButtonEvent mouse = window.event.mouseButton;
    sfMouseMoveEvent mouse2 = window.event.mouseMove;
    if (window.event.type == sfEvtMouseButtonPressed && mouse.x < 1232 &&
        mouse.x > 1115 && mouse.y < 141 && mouse.y > 38) {
        times(window.main);
        sfRenderWindow_close(window.main);
    }
    if (mouse.x < 691 && mouse.x > 530 && mouse.y < 412 && mouse.y > 370) {
        draw_sprite(window.main, "map/rules2.png");
        if (window.event.type == sfEvtMouseButtonReleased) {
            htp(window.main);
        }
    }
    if (mouse2.x < 691 && mouse2.x > 530 && mouse2.y < 412 && mouse2.y > 370) {
        draw_sprite(window.main, "map/rules1.png");
    }
    if (mouse2.x < 683 && mouse2.x > 587 && mouse2.y < 679 && mouse2.y > 632) {
        draw_sprite(window.main, "map/quit1.png");
    }
    if (mouse.x < 683 && mouse.x > 587 && mouse.y < 679 && mouse.y > 632) {
        draw_sprite(window.main, "map/quit2.png");
        if (window.event.type == sfEvtMouseButtonReleased) {
            sfRenderWindow_close(window.main);
        }
    }
}

void htp(sfRenderWindow *main)
{
    run_t window = {0};
    while (sfRenderWindow_isOpen(main)) {
        sfRenderWindow_display(main);
        draw_sprite(main, "map/htp.png");
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            if (sfTrue == sfKeyboard_isKeyPressed(sfKeyX)) {
                sfRenderWindow_close(main);
                draw_menu();
            }
            event_check(window.event, main);
        }
    }
}

int event_check(sfEvent event, sfRenderWindow *window)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(window);
    return EXIT_SUCCESS;
}
