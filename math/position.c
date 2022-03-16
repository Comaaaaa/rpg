/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

int print_posx(void)
{
    struct stat size;
    stat("text/posx.txt", &size);
    int fd = open("text/posx.txt", O_RDONLY);
    char *buffer = malloc(sizeof(char) *(size.st_size + 1));
    read(fd, buffer, size.st_size);
    buffer[size.st_size] = '\0';

    return (my_getnbr(buffer));
}

int print_posy(void)
{
    struct stat size;
    stat("text/posy.txt", &size);
    int fd = open("text/posy.txt", O_RDONLY);
    char *buffer = malloc(sizeof(char) *(size.st_size + 1));
    read(fd, buffer, size.st_size);
    buffer[size.st_size] = '\0';

    return (my_getnbr(buffer));
}

int print_posx2(void)
{
    struct stat size;
    stat("text/posx2.txt", &size);
    int fd = open("text/posx2.txt", O_RDONLY);
    char *buffer = malloc(sizeof(char) *(size.st_size + 1));
    read(fd, buffer, size.st_size);
    buffer[size.st_size] = '\0';

    return (my_getnbr(buffer));
}

int print_posy2(void)
{
    struct stat size;
    stat("text/posy2.txt", &size);
    int fd = open("text/posy2.txt", O_RDONLY);
    char *buffer = malloc(sizeof(char) *(size.st_size + 1));
    read(fd, buffer, size.st_size);
    buffer[size.st_size] = '\0';

    return (my_getnbr(buffer));
}

void save_pos(sfSprite *sprite)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    int var2;
    FILE *fp = fopen ("text/posx.txt", "r+");
    int var3;
    FILE *fd = fopen ("text/posy.txt", "r+");
    var2 = (int)psx.x;
    var3 = (int)psx.y;
    fwrite(my_put_nbr_to_char(var2), 1, sizeof(my_put_nbr_to_char(var2)), fp);
    fwrite(my_put_nbr_to_char(var3), 1, sizeof(my_put_nbr_to_char(var3)), fd);
    fclose (fp);
    fclose (fd);
}
