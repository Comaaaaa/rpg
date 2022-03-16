/*
** EPITECH PROJECT, 2021
** s
** File description:
** s
*/

#include "my.h"

int win_or_not(void)
{
    int win = print_score("text/enemy.txt");

    if (win == 1)
        return (1);
    if (win == 2)
        return (2);
    if (win == 3)
        return (3);
    if (win == 4)
        return (4);
    else {
        return (0);
    }
}

int pwin_or_not(void)
{
    int win = print_score("text/penemy.txt");

    if (win == 1)
        return (1);
    if (win == 2)
        return (2);
    if (win == 3)
        return (3);
    if (win == 4)
        return (4);
    else {
        return (0);
    }
}
