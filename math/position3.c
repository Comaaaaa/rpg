/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void minimap_printx2(sfSprite *sprite, char  const *file)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    int var2;
    FILE *fp = fopen (file, "r+");
    var2 = (int) ((psx.x / 3) + 426);
    fwrite(my_put_nbr_to_char(var2), 1, sizeof(my_put_nbr_to_char(var2)), fp);
    fclose (fp);
}

void minimap_printx3(sfSprite *sprite, char  const *file)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    int var2;
    FILE *fp = fopen (file, "r+");
    var2 = (int) ((psx.x / 3) + 852);
    fwrite(my_put_nbr_to_char(var2), 1, sizeof(my_put_nbr_to_char(var2)), fp);
    fclose (fp);
}

void minimap_printy2(sfSprite *sprite, char  const *file)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    int var2;
    FILE *fp = fopen (file, "r+");
    var2 = (int) ((psx.y / 3) + 240);
    fwrite(my_put_nbr_to_char(var2), 1, sizeof(my_put_nbr_to_char(var2)), fp);
    fclose (fp);
}

void minimap_printy3(sfSprite *sprite, char  const *file)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    int var2;
    FILE *fp = fopen (file, "r+");
    var2 = (int) ((psx.y / 3) + 480);
    fwrite(my_put_nbr_to_char(var2), 1, sizeof(my_put_nbr_to_char(var2)), fp);
    fclose (fp);
}
