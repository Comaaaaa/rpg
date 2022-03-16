/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

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
        draw_sprite(window.main, "pic/menu.jpg");
        menu_mouse_func1(window);
        menu_mouse_func2(window);
        menu_mouse_func3(window);
        while (sfRenderWindow_pollEvent(window.main, &window.event)) {
            menu_mouse_func(window);
            event_check(window.event, window.main);
        }
    }
}

void menu_mouse_func(run_t window)
{
    sfMouseButtonEvent mouse = window.event.mouseButton;
    if (window.event.type == sfEvtMouseButtonPressed && mouse.x < 140 &&
        mouse.x > 65 && mouse.y < 132 && mouse.y > 30) {
        sfRenderWindow_close(window.main);
        map_score();
    }
}

void menu_mouse_func1(run_t window)
{
    sfMouseMoveEvent mouse = window.event.mouseMove;
    if (mouse.x < 689 && mouse.x > 587 && mouse.y < 283 && mouse.y > 247) {
        draw_sprite(window.main, "pic/play1.png");
    }
    if (mouse.x < 683 && mouse.x > 587 && mouse.y < 679 && mouse.y > 632) {
        draw_sprite(window.main, "pic/quit1.png");
    }
    if (mouse.x < 738 && mouse.x > 539 && mouse.y < 535 && mouse.y > 491) {
        draw_sprite(window.main, "pic/settings1.png");
    }
    if (mouse.x < 691 && mouse.x > 530 && mouse.y < 412 && mouse.y > 370) {
        draw_sprite(window.main, "pic/rules1.png");
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyP)) {
        sfRenderWindow_close(window.main);
        draw_p();
    }
}

void menu_mouse_func2(run_t window)
{
    sfMouseButtonEvent mouse = window.event.mouseButton;
    if (mouse.x < 689 && mouse.x > 587 && mouse.y < 283 && mouse.y > 247) {
        draw_sprite(window.main, "pic/play2.png");
        if (window.event.type == sfEvtMouseButtonReleased) {
            sfRenderWindow_close(window.main);
            choose_game(window.main);
        }
    }
    if (mouse.x < 683 && mouse.x > 587 && mouse.y < 679 && mouse.y > 632) {
        draw_sprite(window.main, "pic/quit2.png");
        if (window.event.type == sfEvtMouseButtonReleased) {
            sfRenderWindow_close(window.main);
        }
    }
}

void menu_mouse_func3(run_t window)
{
    sfMouseButtonEvent mouse = window.event.mouseButton;
    if (mouse.x < 738 && mouse.x > 539 && mouse.y < 535 && mouse.y > 491) {
        draw_sprite(window.main, "pic/settings2.png");
        if (window.event.type == sfEvtMouseButtonReleased) {
            settings(window.main);
        }
    }
    if (mouse.x < 691 && mouse.x > 530 && mouse.y < 412 && mouse.y > 370) {
        draw_sprite(window.main, "pic/rules2.png");
        if (window.event.type == sfEvtMouseButtonReleased) {
            htp(window.main);
        }
    }
}
