/*
** EPITECH PROJECT, 2021
** dd
** File description:
** dd
*/

#include "my.h"

void my_clock(sfClock *clock)
{
    sfTime time;
    float second;
    time = sfClock_getElapsedTime(clock);
    second = time.microseconds / 1000000.0;
    if (second < 0.1) {
        write_file("timer.txt", "0");
    }
    else {
        write_file("timer.txt", "1");
    }
}

void write_file(char const *filepath, char *str)
{
    FILE *fp = fopen (filepath, "r+");
    fwrite(str, 1, sizeof(str), fp);
    fclose(fp);
}

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

int time_return(void)
{
    int fd = open("timer.txt", O_RDONLY);
    char buffer[10];
    read(fd, buffer, 10);
    close (fd);
    if (my_getnbr(buffer) == 0) {
        return (0);
    }
    if (my_getnbr(buffer) == 1) {
        return (1);
    }
    return (my_getnbr(buffer));
}
