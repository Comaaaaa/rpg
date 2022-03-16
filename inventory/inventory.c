/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void inventory(sfRenderWindow *main, sfSprite *sprite)
{
    run_t window = {0};
    sfFont *font = sfFont_createFromFile("font/font.ttf");
    int senzu = print_score("text/senzu.txt");
    int db = print_score("text/db.txt");
    int cloud = print_score("text/cloud.txt");
    int sword = print_score("text/sword.txt");
    while (sfRenderWindow_isOpen(main)) {
        sfRenderWindow_display(main);
        draw_sprite(main, "pic/inv.png");
        draw_inv(main, my_put_nbr_to_char(db), 620, font);
        draw_inv(main, my_put_nbr_to_char(senzu), 510, font);
        draw_inv(main, my_put_nbr_to_char(cloud), 710, font);
        draw_inv(main, my_put_nbr_to_char(sword), 820, font);
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            goal_if(main, sprite);
            make_db(main);
            event_check(window.event, main);
        }
    }
}

void inventory2(sfRenderWindow *main, sfSprite *sprite)
{
    run_t window = {0};
    sfFont *font = sfFont_createFromFile("font/font.ttf");
    int senzu = print_score("text/senzu2.txt");
    int db = print_score("text/db2.txt");
    int cloud = print_score("text/cloud2.txt");
    int sword = print_score("text/sword2.txt");
    while (sfRenderWindow_isOpen(main)) {
        sfRenderWindow_display(main);
        draw_sprite(main, "pic/inv.png");
        draw_inv(main, my_put_nbr_to_char(db), 620, font);
        draw_inv(main, my_put_nbr_to_char(senzu), 510, font);
        draw_inv(main, my_put_nbr_to_char(cloud), 710, font);
        draw_inv(main, my_put_nbr_to_char(sword), 820, font);
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            goal_if2(main, sprite);
            event_check(window.event, main);
        }
    }
}

void go_inv(sfRenderWindow *main, sfSprite *sprite)
{
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyI)) {
        inventory(main, sprite);
        sfRenderWindow_close(main);
    }
}

void go_inv2(sfRenderWindow *main, sfSprite *sprite)
{
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyI)) {
        inventory2(main, sprite);
        sfRenderWindow_close(main);
    }
}

int goal_if2(sfRenderWindow *main, sfSprite *sprite)
{
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyX)) {
        sfRenderWindow_close(main);
        return EXIT_SUCCESS;
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyV)) {
        save_if2(main, sprite);
    }
    return (0);
}
