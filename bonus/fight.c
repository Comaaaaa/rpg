/*
** EPITECH PROJECT, 2021
** dd
** File description:
** d
*/

#include "my.h"
#include <string.h>

int hp = 100;
int hp2 = 100;
int ki = 1000;
int ki2 = 1000;
int ft = 0;
int maps = 0;
int time = 0;
int t = 0;
int s = 0;
int check = 0;
int start = 0;
int wait = 0;
int key = 0;
int key2 = 0;
int d = 0;
int ssj = 0;
int ssj2 = 0;
int kick = 0;
int wait2 = 0;
int t1 = 0;
int t2 = 0;

void set_all_to_nul()
{
    hp = 100;
    hp2 = 100;
    ki = 1000;
    ki2 = 1000;
    ft = 0;
    maps = 0;
    time = 0;
    t = 0;
    s = 0;
    check = 0;
    start = 0;
    wait = 0;
    key = 0;
    key2 = 0;
    d = 0;
    ssj = 0;
    ssj2 = 0;
    kick = 0;
    wait2 = 0;
    t1 = 0;
    t2 = 0;
}

void my_timer(sfClock *clock)
{
    sfTime ftime;
    float second;
    ftime = sfClock_getElapsedTime(clock);
    second = ftime.microseconds / 1000000.0;
    s = (int)second;
    t = (int)second;
}

void anime_fighter(sfSprite *sprite, int x)
{
    if (time_return() == 0) {
        anime_fighteers(sprite);
    }
    else {
        anime_fighters(sprite, 100);
    }
}

void anime_fighteers(sfSprite *sprite)
{
    static sfIntRect rect2 = {0, 0, 876, 146};
    sfSprite_setTextureRect(sprite, rect2);
}

void anime_fighters(sfSprite *sprite, int x)
{
    static sfIntRect rect = {0, 0, 84, 146};
    static sfIntRect rect2 = {0, 146, 84, 146};
    static sfIntRect rect3 = {0, 292, 84, 146};
    static sfIntRect rect4 = {0, 438, 84, 146};
    static sfIntRect rect5 = {0, 584, 84, 146};
    static sfIntRect rect6 = {0, 727, 84, 146};
    static sfIntRect rect7 = {0, 876, 84, 146};
    static sfIntRect rect8 = {0, 1022, 84, 146};
    static sfIntRect rect9 = {0, 1168, 84, 146};

    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyZ) && ssj == 0 && t % 2 == 0) {
        sfSprite_setTextureRect(sprite, rect2);
    }

    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyZ) && ssj == 0 && t  % 2 != 0) {
        sfSprite_setTextureRect(sprite, rect5);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyQ) && ssj == 0)
        sfSprite_setTextureRect(sprite, rect3);
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyA) && ssj == 0 || x == 1)
        sfSprite_setTextureRect(sprite, rect);
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyD) && ssj == 0)
        sfSprite_setTextureRect(sprite, rect4);
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyS) && ssj == 0)
        sfSprite_setTextureRect(sprite, rect4);
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyZ) && ssj == 1)
        sfSprite_setTextureRect(sprite, rect7);
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyQ) && ssj == 1)
        sfSprite_setTextureRect(sprite, rect8);
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyA) && ssj == 1)
        sfSprite_setTextureRect(sprite, rect6);
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyD) && ssj == 1)
        sfSprite_setTextureRect(sprite, rect9);
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyS) && ssj == 1)
        sfSprite_setTextureRect(sprite, rect9);
}

void anime_fighters2(sfSprite *sprite, int x)
{
    static sfIntRect rect = {0, 0, 84, 146};
    static sfIntRect rect2 = {0, 146, 84, 146};
    static sfIntRect rect3 = {0, 292, 84, 146};
    static sfIntRect rect4 = {0, 438, 84, 146};
    static sfIntRect rect5 = {0, 584, 84, 146};
    static sfIntRect rect6 = {0, 727, 84, 146};
    static sfIntRect rect8 = {0, 1022, 84, 146};
    static sfIntRect rect9 = {0, 1168, 84, 146};
    static sfIntRect rect10 = {0, 1314, 84, 146};

    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyUp) && ssj2 == 0 && t  % 2 != 0)
        sfSprite_setTextureRect(sprite, rect2);
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyUp) && ssj2 == 0 && t  % 2 == 0)
        sfSprite_setTextureRect(sprite, rect5);
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyLeft) && ssj2 == 0)
        sfSprite_setTextureRect(sprite, rect3);
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyRShift) && ssj2 == 0 || x == 1)
        sfSprite_setTextureRect(sprite, rect);
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyRight) && ssj2 == 0)
        sfSprite_setTextureRect(sprite, rect4);
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyDown) && ssj2 == 0)
        sfSprite_setTextureRect(sprite, rect4);
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyUp) && ssj2 == 0 && t  % 2 == 0)
        sfSprite_setTextureRect(sprite, rect5);
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyUp) && ssj2 == 1  && t  % 2 != 0)
        sfSprite_setTextureRect(sprite, rect2);
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyLeft) && ssj2 == 1)
        sfSprite_setTextureRect(sprite, rect8);
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyRShift) && ssj2 == 1)
        sfSprite_setTextureRect(sprite, rect6);
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyRight) && ssj2 == 1)
        sfSprite_setTextureRect(sprite, rect9);
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyDown) && ssj2 == 1)
        sfSprite_setTextureRect(sprite, rect9);
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyUp) && ssj2 == 1)
        sfSprite_setTextureRect(sprite, rect10);
}

void times(sfRenderWindow *main)
{
    run_t window;
    while (sfRenderWindow_isOpen(main)) {
        sfRenderWindow_display(main);
        draw_sprite(main, "time/time.png");
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            if (sfTrue == sfKeyboard_isKeyPressed(sfKeyA)){
                time = 33;
                map(main);
            }
            if (sfTrue == sfKeyboard_isKeyPressed(sfKeyB)){
                time = 63;
                map(main);
            }
            if (sfTrue == sfKeyboard_isKeyPressed(sfKeyC)){
                time = 999999;
                map(main);
            }
            event_check(window.event, main);
        }
    }
}

void map(sfRenderWindow *main)
{
    run_t window;
    check = 100;
    while (sfRenderWindow_isOpen(main)) {
        sfRenderWindow_display(main);
        draw_sprite(main, "map/map.png");
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            if (sfTrue == sfKeyboard_isKeyPressed(sfKeyLeft)){
                maps = 1;
                fighter(main);
            }
            if (sfTrue == sfKeyboard_isKeyPressed(sfKeyRight)){
                maps = 2;
                fighter(main);
            }
            event_check(window.event, main);
        }
    }
}

void fighter(sfRenderWindow *main)
{
    run_t window;
    check = 100;
    while (sfRenderWindow_isOpen(main)) {
        sfRenderWindow_display(main);
        draw_sprite(main, "perso/fighter.png");
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            if (check == 100) {
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum1)){
                    fighter2(main);
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum2)){
                    fighter3(main);
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum3)){
                    fighter4(main);
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum4)){
                    fighter5(main);
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum5)){
                    fighter6(main);
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum6)){
                    fighter7(main);
                }
            }
            event_check(window.event, main);
        }
    }
}

void fighter2(sfRenderWindow *main)
{
    ft = 1;
    run_t window;
    while (sfRenderWindow_isOpen(main)) {
        sfRenderWindow_display(main);
        check--;
        draw_sprite(main, "perso/fighter.png");
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            if (check < 0) {
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum1) && ft == 1 && maps == 1){
                    fight(main, "perso/cell1.png", "perso/cell2.png","attack/attack5.png", "attack/attack4.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum2) && ft == 1 && maps == 1){
                    fight(main, "perso/cell1.png", "perso/freezer2.png","attack/attack5.png", "attack/attack2.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum3) && ft ==1 && maps == 1){
                fight(main, "perso/cell1.png", "perso/buu2.png","attack/attack5.png", "attack/attack2.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum4) && ft == 1 && maps == 1){
                    fight(main, "perso/cell1.png", "perso/picolo2.png","attack/attack5.png", "attack/attack4.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum5) && ft == 1 && maps == 1){
                    t2 = 1;
                    fight(main, "perso/cell1.png", "perso/goku2.png","attack/attack5.png", "attack/attack1.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum6) && ft == 1 && maps == 1){
                    t2 = 1;
                    fight(main, "perso/cell1.png", "perso/vegeta2.png","attack/attack5.png", "attack/attack1.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum1) && ft == 1 && maps == 2){
                    fight(main, "perso/cell1.png", "perso/cell2.png","attack/attack5.png", "attack/attack4.png", "map/map2.png");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum2) && ft == 1 && maps == 2){
                    fight(main, "perso/cell1.png", "perso/freezer2.png","attack/attack5.png", "attack/attack2.png", "map/map2.png");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum3) && ft ==1 && maps == 2){
                    fight(main, "perso/cell1.png", "perso/buu2.png","attack/attack5.png", "attack/attack2.png", "map/map2.png");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum4) && ft == 1 && maps == 2){
                    fight(main, "perso/cell1.png", "perso/picolo2.png","attack/attack5.png", "attack/attack4.png", "map/map2.png");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum5) && ft == 1 && maps == 2){
                    t2 = 1;
                    fight(main, "perso/cell1.png", "perso/goku2.png","attack/attack5.png", "attack/attack1.png", "map/map2.png");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum6) && ft == 1 && maps == 2){
                    t2 = 1;
                    fight(main, "perso/cell1.png", "perso/vegeta2.png","attack/attack5.png", "attack/attack1.png", "map/map2.png");
                }
            }
            event_check(window.event, main);
        }
    }
}

void fighter3(sfRenderWindow *main)
{
    ft = 2;
    run_t window;
    while (sfRenderWindow_isOpen(main)) {
        sfRenderWindow_display(main);
        check--;
        draw_sprite(main, "perso/fighter.png");
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            if (check < 0) {
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum1) && ft == 2 && maps == 1){
                    fight(main, "perso/freezer1.png", "perso/cell2.png","attack/attack3.png", "attack/attack4.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum2) && ft == 2 && maps == 1){
                    fight(main, "perso/freezer1.png", "perso/freezer2.png","attack/attack3.png", "attack/attack2.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum3) && ft == 2 && maps == 1){
                    fight(main, "perso/freezer1.png", "perso/buu2.png","attack/attack3.png", "attack/attack2.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum4) && ft == 2 && maps == 1){
                    fight(main, "perso/freezer1.png", "perso/picolo2.png","attack/attack3.png", "attack/attack4.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum5) && ft == 2 && maps == 1){
                    t2 = 1;
                    fight(main, "perso/freezer1.png", "perso/goku2.png","attack/attack3.png", "attack/attack1.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum6) && ft == 2 && maps == 1){
                    t2 = 1;
                    fight(main, "perso/freezer1.png", "perso/vegeta2.png","attack/attack3.png", "attack/attack1.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum1) && ft == 2 && maps == 2){
                    fight(main, "perso/freezer1.png", "perso/cell2.png","attack/attack3.png", "attack/attack4.png", "map/map2.png");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum2) && ft == 2 && maps == 2){
                    fight(main, "perso/freezer1.png", "perso/freezer2.png","attack/attack3.png", "attack/attack2.png", "map/map2.png");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum3) && ft == 2 && maps == 2){
                    fight(main, "perso/freezer1.png", "perso/buu2.png","attack/attack3.png", "attack/attack2.png", "map/map2.png");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum4) && ft == 2 && maps == 2){
                    fight(main, "perso/freezer1.png", "perso/picolo2.png","attack/attack3.png", "attack/attack4.png", "map/map2.png");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum5)&& ft == 2 && maps == 2){
                    t2 = 1;
                    fight(main, "perso/freezer1.png", "perso/goku2.png","attack/attack.png", "attack/attack1.png", "map/map2.png");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum6) && ft == 2 && maps == 2){
                    t2 = 1;
                    fight(main, "perso/freezer1.png", "perso/vegeta2.png","attack/attack.png", "attack/attack1.png", "map/map2.png");
                }
            }
            event_check(window.event, main);
        }
    }
}

void fighter4(sfRenderWindow *main)
{
    ft = 3;
    run_t window;
    while (sfRenderWindow_isOpen(main)) {
        sfRenderWindow_display(main);
        check--;
        draw_sprite(main, "perso/fighter.png");
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            if (check < 0) {
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum1) && ft == 3 && maps == 1){
                    fight(main, "perso/buu1.png", "perso/cell2.png","attack/attack3.png", "attack/attack4.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum2) && ft == 3 && maps == 1){
                    fight(main, "perso/buu1.png", "perso/freezer2.png","attack/attack3.png", "attack/attack2.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum3) && ft == 3 && maps == 1){
                    fight(main, "perso/buu1.png", "perso/buu2.png","attack/attack3.png", "attack/attack2.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum4) && ft == 3 && maps == 1){
                    fight(main, "perso/buu1.png", "perso/picolo2.png","attack/attack3.png", "attack/attack4.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum5) && ft == 3 && maps == 1){
                    t2 = 1;
                    fight(main, "perso/buu1.png", "perso/goku2.png","attack/attack3.png", "attack/attack1.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum6) && ft == 3 && maps == 1){
                    t2 = 1;
                    fight(main, "perso/buu1.png", "perso/vegeta2.png","attack/attack3.png", "attack/attack1.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum1) && ft == 3 && maps == 2){
                    fight(main, "perso/buu1.png", "perso/cell2.png","attack/attack3.png", "attack/attack4.png", "map/map2.png");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum2) && ft == 3 && maps == 2){
                    fight(main, "perso/buu1.png", "perso/freezer2.png","attack/attack3.png", "attack/attack2.png", "map/map2.png");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum3) && ft == 3 && maps == 2){
                    fight(main, "perso/buu1.png", "perso/buu2.png","attack/attack3.png", "attack/attack2.png", "map/map2.png");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum4) && ft == 3 && maps == 2){
                    fight(main, "perso/buu1.png", "perso/picolo2.png","attack/attack3.png", "attack/attack4.png", "map/map2.png");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum5)&& ft == 3 && maps == 2){
                    t2 = 1;
                    fight(main, "perso/buu1.png", "perso/goku2.png","attack/attack.png", "attack/attack1.png", "map/map2.png");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum6) && ft == 3 && maps == 2){
                    t2 = 1;
                    fight(main, "perso/buu1.png", "perso/vegeta2.png","attack/attack.png", "attack/attack1.png", "map/map2.png");
                }
            }
            event_check(window.event, main);
        }
    }
}

void fighter5(sfRenderWindow *main)
{
    ft = 4;
    run_t window;
    while (sfRenderWindow_isOpen(main)) {
        sfRenderWindow_display(main);
        check--;
        draw_sprite(main, "perso/fighter.png");
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            if (check < 0) {
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum1) && ft == 4 && maps == 1){
                    fight(main, "perso/picolo1.png", "perso/cell2.png","attack/attack5.png", "attack/attack4.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum2) && ft == 4 && maps == 1){
                    fight(main, "perso/picolo1.png", "perso/freezer2.png","attack/attack5.png", "attack/attack2.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum3) && ft == 4 && maps == 1){
                    fight(main, "perso/picolo1.png", "perso/buu2.png","attack/attack5.png", "attack/attack2.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum4) && ft == 4 && maps == 1){
                    fight(main, "perso/picolo1.png", "perso/picolo2.png","attack/attack5.png", "attack/attack4.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum5) && ft == 4 && maps == 1){
                    t2 = 1;
                    fight(main, "perso/picolo1.png", "perso/goku2.png","attack/attack5.png", "attack/attack1.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum6) && ft == 4 && maps == 1){
                    t2 = 1;
                    fight(main, "perso/picolo1.png", "perso/vegeta2.png","attack/attack5.png", "attack/attack1.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum1) && ft == 4 && maps == 2){
                    fight(main, "perso/picolo1.png", "perso/cell2.png","attack/attack5.png", "attack/attack4.png", "map/map2.png");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum2) && ft == 4 && maps == 2){
                    fight(main, "perso/picolo1.png", "perso/freezer2.png","attack/attack5.png", "attack/attack2.png", "map/map2.png");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum3) && ft == 4 && maps == 2){
                    fight(main, "perso/picolo1.png", "perso/buu2.png","attack/attack5.png", "attack/attack2.png", "map/map2.png");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum4) && ft == 4 && maps == 2){
                    fight(main, "perso/picolo1.png", "perso/picolo2.png","attack/attack5.png", "attack/attack4.png", "map/map2.png");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum5)&& ft == 4 && maps == 2){
                    t2 = 1;
                    fight(main, "perso/picolo1.png", "perso/goku2.png","attack/attack5.png", "attack/attack1.png", "map/map2.png");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum6) && ft == 4 && maps == 2){
                    t2 = 1;
                    fight(main, "perso/picolo1.png", "perso/vegeta2.png","attack/attack5.png", "attack/attack1.png", "map/map2.png");
                }
            }
            event_check(window.event, main);
        }
    }
}

void fighter6(sfRenderWindow *main)
{
    ft = 5;
    run_t window;
    while (sfRenderWindow_isOpen(main)) {
        sfRenderWindow_display(main);
        check--;
        draw_sprite(main, "perso/fighter.png");
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            if (check < 0) {
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum1) && ft == 5 && maps == 1){
                    t1 = 1;
                    fight(main, "perso/goku1.png", "perso/cell2.png","attack/attack.png", "attack/attack4.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum2) && ft == 5 && maps == 1){
                    t1 = 1;
                    fight(main, "perso/goku1.png", "perso/freezer2.png","attack/attack.png", "attack/attack2.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum3) && ft == 5 && maps == 1){
                    t1 = 1;
                    fight(main, "perso/goku1.png", "perso/buu2.png","attack/attack.png", "attack/attack2.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum4) && ft == 5 && maps == 1){
                    t1 = 1;
                    fight(main, "perso/goku1.png", "perso/picolo2.png","attack/attack.png", "attack/attack4.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum5) && ft == 5 && maps == 1){
                    t1 = 1;
                    t2 = 1;
                    fight(main, "perso/goku1.png", "perso/goku2.png","attack/attack.png", "attack/attack1.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum6) && ft == 5 && maps == 1){
                    t1 = 1;
                    t2 = 1;
                    fight(main, "perso/goku1.png", "perso/vegeta2.png","attack/attack.png", "attack/attack1.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum1) && ft == 5 && maps == 2){
                    fight(main, "perso/goku1.png", "perso/cell2.png","attack/attack.png", "attack/attack4.png", "map/map2.png");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum2) && ft == 5 && maps == 2){
                    fight(main, "perso/goku1.png", "perso/freezer2.png","attack/attack.png", "attack/attack2.png", "map/map2.png");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum3) && ft == 5 && maps == 2){
                    fight(main, "perso/goku1.png", "perso/buu2.png","attack/attack.png", "attack/attack2.png", "map/map2.png");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum4) && ft == 5 && maps == 2){
                    fight(main, "perso/goku1.png", "perso/picolo2.png","attack/attack.png", "attack/attack4.png", "map/map2.png");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum5)&& ft == 5 && maps == 2){
                    t1 = 1;
                    t2 = 1;
                    fight(main, "perso/goku1.png", "perso/goku2.png","attack/attack.png", "attack/attack1.png", "map/map2.png");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum6) && ft == 5 && maps == 2){
                    t1 = 1;
                    t2 = 1;
                    fight(main, "perso/goku1.png", "perso/vegeta2.png","attack/attack.png", "attack/attack1.png", "map/map2.png");
                }
            }
            event_check(window.event, main);
        }
    }
}
void fighter7(sfRenderWindow *main)
{
    ft = 6;
    run_t window;
    while (sfRenderWindow_isOpen(main)) {
        sfRenderWindow_display(main);
        check--;
        draw_sprite(main, "perso/fighter.png");
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            if (check < 0) {
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum1) && ft == 6 && maps == 1){
                    t1 = 1;
                    fight(main, "perso/vegeta1.png", "perso/cell2.png","attack/attack.png", "attack/attack4.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum2) && ft == 6 && maps == 1){
                    t1 = 1;
                    fight(main, "perso/vegeta1.png", "perso/freezer2.png","attack/attack.png", "attack/attack2.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum3) && ft == 6 && maps == 1){
                    t1 = 1;
                    fight(main, "perso/vegeta1.png", "perso/buu2.png","attack/attack.png", "attack/attack2.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum4) && ft == 6 && maps == 1){
                    t1 = 1;
                    fight(main, "perso/vegeta1.png", "perso/picolo2.png","attack/attack.png", "attack/attack4.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum5) && ft == 6 && maps == 1){
                    t1 = 1;
                    t2 = 1;
                    fight(main, "perso/vegeta1.png", "perso/goku2.png","attack/attack.png", "attack/attack1.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum6) && ft == 6 && maps == 1){
                    t1 = 1;
                    t2 = 1;
                    fight(main, "perso/vegeta1.png", "perso/vegeta2.png","attack/attack.png", "attack/attack1.png", "map/map1.jpg");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum1) && ft == 6 && maps == 2){
                    t1 = 1;
                    fight(main, "perso/vegeta1.png", "perso/cell2.png","attack/attack.png", "attack/attack4.png", "map/map2.png");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum2) && ft == 6 && maps == 2){
                    t1 = 1;
                    fight(main, "perso/vegeta1.png", "perso/freezer2.png","attack/attack.png", "attack/attack2.png", "map/map2.png");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum3) && ft == 6 && maps == 2){
                    t1 = 1;
                    fight(main, "perso/vegeta1.png", "perso/buu2.png","attack/attack.png", "attack/attack2.png", "map/map2.png");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum4) && ft == 6 && maps == 2){
                    t1 = 1;
                    fight(main, "perso/vegeta1.png", "perso/picolo2.png","attack/attack.png", "attack/attack4.png", "map/map2.png");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum5)&& ft == 6 && maps == 2){
                    t1 = 1;
                    t1 = 2;
                    fight(main, "perso/vegeta1.png", "perso/goku2.png","attack/attack.png", "attack/attack1.png", "map/map2.png");
                }
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum6) && ft == 6 && maps == 2){
                    t1 = 1;
                    t2 = 1;
                    fight(main, "perso/vegeta1.png", "perso/vegeta2.png","attack/attack.png", "attack/attack1.png", "map/map2.png");
                }
            }
            event_check(window.event, main);
        }
    }
}

char    *my_revstr(char *str)
{
    int  i;
    int  j;
    char c;

    i = 0;
    j = strlen(str) - 1;
    while (i < j)
    {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
        i = i + 1;
        j = j - 1;
    }
    return (str);
}

char *my_put_nbr_to_char(int n)
{
    char *nbr = malloc(sizeof(char) * 100000000 + 1);
    int i = 0;
    int reste = 0;

    while (n != 0)
    {
        reste = n % 10;
        if (reste < 10) {
            nbr[i] = reste + 48;
            i++;
        }
        else {
            nbr[i] = reste + 87;
            i++;
        }
        n = n / 10;
    }
    nbr[i] = '\0';
    return (my_revstr(nbr));
}

void fight(sfRenderWindow *main, char  const *fighter1, char  const *fighter2, char  const *attack1, char  const *attack2, char const *map)
{
    run_t window;
    sfFont *font = sfFont_createFromFile("font/font.ttf");
    sfText *text;
    text = sfText_create();
    sfVector2f vec = {600, 55};
    sfText_setPosition(text, vec);
    sfText_setFont(text, font);
    sfText_setColor (text, sfBlack);
    sfText_setCharacterSize(text, 70);
    sfText *text2;
    text2 = sfText_create();
    sfVector2f vec2 = {600, 355};
    sfText_setPosition(text2, vec2);
    sfText_setFont(text2, font);
    sfText_setColor (text2, sfColor_fromRGB(255, 165, 0));
    sfText_setCharacterSize(text2, 130);
    sfSprite *sprite;
    sfTexture *texture = sfTexture_createFromFile(fighter1, NULL);
    sfVector2f vecstart = {170, 530};
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, vecstart);
    sfSprite *sprite2;
    sfTexture *texture2 = sfTexture_createFromFile(fighter2, NULL);
    sfVector2f vecstart2 = {1000, 530};
    sprite2 = sfSprite_create();
    sfSprite_setTexture(sprite2, texture2, sfTrue);
    sfSprite_setPosition(sprite2, vecstart2);
    sfSprite *sprite3;
    sfTexture *texture3 = sfTexture_createFromFile(attack1, NULL);
    sfVector2f vecstart3 = {-9999, 480};
    sprite3 = sfSprite_create();
    sfSprite_setTexture(sprite3, texture3, sfTrue);
    sfSprite_setPosition(sprite3, vecstart3);
    sfSprite *sprite4;
    sfTexture *texture4 = sfTexture_createFromFile(attack2, NULL);
    sfVector2f vecstart4 = {9999, 480};
    sfVector2f pos2 = {940, 570};
    sprite4 = sfSprite_create();
    sfSprite_setTexture(sprite4, texture4, sfTrue);
    sfSprite_setPosition(sprite4, vecstart4);
    sfClock *clock = sfClock_create();
    sfVector2f move = {2, 0};
    sfVector2f move2 = {-2, 0};
    sfVector2f pos = {230, 570};
//    sfVector2f pos2 = {940, 570};
    sfVector2f reset = {-999, 570};
    sfVector2f reset2 = {9999999, 570};
    while (sfRenderWindow_isOpen(main)) {
        start++;
        kick ++;
        sfRenderWindow_display(main);
        draw_sprite(main, map);
        sfText_setString(text, my_put_nbr_to_char(time - t));
        sfText_setString(text2, my_put_nbr_to_char(3 - s));
        anime_fighter(sprite, 2);
        anime_fighters2(sprite2, 2);
        if (3 - s > 0) {
            sfRenderWindow_drawText(main, text2, NULL);
            anime_fighters(sprite, 1);
            anime_fighters2(sprite2, 1);
        }
        if (s > 3) {
            sfRenderWindow_drawSprite(main, sprite, NULL);
            sfRenderWindow_drawSprite(main, sprite2, NULL);
            if (t > 0 && t < 121) {
                sfRenderWindow_drawText(main, text, NULL);
            }
            set_hp(main);
            set_hp2(main);
            set_ki(main);
            set_ki2(main);
            my_clock(clock);
        }
            // FIGHTER 1
            sfVector2f  psx = sfSprite_getPosition(sprite3);
            if (psx.x < 1050)
                sfRenderWindow_drawSprite(main, sprite3, NULL);
            if (sfTrue == sfKeyboard_isKeyPressed(sfKeyD) && ki > 333 && wait != 1) {
                key = 1;
                anime_attack(sprite3, 1);
                ki = ki - 33;
                sfSprite_setPosition(sprite3, pos);
                psx.x = psx.x + 0.1;
            }
            if (sfTrue == sfKeyboard_isKeyPressed(sfKeyE) && ki > 1999 && t1 == 1 && wait != 1) {
                ki = 0;
                ssj = 1;
            }
            if (sfTrue == sfKeyboard_isKeyPressed(sfKeyZ)) {
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyA)) {
                    hp = hp - 4;
                }
            }
            if (sfTrue == sfKeyboard_isKeyPressed(sfKeyS) && (ki > 999 && wait != 1) || (ki == 0 && wait != 1)) {
            key = 2;
            anime_attack(sprite3, 2);
            ki = 0;
            sfSprite_setPosition(sprite3, pos);
            psx.x = psx.x + 0.1;
            }
            if (psx.x > 230)
                sfSprite_move(sprite3, move);
            if (psx.x > 980 && key == 1 && ssj == 0) {
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyLeft)) {
                    hp = hp - 10;
                    sfSprite_setPosition(sprite3, reset);
                }
                else {
                    hp = hp - 20;
                    sfSprite_setPosition(sprite3, reset);
                }
            }
            if (psx.x > 981 && key == 2 && ssj == 0) {
                if (sfTrue == sfKeyboard_isKeyPressed(sfKeyLeft)) {
                    hp = hp - 20;
                    sfSprite_setPosition(sprite3, reset);
                }
                else {
                    hp = hp - 40;
                    sfSprite_setPosition(sprite3, reset);
                }
            }
         if (psx.x > 980 && key == 1 && ssj == 1) {
            hp = hp - 30;
            sfSprite_setPosition(sprite3, reset);
        }
        if (psx.x > 980 && key == 2 && ssj == 1) {
            hp = hp - 50;
            ki = 1;
            sfSprite_setPosition(sprite3, reset);
        }
        if (sfTrue == sfKeyboard_isKeyPressed(sfKeyA))
            ki = ki + 1;
        if (psx.x > 231 && psx.x < 979)
            wait = 1;
        else {
            wait = 0;
        }
        // FIGHTER 2
        sfVector2f  psx2 = sfSprite_getPosition(sprite4);
        if (psx2.x > 225)
            sfRenderWindow_drawSprite(main, sprite4, NULL);
        if (sfTrue == sfKeyboard_isKeyPressed(sfKeyRight) && ki2 > 333 && wait2 != 1) {
            key2 = 1;
            anime_attack(sprite4, 1);
            ki2 = ki2 - 49;
            sfSprite_setPosition(sprite4, pos2);
            psx2.x = psx2.x - 0.1;
        }
        if (sfTrue == sfKeyboard_isKeyPressed(sfKeyEnd) && ki2 > 1999 && t2 == 1 && wait2 != 1) {
            ki2 = 0;
            ssj2 = 1;
        }
        if (sfTrue == sfKeyboard_isKeyPressed(sfKeyUp)) {
            if (sfTrue == sfKeyboard_isKeyPressed(sfKeyRShift)){
                hp2 = hp2 - 2;
            }
        }
        if (sfTrue == sfKeyboard_isKeyPressed(sfKeyDown) && (ki2 > 999 && wait != 1) || (ki2 == 0 && wait2 != 1)) {
            key2 = 2;
            anime_attack(sprite4, 2);

            ki2 = 0;
            sfSprite_setPosition(sprite4, pos2);
            psx2.x = psx2.x - 0.1;
        }
        if (psx2.x < 940)
            sfSprite_move(sprite4, move2);
        if (psx2.x < 224 && key2 == 1 && ssj == 0) {
            if (sfTrue == sfKeyboard_isKeyPressed(sfKeyQ)) {
                hp2 = hp2 - 10;
                sfSprite_setPosition(sprite4, reset2);
            }
            else {
                hp2 = hp2 - 20;
                sfSprite_setPosition(sprite4, reset2);
            }
        }
        if (psx2.x < 230 && key2 == 2 && ssj == 0) {
            if (sfTrue == sfKeyboard_isKeyPressed(sfKeyQ)) {
                hp2 = hp2 - 20;
                sfSprite_setPosition(sprite4, reset2);
            }
            else {
                hp2 = hp2 - 40;
                sfSprite_setPosition(sprite4, reset2);
            }
        }
        if (sfTrue == sfKeyboard_isKeyPressed(sfKeyRShift))
            ki2 = ki2 + 1;
        if (psx2.x > 231 && psx2.x < 979)
            wait2 = 1;
        else {
            wait2 = 0;
        }
        if (time - t < 1 && hp2 < hp) {
            sfRenderWindow_close(main);
            end_result();
        }
        if (time - t < 1 && hp2 > hp) {
            sfRenderWindow_close(main);
            end_result2();
        }
        if (hp2 < 1) {
            sfRenderWindow_close(main);
            end_result();
        }
        if (hp < 1) {
            sfRenderWindow_close(main);
            end_result2();
        }
        my_timer(clock);
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            event_check(window.event, main);
        }
    }
}

char *print_name(char const *filepath)
{
    struct stat size;
    stat(filepath, &size);
    int fd = open(filepath, O_RDONLY);
    char *buffer = malloc(sizeof(char) *(size.st_size + 1));
    read(fd, buffer, size.st_size);
    buffer[size.st_size] = '\0';
    return (buffer);
}

void end_result()
{
    run_t window = {0};
    sfFont *font = sfFont_createFromFile("font/font.ttf");
    sfText *text;
    text = sfText_create();
    sfVector2f vec = {600, 55};
    sfText_setPosition(text, vec);
    sfText_setFont(text, font);
    sfText_setColor (text, sfWhite);
    sfText_setCharacterSize(text, 40);
    sfText_setString(text, print_name("name1.txt"));
    window.video_mode.width = 1280;
    window.video_mode.height = 720;
    window.video_mode.bitsPerPixel = 32;
    window.main = sfRenderWindow_create(window.video_mode,
                                        "My RPG", sfDefaultStyle, NULL);
    while (sfRenderWindow_isOpen(window.main)) {
        sfRenderWindow_display(window.main);
        draw_sprite(window.main, "map/end.jpg");
        sfRenderWindow_drawText(window.main, text, NULL);
        while (sfRenderWindow_pollEvent(window.main, &window.event)) {
            if (sfTrue == sfKeyboard_isKeyPressed(sfKeyQ)) {
                sfRenderWindow_close(window.main);
            }
            if (sfTrue == sfKeyboard_isKeyPressed(sfKeyP)) {
                set_all_to_nul();
                sfRenderWindow_close(window.main);
                draw_menu();
            }
            event_check(window.event, window.main);
        }
    }
}

void end_result2()
{
    run_t window = {0};
    sfFont *font = sfFont_createFromFile("font/font.ttf");
    sfText *text;
    text = sfText_create();
    sfVector2f vec = {600, 55};
    sfText_setPosition(text, vec);
    sfText_setFont(text, font);
    sfText_setColor (text, sfWhite);
    sfText_setCharacterSize(text, 40);
    sfText_setString(text, print_name("name2.txt"));
    window.video_mode.width = 1280;
    window.video_mode.height = 720;
    window.video_mode.bitsPerPixel = 32;
    window.main = sfRenderWindow_create(window.video_mode,
                                        "My RPG", sfDefaultStyle, NULL);
    while (sfRenderWindow_isOpen(window.main)) {
        sfRenderWindow_display(window.main);
        draw_sprite(window.main, "map/end.jpg");
        sfRenderWindow_drawText(window.main, text, NULL);
        while (sfRenderWindow_pollEvent(window.main, &window.event)) {
            if (sfTrue == sfKeyboard_isKeyPressed(sfKeyQ)) {
                sfRenderWindow_close(window.main);
            }
            if (sfTrue == sfKeyboard_isKeyPressed(sfKeyP)) {
                set_all_to_nul();
                sfRenderWindow_close(window.main);
                draw_menu();
            }
            event_check(window.event, window.main);
        }
    }
}

void anime_attack(sfSprite *sprite, int x)
{
    static sfIntRect rect = {0, 0, 74, 66};
    static sfIntRect rect2 = {0, 66, 74, 66};
    if (x == 1)
        sfSprite_setTextureRect(sprite, rect);
    if (x == 2)
        sfSprite_setTextureRect(sprite, rect2);
}

void set_hp(sfRenderWindow *main)
{
    if (hp2 >= 100)
        draw_sprite3(main, "stat/h11.png", -60, 50);
    if (hp2 < 100 && hp2 > 66)
        draw_sprite3(main, "stat/h22.png", -60, 50);
    if (hp2 <= 66 && hp2 > 33)
        draw_sprite3(main, "stat/h33.png", -60, 50);
    if (hp2 <= 33 && hp2 > 10)
        draw_sprite3(main, "stat/h44.png", -60, 50);
    if (hp2 <= 10 && hp2 > 0)
        draw_sprite3(main, "stat/h55.png", -60, 50);
}

void set_hp2(sfRenderWindow *main)
{
    if (hp >= 100)
        draw_sprite3(main, "stat/h1.png", 840, 50);
    if (hp < 100 && hp > 66)
        draw_sprite3(main, "stat/h2.png", 840, 50);
    if (hp <= 66 && hp > 33)
        draw_sprite3(main, "stat/h3.png", 840, 50);
    if (hp <= 33 && hp > 10)
        draw_sprite3(main, "stat/h4.png", 840, 50);
    if (hp <= 10 && hp > 0)
        draw_sprite3(main, "stat/h5.png", 840, 50);
}

void set_ki(sfRenderWindow *main)
{
    if (ki > 2000)
        ki = 2000;
    if (ki == 2000)
        draw_sprite3(main, "stat/e0.png", -3, 100);
    if (ki < 2000)
        draw_sprite3(main, "stat/e1.png", -3, 100);
    if (ki < 1000 && ki > 660)
        draw_sprite3(main, "stat/e2.png", -3, 100);
    if (ki <= 660 && ki > 330)
        draw_sprite3(main, "stat/e3.png", -3, 100);
    if (ki <= 330 && ki > 0)
        draw_sprite3(main, "stat/e4.png", -3, 100);
    if (ki <= 0) {
        draw_sprite3(main, "stat/e5.png", -3, 100);
    }
}

void set_ki2(sfRenderWindow *main)
{
    if (ki2 > 2000)
        ki2 = 2000;
    if (ki2 == 2000)
        draw_sprite3(main, "stat/e00.png", 917, 100);
    if (ki2 < 2000)
        draw_sprite3(main, "stat/e11.png", 917, 100);
    if (ki2 < 1000 && ki2 > 660)
        draw_sprite3(main, "stat/e22.png", 917, 100);
    if (ki2 <= 660 && ki2 > 330)
        draw_sprite3(main, "stat/e33.png", 917, 100);
    if (ki2 <= 330 && ki2 > 0)
        draw_sprite3(main, "stat/e44.png", 917, 100);
    if (ki2 <= 0) {
        draw_sprite3(main, "stat/e55.png", 917, 100);
    }
}
