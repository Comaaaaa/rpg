/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void check_save3(sfRenderWindow *main, sfSprite *sprite)
{
    int map = print_score("text/save.txt");
    if (map == 7)
        my_map7(main, sprite, print_posx(), print_posy());
    if (map == 8)
        my_map8(main, sprite, print_posx(), print_posy());
    if (map == 9)
        my_map9(main, sprite, print_posx(), print_posy());
}

void  check_save2(sfRenderWindow *main, sfSprite *sprite)
{
    int map = print_score("text/save2.txt");
    if (map == 0)
        pmy_map0(main, sprite, print_posx2(), print_posy2());
    if (map == 1)
        pmy_map1(main, sprite, print_posx2(), print_posy2());
    if (map == 2)
        pmy_map2(main, sprite, print_posx2(), print_posy2());
    if (map == 3)
        pmy_map3(main, sprite, print_posx2(), print_posy2());
    if (map == 4)
        pmy_map4(main, sprite, print_posx2(), print_posy2());
    if (map == 5)
        pmy_map5(main, sprite, print_posx2(), print_posy2());
    if (map == 6)
        pmy_map6(main, sprite, print_posx2(), print_posy2());
}

void save(void)
{
    run_t window = {0};
    sfSprite *sprite = sfSprite_create();;
    int time = 0;
    window.video_mode.width = 1280;
    window.video_mode.height = 720;
    window.video_mode.bitsPerPixel = 32;
    window.main = sfRenderWindow_create(window.video_mode,
                                        "My RPG", sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(window.main, return_fps());
    while (sfRenderWindow_isOpen(window.main)) {
        time++;
        draw_sprite(window.main, "pic/save1.jpg");
        sfRenderWindow_display(window.main);
        if (time > 300) {
            save_if(window.main, sprite);
        }
        while (sfRenderWindow_pollEvent(window.main, &window.event)) {
            event_check(window.event, window.main);
        }
    }
}

void save2(void)
{
    run_t window = {0};
    sfSprite *sprite;
    int time = 0;
    window.video_mode.width = 1280;
    window.video_mode.height = 720;
    window.video_mode.bitsPerPixel = 32;
    window.main = sfRenderWindow_create(window.video_mode,
                                        "My RPG", sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(window.main, return_fps());
    sprite = sfSprite_create();
    while (sfRenderWindow_isOpen(window.main)) {
        time++;
        draw_sprite(window.main, "pic/save2.jpg");
        sfRenderWindow_display(window.main);
        if (time > 300)
            save_if2(window.main, sprite);
        while (sfRenderWindow_pollEvent(window.main, &window.event)) {
            event_check(window.event, window.main);
        }
    }
}

void save_if2(sfRenderWindow *main, sfSprite *sprite)
{
    int map = print_score("text/save2.txt");
    if (map < 7)
        check_save2(main, sprite);
    if (map > 6)
        check_save4(main, sprite);
    if (map > 9)
        draw_menu();
}
