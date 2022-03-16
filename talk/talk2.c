/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void ptalk2(sfRenderWindow *main, sfSprite *sprite)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    if (psx.x >  1049 && psx.x < 1080 && psx.y == 420 && fight_talk() == 0)
        draw_sprite2(main, "pic/talkb.jpg", 990, 350);
    if (sfKeyboard_isKeyPressed(sfKeyT) && fight_talk() == 0)
        write_file("text/talk.txt", "1");
    if (psx.x >  1049 && psx.x < 1080 && psx.y == 420 && fight_talk() == 1)
        draw_sprite2(main, "pic/talk4.png", 990, 350);
    if (sfKeyboard_isKeyPressed(sfKeyNum1) && fight_talk() == 1)
        write_file("text/talk.txt", "2");
    if (psx.x >  1049 && psx.x < 1080 && psx.y == 420 && fight_talk() == 2)
        draw_sprite2(main, "pic/talk2.png", 990, 350);
    if (sfKeyboard_isKeyPressed(sfKeyNum2) && fight_talk() == 2)
        write_file("text/talk.txt", "3");
    if (psx.x >  1049 && psx.x < 1080 && psx.y == 420 && fight_talk() == 3)
        draw_sprite2(main, "pic/talk3.png", 990, 350);
    if (sfKeyboard_isKeyPressed(sfKeyNum3) && fight_talk() == 3) {
        write_file("text/talk.txt", "0");
        pdia2(main, sprite);
        sfRenderWindow_close(main);
    }
}

void ptalk3(sfRenderWindow *main, sfSprite *sprite)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    if (psx.x >  614 && psx.x < 636 && psx.y == 270 && fight_talk() == 0)
        draw_sprite2(main, "pic/talkb.jpg", 554, 200);
    if (sfKeyboard_isKeyPressed(sfKeyT) && fight_talk() == 0)
        write_file("text/talk.txt", "1");
    if (psx.x >  614 && psx.x < 636 && psx.y == 270 && fight_talk() == 1)
        draw_sprite2(main, "pic/talk5.png", 554, 200);
    if (sfKeyboard_isKeyPressed(sfKeyNum1) && fight_talk() == 1)
        write_file("text/talk.txt", "2");
    if (psx.x >  614 && psx.x < 636 && psx.y == 270 && fight_talk() == 2)
        draw_sprite2(main, "pic/talk2.png", 554, 200);
    if (sfKeyboard_isKeyPressed(sfKeyNum2) && fight_talk() == 2)
        write_file("text/talk.txt", "3");
    if (psx.x >  614 && psx.x < 635 && psx.y == 270 && fight_talk() == 3)
        draw_sprite2(main, "pic/talk3.png", 554, 200);
    if (sfKeyboard_isKeyPressed(sfKeyNum3) && fight_talk() == 3) {
        write_file("text/talk.txt", "0");
        pdia3(main, sprite);
        sfRenderWindow_close(main);
    }
}

void talk4(sfRenderWindow *main, sfSprite *sprite)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    if (psx.x >  179 && psx.x < 201 && psx.y == 210 && fight_talk() == 0)
        draw_sprite2(main, "pic/talkb.jpg", 119, 160);
    if (sfKeyboard_isKeyPressed(sfKeyT) && fight_talk() == 0)
        write_file("text/talk.txt", "1");
    if (psx.x >  179 && psx.x < 201 && psx.y == 210 && fight_talk() == 1)
        draw_sprite2(main, "pic/talk6.png", 119, 160);
    if (sfKeyboard_isKeyPressed(sfKeyNum1) && fight_talk() == 1)
        write_file("text/talk.txt", "2");
    if (psx.x >  179 && psx.x < 201 && psx.y == 210 && fight_talk() == 2)
        draw_sprite2(main, "pic/talk2.png", 119, 160);
    if (sfKeyboard_isKeyPressed(sfKeyNum2) && fight_talk() == 2)
        write_file("text/talk.txt", "3");
    if (psx.x >  179 && psx.x < 201 && psx.y == 210 && fight_talk() == 3)
        draw_sprite2(main, "pic/talk3.png", 119, 160);
    if (sfKeyboard_isKeyPressed(sfKeyNum3) && fight_talk() == 3) {
        write_file("text/talk.txt", "0");
        dia4(main, sprite);
        sfRenderWindow_close(main);
    }
}

void ptalk4(sfRenderWindow *main, sfSprite *sprite)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    if (psx.x >  179 && psx.x < 201 && psx.y == 210 && fight_talk() == 0)
        draw_sprite2(main, "pic/talkb.jpg", 119, 160);
    if (sfKeyboard_isKeyPressed(sfKeyT) && fight_talk() == 0)
        write_file("text/talk.txt", "1");
    if (psx.x >  179 && psx.x < 201 && psx.y == 210 && fight_talk() == 1)
        draw_sprite2(main, "pic/talk6.png", 119, 160);
    if (sfKeyboard_isKeyPressed(sfKeyNum1) && fight_talk() == 1)
        write_file("text/talk.txt", "2");
    if (psx.x >  179 && psx.x < 201 && psx.y == 210 && fight_talk() == 2)
        draw_sprite2(main, "pic/talk2.png", 119, 160);
    if (sfKeyboard_isKeyPressed(sfKeyNum2) && fight_talk() == 2)
        write_file("text/talk.txt", "3");
    if (psx.x >  179 && psx.x < 201 && psx.y == 210 && fight_talk() == 3)
        draw_sprite2(main, "pic/talk3.png", 119, 160);
    if (sfKeyboard_isKeyPressed(sfKeyNum3) && fight_talk() == 3) {
        write_file("text/talk.txt", "0");
        pdia4(main, sprite);
        sfRenderWindow_close(main);
    }
}
