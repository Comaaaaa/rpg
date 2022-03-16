/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void move_guy(sfSprite *sprite)
{
    if (return_key() == 2) {
        move_guy2(sprite);
    }
    else {
        move_guy1(sprite);
    }
}

void move_guy1(sfSprite *sprite)
{
    sfVector2f move = {5, 0};
    sfVector2f move2 = {-5, 0};
    sfVector2f move3 = {0, 5};
    sfVector2f move4 = {0, -5};
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyD)) {
        sfSprite_move(sprite, move);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyQ)) {
        sfSprite_move(sprite, move2);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyZ)) {
        sfSprite_move(sprite, move4);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyS)) {
        sfSprite_move(sprite, move3);
    }
}

void move_guy2(sfSprite *sprite)
{
    sfVector2f move = {5, 0};
    sfVector2f move2 = {-5, 0};
    sfVector2f move3 = {0, 5};
    sfVector2f move4 = {0, -5};
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyRight)) {
        sfSprite_move(sprite, move);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyLeft)) {
        sfSprite_move(sprite, move2);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyUp)) {
        sfSprite_move(sprite, move4);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyDown)) {
        sfSprite_move(sprite, move3);
    }
}

int return_ssj(void)
{
    int fd = open("text/ssj.txt", O_RDONLY);
    char buffer[10];
    read(fd, buffer, 10);
    close (fd);
    if (my_getnbr(buffer) == 0) {
        return (0);
    }
    else {
        return (1);
    }
    return (my_getnbr(buffer));
}
