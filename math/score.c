/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

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

char *print_name2(char const *filepath)
{
    struct stat size;
    stat(filepath, &size);
    int fd = open(filepath, O_RDONLY);
    char *buffer = malloc(sizeof(char) *(size.st_size + 1));
    read(fd, buffer, size.st_size);
    buffer[size.st_size] = '\0';
    return (buffer);
}

int print_score(char const *filepath)
{
    struct stat size;
    stat(filepath, &size);
    int fd = open(filepath, O_RDONLY);
    char *buffer = malloc(sizeof(char) *(size.st_size + 1));
    read(fd, buffer, size.st_size);
    buffer[size.st_size] = '\0';
    return (my_getnbr(buffer));
}

void map_score(void)
{
    run_t window = {0};
    score_t sco = {0};
    sfFont *font = sfFont_createFromFile("font/font.ttf");
    sco = fill_score(sco);
    window = fill_window(window);

    while (sfRenderWindow_isOpen(window.main)) {
        sfRenderWindow_display(window.main);
        draw_sprite(window.main, "pic/score.png");
        draw_score1(window.main, my_put_nbr_to_char(sco.score), 345, font);
        draw_score1(window.main, my_put_nbr_to_char(sco.score2), 445, font);
        draw_score1(window.main, my_put_nbr_to_char(sco.score3), 545, font);
        draw_score2(window.main, sco.str, 345, font);
        draw_score2(window.main, sco.str2, 445, font);
        draw_score2(window.main, sco.str3, 545, font);
        while (sfRenderWindow_pollEvent(window.main, &window.event)) {
            back_to_menu(window.main);
            event_check(window.event, window.main);
        }
    }
}

void back_to_menu(sfRenderWindow *main)
{
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyX)) {
        sfRenderWindow_close(main);
        draw_menu();
    }

}
