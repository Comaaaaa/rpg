/*
** EPITECH PROJECT, 2020
** d
** File description:
** d
*/

#ifndef MY_H
#define MY_H

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Window/Keyboard.h>
#include <SFML/Window/Mouse.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>

typedef struct run
{
    sfRenderWindow *main;
    sfRenderWindow *window;
    sfRenderWindow *loose;
    sfVideoMode video_mode;
    sfEvent        event;
    sfMusic *music;
    sfMusic *sound;
    sfMusic *sound2;
    sfMouseButtonEvent mouse;
    sfMouseMoveEvent movve;
    sfTexture *menu;
    sfSprite *menusprite;
    sfTexture *map;
    sfSprite *mapsprite;
    int hp;
    sfVector2f pos1;
    sfVector2f pos2;
    sfVector2f pos3;
    sfVector2f pos4;
    sfVector2f pos5;
    sfVector2f pos6;
    sfVector2f pos7;
    sfVector2f pos8;
    sfVector2f pos9;
    sfVector2f pos10;
    int pos;
    int mon;
}run_t;

void my_putstr(char *str);
void name1(void);
void name2(void);
void draw_sprite(sfRenderWindow *main, char  const *filepath);
void draw_sprite3(sfRenderWindow *main, char  const *filepath, int x, int y);
void draw_menu(void);
void menu_mouse_func(run_t window);
void anime_fighter(sfSprite *sprite, int x);
void anime_fighteers(sfSprite *sprite);
void anime_fighters(sfSprite *sprite, int x);
void fighter(sfRenderWindow *main);
void set_hp(sfRenderWindow *main);
void set_hp2(sfRenderWindow *main);
void set_ki(sfRenderWindow *main);
void set_ki2(sfRenderWindow *main);
void my_clock(sfClock *clock);
void write_file(char  const *filepath, char *str);
int my_getnbr(const char *str);
int time_return(void);
void fighter2(sfRenderWindow *main);
void fighter3(sfRenderWindow *main);
void fighter4(sfRenderWindow *main);
void fighter5(sfRenderWindow *main);
void fighter6(sfRenderWindow *main);
void fighter7(sfRenderWindow *main);
void fight(sfRenderWindow *main, char  const *fighter1, char  const *fighter2, char  const *attack1, char  const *attack2, char const *map);
void map(sfRenderWindow *main);
void end_result();
void end_result2();
void times(sfRenderWindow *main);
void anime_attack(sfSprite *sprite, int x);
int event_check(sfEvent event, sfRenderWindow *window);
void htp(sfRenderWindow *main);

#endif
