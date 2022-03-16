/*
** EPITECH PROJECT, 2021
** sd
** File description:
** d
*/

#include "my.h"

void check_enemy(void)
{
    int win1 = print_score("text/buu.txt");
    int win2 = print_score("text/cell.txt");
    int win3 = print_score("text/freezer.txt");
    int win = print_score("text/enemy.txt");
    if (win1 == 0) {
        add_int(-1, "text/enemy.txt");
        add_int(-1, "text/buu.txt");
    }
    if (win2 == 0 && win == 1) {
        add_int(-1, "text/enemy.txt");
        add_int(-1, "text/cell.txt");
    }
    if (win3 == 0 && win == 2) {
        add_int(-1, "text/enemy.txt");
        add_int(-1, "text/freezer.txt");
    }
}

void check_enemy1(void)
{
    int win1 = print_score("text/vegeta.txt");
    int win = print_score("text/enemy.txt");
    if (win1 == 0 && win == 3) {
        add_int( -1, "text/enemy.txt");
        add_int(-1, "text/vegeta.txt");
    }
}

void check_enemy4(void)
{
    int win1 = print_score("text/vegeta2.txt");

    if (win1 == 0) {
        add_int(-1, "text/penemy.txt");
        add_int(-1, "text/vegeta2.txt");
    }
}

void check_enemy2(void)
{
    int win1 = print_score("text/buu2.txt");
    int win2 = print_score("text/cell2.txt");
    int win3 = print_score("text/freezer2.txt");
    int win = print_score("text/penemy.txt");
    if (win1 == 0) {
        add_int(-1, "text/penemy.txt");
        add_int(-1, "text/buu2.txt");
    }
    if (win2 == 0 && win == 1) {
        add_int(-1, "text/penemy.txt");
        add_int(-1, "text/cell2.txt");
    }
    if (win3 == 0 && win == 2) {
        add_int(-1, "text/penemy.txt");
        add_int(-1, "text/freezer2.txt");
    }
}
