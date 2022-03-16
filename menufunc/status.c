/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void status(sfRenderWindow *main, sfSprite *sprite)
{
    run_t window = {0};
    sfFont *font = sfFont_createFromFile("font/font.ttf");
    struct stat size;
    stat("text/name.txt", &size);
    int fd = open("text/name.txt", O_RDONLY);
    char *buffer = malloc(sizeof(char) *(size.st_size + 1));
    read(fd, buffer, size.st_size);
    buffer[size.st_size] = '\0';
    int ffd = open("text/level.txt", O_RDONLY);
    char bbuffer[10];
    read(ffd, bbuffer, 10);
    while (sfRenderWindow_isOpen(main)) {
        sfRenderWindow_display(main);
        draw_sprite(main, "pic/status.png");
        draw_name(main, buffer, font);
        draw_level(main, bbuffer, font);
        map_status(main, sprite);
        while (sfRenderWindow_pollEvent(main, &window.event))
            event_check(window.event, main);
    }
}

int map_status(sfRenderWindow *main, sfSprite *sprite)
{
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyX)) {
        sfRenderWindow_close(main);
        return EXIT_SUCCESS;
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyV)) {
        save_if(main, sprite);
        sfRenderWindow_close(main);
    }
    return (0);
}

void pstatus(sfRenderWindow *main, sfSprite *sprite)
{
    run_t window = {0};
    sfFont *font = sfFont_createFromFile("font/font.ttf");
    struct stat size;
    stat("text/name.txt", &size);
    int fd = open("text/pname.txt", O_RDONLY);
    char *buffer = malloc(sizeof(char) *(size.st_size + 1));
    read(fd, buffer, size.st_size);
    buffer[size.st_size] = '\0';
    int ffd = open("text/plevel.txt", O_RDONLY);
    char bbuffer[10];
    read(ffd, bbuffer, 10);
    while (sfRenderWindow_isOpen(main)) {
        sfRenderWindow_display(main);
        draw_sprite(main, "pic/status2.png");
        draw_name(main, buffer, font);
        draw_level(main, bbuffer, font);
        pmap_status(main, sprite);
        while (sfRenderWindow_pollEvent(main, &window.event))
            event_check(window.event, main);
    }
}

int pmap_status(sfRenderWindow *main, sfSprite *sprite)
{
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyX)) {
        sfRenderWindow_close(main);
        return EXIT_SUCCESS;
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyV)) {
        save_if2(main, sprite);
        sfRenderWindow_close(main);
    }
    return (0);
}
