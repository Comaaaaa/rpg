/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void move_rec(sfIntRect *rect, int offset, int max_value, sfClock *clock)
{
    sfTime time;
    float second = 0;

    time = sfClock_getElapsedTime(clock);
    second = time.microseconds / 1000000.0;
    if (second > 0.15) {
        rect->left = rect->left +offset;
        if (rect->left >= max_value)
            rect->left = 0;
        sfClock_restart(clock);
    }
}

void draw_game(void)
{
    run_t window = {0};
    window.video_mode.width = 1280;
    window.video_mode.height = 720;
    window.video_mode.bitsPerPixel = 32;
    window.main = sfRenderWindow_create(window.video_mode,
                                        "My RPG", sfDefaultStyle, NULL);
    sfSprite *sprite;
    sprite = sfSprite_create();
    sfRenderWindow_setFramerateLimit(window.main, return_fps());
    while (sfRenderWindow_isOpen(window.main)) {
        sfRenderWindow_display(window.main);
        tchange_map(window.main);
        key_event(window.main, sprite);
        key_event2(window.main, sprite);
        while (sfRenderWindow_pollEvent(window.main, &window.event)) {
            close_game(window.main);
            event_check(window.event, window.main);
        }
    }
}

void handle_music(bool play_music, sfMusic *music)
{
    if (play_music == true) {
        sfMusic_play(music);
        sfMusic_setLoop(music , sfTrue);
    } else {
        sfMusic_setLoop(music , sfFalse);
        sfMusic_pause(music);
        sfMusic_stop(music);
    }
}

void key_event(sfRenderWindow *main, sfSprite *sprite)
{
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyG)) {
        set_all_to_nul();
        name1();
        start_map0(main, sprite);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyP)) {
        set_all_to_nul2();
        name2();
        pstart_map0(main, sprite);
    }
}

void key_event2(sfRenderWindow *main, sfSprite *sprite)
{
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyRight)) {
        name1();
        my_map0(main, sprite, 145, 240);
        set_all_to_nul();
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyLeft)) {
        name2();
        pmy_map0(main, sprite, 145, 240);
        set_all_to_nul2();
    }
}
