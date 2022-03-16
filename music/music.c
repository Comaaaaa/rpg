/*
** EPITECH PROJECT, 2021
** dd
** File description:
** dd
*/

#include "my.h"

void play_music(sfRenderWindow *main)
{
    run_t window;
    sfMusic *music = sfMusic_createFromFile("music/main.wav");
    while (sfRenderWindow_isOpen(main)) {
        sfRenderWindow_display(main);
        draw_sprite(main, "pic/music.png");
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            event_check(window.event, main);
            if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum1)) {
                handle_music(true, music);
                write_file("text/music.txt", "1");
                sfRenderWindow_close(main);
                draw_menu();
            }
            if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum2)) {
                sfRenderWindow_close(main);
                draw_menu();
            }
        }
    }
}

void handle_music2(bool play_music, sfMusic *music)
{
    if (play_music == true) {
        sfMusic_setVolume(music, 10);
        sfMusic_play(music);
    } else {
        sfMusic_stop(music);
    }
}

void play_sound(char  const *file)
{
    sfMusic *music = sfMusic_createFromFile(file);
    handle_music2(true, music);
}
