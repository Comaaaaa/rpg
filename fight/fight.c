/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void fight1(sfRenderWindow *main, sfSprite *sprite, char const *file, char
            const *att)
{
    run_t window = {0};
    sprite = sfSprite_create();
    fight_t fight = fight_struct_2(sprite, fight, file, att);
    sfClock *clockk = sfClock_create();

    while (sfRenderWindow_isOpen(main)) {
        sfRenderWindow_display(main);
        draw_sprite(main, "pic/fight.png");
        ball_param(main, fight.sfs2);
        ball2_param(main, fight.sfs3);
        set_ki_hp(main);
        goku_coll(main, sprite, fight.sfs4);
        buu_coll(fight.sfs2, fight.sfs3, fight.sfs4);
        test();
        close_game(main);
        my_clock(clockk);
    }
    while (sfRenderWindow_pollEvent(main, &window.event)) {
    }
}

void ball_param(sfRenderWindow *main, sfSprite *sprite)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    sfVector2f move = {4, 0};
    sfVector2f vecstart2 = {230, 530};
    anime_attack(sprite);
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyD) &&
    (psx.x > 1050 || psx.x < -50)
        && return_ki("text/ki.txt") == 1) {
        sfSprite_setPosition(sprite, vecstart2);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyD) &&
        return_ki("text/ki.txt") == 1)
        psx.x = psx.x + 0.1;
    if (psx.x > 230)
        sfSprite_move(sprite, move);
    if (psx.x < 1050)
        sfRenderWindow_drawSprite(main, sprite, NULL);
    if (psx.x > 1020) {
        ball_param1(sprite);
    }
}

void ball_param1(sfSprite *sprite)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    sfVector2f move2 = {-999, 530};
    struct stat size;
    stat("text/level.txt", &size);
    int fd = open("text/level.txt", O_RDONLY);
    char *buffer = malloc(sizeof(char) *(size.st_size + 1));
    read(fd, buffer, size.st_size);
    buffer[size.st_size] = '\0';

    if (psx.x > 1020 && return_attack() == 1) {
        add_int(5 + (my_getnbr(buffer) * 5), "text/ehp.txt");
        sfSprite_setPosition(sprite, move2);
    }
    if (psx.x > 1020 && return_attack() == 2) {
        add_int(5 + (my_getnbr(buffer) * 10), "text/ehp.txt");
        sfSprite_setPosition(sprite, move2);
    }
}

void ball2_param(sfRenderWindow *main, sfSprite *sprite)
{
    if (check_ki() == 1) {
        add_int(-30, "text/eki.txt");
    }
    else {
        ball3_param(main, sprite);
    }
}

void ball3_param(sfRenderWindow *main, sfSprite *sprite)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    sfVector2f move = {-4, 0};
    sfVector2f move2 = {999, 530};
    sfSprite_move(sprite, move);
    if (psx.x == 997)
        add_int(200, "text/eki.txt");
    if (psx.x < 1000)
        sfRenderWindow_drawSprite(main, sprite, NULL);
    if (psx.x < 204) {
        if (sfTrue == sfKeyboard_isKeyPressed(sfKeyQ)) {
            add_int(5, "text/hp.txt");
            sfSprite_setPosition(sprite, move2);
        }
        else {
            add_int(10, "text/hp.txt");
            sfSprite_setPosition(sprite, move2);
        }
    }
}
