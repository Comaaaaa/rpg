/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** fight_struct.c
*/

#include "../include/my.h"

fight_t fight_struct(sfSprite *sprite, fight_t fightt, char const *file, char
                    const *att)
{
    sfVector2f vec1 = {170, 480};
    sfVector2f vec2 = {-999, 530};
    sfVector2f vec3 = {1000, 530};
    fightt = fight_struct_4(fightt, file);
    fightt.sft = sfTexture_createFromFile("pic/cpicolo.png", NULL);
    fightt.sfv = vec1;
    sfSprite_setTexture(sprite, fightt.sft, sfTrue);
    sfSprite_setPosition(sprite, fightt.sfv);
    fightt.sfs2 = sfSprite_create();
    fightt.sft2 = sfTexture_createFromFile("pic/attackp.png", NULL);
    fightt.sfv2 = vec2;
    sfSprite_setTexture(fightt.sfs2, fightt.sft2, sfTrue);
    sfSprite_setPosition(fightt.sfs2, fightt.sfv2);
    fightt.sfs3 = sfSprite_create();
    fightt.sft3 = sfTexture_createFromFile(att, NULL);
    fightt.sfv3 = vec3;
    sfSprite_setTexture(fightt.sfs3, fightt.sft3, sfTrue);
    sfSprite_setPosition(fightt.sfs3, fightt.sfv3);
    return (fightt);
}

fight_t fight_struct_2(sfSprite *sprite, fight_t fightt, char const *file, char
                    const *att)
{
    sfVector2f vec1 = {170, 480};
    sfVector2f vec2 = {-999, 530};
    sfVector2f vec3 = {1000, 530};
    fightt = fight_struct_3(fightt, file);
    fightt.sft = sfTexture_createFromFile("pic/cgokuu.png", NULL);
    fightt.sfv = vec1;
    sfSprite_setTexture(sprite, fightt.sft, sfTrue);
    sfSprite_setPosition(sprite, fightt.sfv);
    fightt.sfs2 = sfSprite_create();
    fightt.sft2 = sfTexture_createFromFile("pic/attack.png", NULL);
    fightt.sfv2 = vec2;
    sfSprite_setTexture(fightt.sfs2, fightt.sft2, sfTrue);
    sfSprite_setPosition(fightt.sfs2, fightt.sfv2);
    fightt.sfs3 = sfSprite_create();
    fightt.sft3 = sfTexture_createFromFile(att, NULL);
    fightt.sfv3 = vec3;
    sfSprite_setTexture(fightt.sfs3, fightt.sft3, sfTrue);
    sfSprite_setPosition(fightt.sfs3, fightt.sfv3);
    return (fightt);
}

fight_t fight_struct_3(fight_t fightt, char const *file)
{
    sfVector2f vec4 = {1060, 480};
    fightt.sfs4 = sfSprite_create();
    fightt.sft4 = sfTexture_createFromFile(file, NULL);
    fightt.sfv4 = vec4;
    sfSprite_setTexture(fightt.sfs4, fightt.sft4, sfTrue);
    sfSprite_setPosition(fightt.sfs4, fightt.sfv4);
    return (fightt);
}

fight_t fight_struct_4(fight_t fightt, char const *file)
{
    sfVector2f vec4 = {1060, 480};
    fightt.sfs4 = sfSprite_create();
    fightt.sft4 = sfTexture_createFromFile(file, NULL);
    fightt.sfv4 = vec4;
    sfSprite_setTexture(fightt.sfs4, fightt.sft4, sfTrue);
    sfSprite_setPosition(fightt.sfs4, fightt.sfv4);
    return (fightt);
}

void set_ki_hp(sfRenderWindow *main)
{
    set_ki(main);
    set_ki2(main);
    set_hp(main);
    set_hp2(main);
}
