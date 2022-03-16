/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void txt_cloud(sfRenderWindow *main, sfSprite *sprite)
{
    add_int(1 , "text/cloud.txt");
    my_map4(main, sprite, 570, 0);
    sfRenderWindow_close(main);
}

void txt_money(sfRenderWindow *main, sfSprite *sprite)
{
    add_int(500 , "text/money.txt");
    add_int(-1 , "text/cloud.txt");
    shop_map(main, sprite);
}