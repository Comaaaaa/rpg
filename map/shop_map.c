/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void shop_map(sfRenderWindow *main, sfSprite *sprite)
{
    run_t window = {0};
    sfFont *font = sfFont_createFromFile("font/font.ttf");
    int money = print_score("text/money.txt");
    while (sfRenderWindow_isOpen(main)) {
        sfRenderWindow_display(main);
        draw_sprite(main, "pic/shop.jpg");
        draw_money(main, my_put_nbr_to_char(money), font);
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            shop_col(main, sprite);
            shop_col2(main, sprite);
            shop_col3(main, sprite);
            if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum7) && money >= 2500) {
                add_int(1250 , "text/money.txt");
                add_int(-1 , "text/sword.txt");
                shop_map(main, sprite);
            }
            event_check(window.event, main);
        }
    }
    sfFont_destroy(font);
}

void shop_col(sfRenderWindow *main, sfSprite *sprite)
{
    int money = print_score("text/money.txt");
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyE)) {
        my_map3(main, sprite, 700, 470);
        sfRenderWindow_close(main);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum2) && money >= 150
        && return_music() == 1) {
        add_int(750 , "text/money.txt");
        add_int(-1 , "text/ssj.txt");
        play_sound("music/ssj.wav");
        shop_map(main, sprite);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum2) && money >= 150
        && return_music() == 0) {
        add_int(750 , "text/money.txt");
        add_int(-1 , "text/ssj.txt");
        shop_map(main, sprite);
    }
}

void shop_col2(sfRenderWindow *main, sfSprite *sprite)
{
    int money = print_score("text/money.txt");
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum3) && money >= 400) {
        add_int(200 , "text/money.txt");
        add_int(-1 , "text/db.txt");
        shop_map(main, sprite);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum4) && money >= 750) {
        add_int(375 , "text/money.txt");
        add_int(-1 , "text/attack.txt");
        shop_map(main, sprite);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum5) && money >= 150) {
        add_int(50 , "text/money.txt");
        add_int(-1 , "text/senzu.txt");
        shop_map(main, sprite);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum6) && money >= 1000) {
        txt_money(main, sprite);
    }
}

void shop_col3(sfRenderWindow *main, sfSprite *sprite)
{
    int money = print_score("text/money.txt");

    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum1) && money >= 300
        && return_music() == 1) {
        add_int(150 , "text/money.txt");
        add_int(-1 , "text/lifes.txt");
        play_sound("music/life.wav");
        shop_map(main, sprite);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum1) && money >= 300
        && return_music() == 0) {
        add_int(150 , "text/money.txt");
        add_int(-1 , "text/lifes.txt");
        shop_map(main, sprite);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyX))
        sfRenderWindow_close(main);
}
