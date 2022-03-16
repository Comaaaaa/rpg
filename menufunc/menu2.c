/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void choose_game(sfRenderWindow *main)
{
    run_t window = {0};
    window.video_mode.width = 1280;
    window.video_mode.height = 720;
    window.video_mode.bitsPerPixel = 32;
    main = sfRenderWindow_create(window.video_mode,
                                        "My RPG", sfDefaultStyle, NULL);
    while (sfRenderWindow_isOpen(main)) {
        sfRenderWindow_display(main);
        draw_sprite(main, "pic/choose_game.png");
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            check_game(main);
            event_check(window.event, main);
        }
    }
}

int check_game(sfRenderWindow *main)
{
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum1)) {
        sfRenderWindow_close(main);
        draw_game();
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum2)) {
        sfRenderWindow_close(main);
        save();
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyNum3)) {
        sfRenderWindow_close(main);
        save2();
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyX)) {
        sfRenderWindow_close(main);
        return EXIT_SUCCESS;
    }
    return (0);
}

void check_settings(sfRenderWindow *main)
{
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyRight)) {
        add_int(-10, "text/fps.txt");
        settings(main);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyLeft)) {
        add_int(10, "text/fps.txt");
        settings(main);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyA))
        write_file("text/key.txt", "1");
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyB))
        write_file("text/key.txt", "2");
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyX)) {
        sfRenderWindow_close(main);
        draw_menu();
    }
}

void settings(sfRenderWindow *main)
{
    run_t window = {0};
    sfFont *font = sfFont_createFromFile("font/font.ttf");
    int dl = print_score("text/fps.txt");
    while (sfRenderWindow_isOpen(main)) {
        sfRenderWindow_display(main);
        draw_sprite(main, "pic/settings.jpg");
        draw_fps(main, my_put_nbr_to_char(dl), font);
        return_fps();
        while (sfRenderWindow_pollEvent(main, &window.event)) {
            check_settings(main);
            event_check(window.event, main);
            if (sfTrue == sfKeyboard_isKeyPressed(sfKeyM)) {
                play_music(main);
                sfRenderWindow_close(main);
            }
        }
    }
}

int return_fps(void)
{
    int fd = open("text/fps.txt", O_RDONLY);
    char buffer[10];

    read(fd, buffer, 10);
    close (fd);
    if (my_getnbr(buffer) < 10) {
        write_file("text/fps.txt", "10");
    }
    return (my_getnbr(buffer));
}
