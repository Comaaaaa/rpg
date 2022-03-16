/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void pshop_map(sfRenderWindow *main, sfSprite *sprite)
{
    run_t window = {0};
    sfFont *font = sfFont_createFromFile("font/font.ttf");
    int money = print_score("text/money2.txt");
    while (sfRenderWindow_isOpen(main)) {
        sfRenderWindow_display(main);
        draw_sprite(main, "pic/shop2.jpg");
        draw_money(main, my_put_nbr_to_char(money), font);
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            shop_col33(main, sprite);
            event_check(window.event, main);
        }
    }
    sfFont_destroy(font);
}

int shop_col33(sfRenderWindow *main, sfSprite *sprite)
{
    int money = print_score("text/money2.txt");
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyX)) {
        sfRenderWindow_close(main);
        return EXIT_SUCCESS;
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyE)) {
        my_map3(main, sprite, 700, 470);
        sfRenderWindow_close(main);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum1) && money >= 300) {
        add_int(150 , "text/money2.txt");
        add_int(-1 , "text/lifes.txt");
        shop_map(main, sprite);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum2) && money >= 150) {
        add_int(50 , "text/money2.txt");
        add_int(1 , "text/senzu2.txt");
        shop_map(main, sprite);
    }
    return (0);
}
