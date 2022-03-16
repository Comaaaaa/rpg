/*
** EPITECH PROJECT, 2021
** d
** File description:
** s
*/

#include "my.h"

void pgoal(sfRenderWindow *main, sfSprite *sprite)
{
    int g = print_score("penemy.txt");

    if (g == 0 || g > 5)
        pgoal1(main, sprite, "pic/goal.png");
    if (g == 1)
        pgoal1(main, sprite, "pic/goal2.png");
    if (g == 2)
        pgoal1(main, sprite, "pic/goal3.png");
    if (g == 3)
        pgoal1(main, sprite, "pic/goal4.png");
    if (g == 4)
        pgoal1(main, sprite, "pic/goal5.png");
}
