/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

int my_getnbr(const char *str)
{
    int i;
    int nbr;

    i = 0;
    nbr = 0;
    while ((str[i] < '0' || str[i] > '9') && str[i] != '\0')
        i = i + 1;
    while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0') {
        nbr = ((nbr * 10) + (str[i] - '0'));
        i = i + 1;
    }
    if (str[0] == '-')
        nbr *= -1;
    return (nbr);
}

void set_highscore(int x)
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
        write_file("text/name1.txt", print_name2("text/name.txt"));
        fwrite(my_put_nbr_to_char(x), 1, sizeof(my_put_nbr_to_char(x)), fp);
    }
    else {
        set_highscore2(x);
    }
    close(fd);
}

void set_highscore2(int x)
{
    int fd = open("text/highscore2.txt", O_RDONLY);
    FILE *fp = fopen ("text/highscore2.txt", "r+");
    char buffer[20];
    read(fd, buffer, 20);
    int xx = my_getnbr(buffer);
    if (x > xx) {
        write_file("text/name3.txt", print_name2("text/name2.txt"));
        write_file("text/name2.txt", print_name2("text/name.txt"));
        fwrite(my_put_nbr_to_char(x), 1, sizeof(my_put_nbr_to_char(x)), fp);
    }
    else {
        set_highscore3(x);
    }
    close(fd);
}

void set_highscore3(int x)
{
    int fd = open("text/highscore3.txt", O_RDONLY);
    FILE *fp = fopen ("text/highscore3.txt", "r+");
    char buffer[20];
    read(fd, buffer, 20);
    int xx = my_getnbr(buffer);
    if (x > xx) {
        write_file("text/name3.txt", print_name2("text/name.txt"));
        fwrite(my_put_nbr_to_char(x), 1, sizeof(my_put_nbr_to_char(x)), fp);
    }
    close(fd);
}