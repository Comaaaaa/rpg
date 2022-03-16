/*
** EPITECH PROJECT, 2021
** dd
** File description:
** d
*/

#include "my.h"

void goal(sfRenderWindow *main, sfSprite *sprite)
{
    int g = print_score("text/enemy.txt");

    if (g == 0 || g > 5)
        goal1(main, sprite, "pic/goal.png");
    if (g == 1)
        goal1(main, sprite, "pic/goal2.png");
    if (g == 2)
        goal1(main, sprite, "pic/goal3.png");
    if (g == 3)
        goal1(main, sprite, "pic/goal4.png");
    if (g == 4)
        goal1(main, sprite, "pic/goal5.png");
}

void goal1(sfRenderWindow *main, sfSprite *sprite, char  const *filepath)
{
    run_t window = {0};
    while (sfRenderWindow_isOpen(main)) {
        draw_sprite(main, filepath);
        sfRenderWindow_display(main);
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            goal_if(main, sprite);
            event_check(window.event, main);
        }
    }
}

int goal_if(sfRenderWindow *main, sfSprite *sprite)
{
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyX)) {
        sfRenderWindow_close(main);
        return EXIT_SUCCESS;
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyV)) {
        save_if(main, sprite);
    }
    return (0);
}

void pgoal1(sfRenderWindow *main, sfSprite *sprite, char  const *filepath)
{
    run_t window = {0};
    while (sfRenderWindow_isOpen(main)) {
        draw_sprite(main, filepath);
        sfRenderWindow_display(main);
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            pgoal_if(main, sprite);
            event_check(window.event, main);
        }
    }
}

int pgoal_if(sfRenderWindow *main, sfSprite *sprite)
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
