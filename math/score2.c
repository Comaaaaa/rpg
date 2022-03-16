/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void pset_highscore(int x)
{
    int fd = open("text/highscore.txt", O_RDONLY);
    FILE *fp = fopen ("text/highscore.txt", "r+");
    char buffer[20];
    read(fd, buffer, 20);
    int xx = my_getnbr(buffer);
    if (x > xx) {
        write_file("text/highscore2.txt", my_put_nbr_to_char(xx));
        write_file("text/name3.txt", print_name2("text/name2.txt"));
        write_file("text/name2.txt", print_name2("text/name1.txt"));
        write_file("text/name1.txt", print_name2("text/pname.txt"));
        fwrite(my_put_nbr_to_char(x), 1, sizeof(my_put_nbr_to_char(x)), fp);
    }
    else {
        pset_highscore2(x);
    }
    close(fd);
}

void pset_highscore2(int x)
{
    int fd = open("text/highscore2.txt", O_RDONLY);
    FILE *fp = fopen ("text/highscore2.txt", "r+");
    char buffer[20];
    read(fd, buffer, 20);
    int xx = my_getnbr(buffer);
    if (x > xx) {
        write_file("text/name3.txt", print_name2("text/name2.txt"));
        write_file("text/name2.txt", print_name2("text/pname.txt"));
        fwrite(my_put_nbr_to_char(x), 1, sizeof(my_put_nbr_to_char(x)), fp);
    }
    else {
        pset_highscore3(x);
    }
    close(fd);
}

void pset_highscore3(int x)
{
    int fd = open("text/highscore3.txt", O_RDONLY);
    FILE *fp = fopen ("text/highscore3.txt", "r+");
    char buffer[20];
    read(fd, buffer, 20);
    int xx = my_getnbr(buffer);
    if (x > xx) {
        write_file("text/name3.txt", print_name2("text/pname.txt"));
        fwrite(my_put_nbr_to_char(x), 1, sizeof(my_put_nbr_to_char(x)), fp);
    }
    close(fd);
}

score_t fill_score(score_t sc)
{
    sc.score = print_score("text/highscore.txt");
    sc.score2 = print_score("text/highscore2.txt");
    sc.score3 = print_score("text/highscore3.txt");
    sc.str = print_name2("text/name1.txt");
    sc.str2 = print_name2("text/name2.txt");
    sc.str3 = print_name2("text/name3.txt");
    return (sc);
}

run_t fill_window(run_t window)
{
    window.video_mode.width = 1280;
    window.video_mode.height = 720;
    window.video_mode.bitsPerPixel = 32;
    window.main = sfRenderWindow_create(window.video_mode,
                                        "My RPG", sfDefaultStyle, NULL);
    return (window);
}