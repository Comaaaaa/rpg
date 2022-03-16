/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void check_save4(sfRenderWindow *main, sfSprite *sprite)
{
    int map = print_score("text/save2.txt");
    if (map == 7)
        pmy_map7(main, sprite, print_posx2(), print_posy2());
    if (map == 8)
        pmy_map8(main, sprite, print_posx2(), print_posy2());
    if (map == 9)
        pmy_map9(main, sprite, print_posx2(), print_posy2());
}

void save_if(sfRenderWindow *main, sfSprite *sprite)
{
    int map = print_score("text/save.txt");
    if (map < 7)
        check_save(main, sprite);
    if (map > 6)
        check_save3(main, sprite);
    if (map > 9)
        draw_menu();
}

void check_save(sfRenderWindow *main, sfSprite *sprite)
{
    int map = print_score("text/save.txt");
    if (map == 0)
        my_map0(main, sprite, print_posx(), print_posy());
    if (map == 1)
        my_map1(main, sprite, print_posx(), print_posy());
    if (map == 2)
        my_map2(main, sprite, print_posx(), print_posy());
    if (map == 3)
        my_map3(main, sprite, print_posx(), print_posy());
    if (map == 4)
        my_map4(main, sprite, print_posx(), print_posy());
    if (map == 5)
        my_map5(main, sprite, print_posx(), print_posy());
    if (map == 6)
        my_map6(main, sprite, print_posx(), print_posy());
}
