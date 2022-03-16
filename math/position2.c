/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void minimap_printx1(sfSprite *sprite, char  const *file)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    int var2;
    FILE *fp = fopen (file, "r+");
    var2 = (int) (psx.x / 3);
    fwrite(my_put_nbr_to_char(var2), 1, sizeof(my_put_nbr_to_char(var2)), fp);
    fclose (fp);
}

void minimap_printy1(sfSprite *sprite, char  const *file)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    int var3;
    FILE *fd = fopen (file, "r+");
    var3 = (int) (psx.y / 3);
    fwrite(my_put_nbr_to_char(var3), 1, sizeof(my_put_nbr_to_char(var3)), fd);
    fclose (fd);
}

int print_miniposx(void)
{
    struct stat size;
    stat("text/miniposx.txt", &size);
    int fd = open("text/miniposx.txt", O_RDONLY);
    char *buffer = malloc(sizeof(char) *(size.st_size + 1));
    read(fd, buffer, size.st_size);
    buffer[size.st_size] = '\0';
    return (my_getnbr(buffer));
}

int print_miniposy(void)
{
    struct stat size;
    stat("text/miniposy.txt", &size);
    int fd = open("text/miniposy.txt", O_RDONLY);
    char *buffer = malloc(sizeof(char) *(size.st_size + 1));
    read(fd, buffer, size.st_size);
    buffer[size.st_size] = '\0';
    return (my_getnbr(buffer));
}

void save_pos2(sfSprite *sprite)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    int var2;
    FILE *fp = fopen ("text/posx2.txt", "r+");
    int var3;
    FILE *fd = fopen ("text/posy2.txt", "r+");
    var2 = (int)psx.x;
    var3 = (int)psx.y;
    fwrite(my_put_nbr_to_char(var2), 1, sizeof(my_put_nbr_to_char(var2)), fp);
    fwrite(my_put_nbr_to_char(var3), 1, sizeof(my_put_nbr_to_char(var3)), fd);
    fclose (fp);
    fclose (fd);
}
