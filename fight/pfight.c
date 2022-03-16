/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void pfight1(sfRenderWindow *main, sfSprite *sprite, char const *file, char
            const *att)
{
    run_t window = {0};
    sprite = sfSprite_create();
    fight_t fight = fight_struct(sprite, fight, file, att);
    sfClock *clockk = sfClock_create();

    while (sfRenderWindow_isOpen(main)) {
        sfRenderWindow_display(main);
        draw_sprite(main, "pic/fight.png");
        pball_param(main, fight.sfs2);
        ball2_param(main, fight.sfs3);
        set_ki_hp2(main);
        pgoku_coll(main, sprite, fight.sfs4);
        buu_coll(fight.sfs2, fight.sfs3, fight.sfs4);
        test();
        my_clock(clockk);
        close_game(main);
    }
    while (sfRenderWindow_pollEvent(main, &window.event)) {
    }
}

void pball_param(sfRenderWindow *main, sfSprite *sprite)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    sfVector2f move = {2, 0};

    sfVector2f vecstart2 = {230, 530};
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
        pball_param1(sprite);
    }
}

void pball_param1(sfSprite *sprite)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    sfVector2f move2 = {-999, 530};
    struct stat size;
    stat("text/plevel.txt", &size);
    int fd = open("text/plevel.txt", O_RDONLY);
    char *buffer = malloc(sizeof(char) *(size.st_size + 1));
    read(fd, buffer, size.st_size);
    buffer[size.st_size] = '\0';

    if (psx.x > 1020) {
        add_int(5 + (my_getnbr(buffer) * 5), "text/ehp.txt");
        sfSprite_setPosition(sprite, move2);
    }
}

void pgoku_coll(sfRenderWindow *main, sfSprite *sprite, sfSprite *sprite2)
{
    sfRenderWindow_drawSprite(main, sprite, NULL);
    sfRenderWindow_drawSprite(main, sprite2, NULL);
    anime_fightpicolo(sprite);
    mvt();
}

void set_ki_hp2(sfRenderWindow *main)
{
    set_ki(main);
    set_ki2(main);
    pset_hp(main);
    pset_hp2(main);
}
