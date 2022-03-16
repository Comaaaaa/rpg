/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

void talk5(sfRenderWindow *main, sfSprite *sprite)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    if (psx.y >  299 && psx.y < 340 && psx.x == 200 && fight_talk() == 0)
        draw_sprite2(main, "pic/talkb.jpg", 140, 370);
    if (sfKeyboard_isKeyPressed(sfKeyT) && fight_talk() == 0)
        write_file("text/talk.txt", "1");
    if (psx.y >  299 && psx.y < 340 && psx.x == 200 && fight_talk() == 1)
        draw_sprite2(main, "pic/talk7.png", 140, 370);
    if (sfKeyboard_isKeyPressed(sfKeyNum1) && fight_talk() == 1)
        write_file("text/talk.txt", "2");
    if (psx.y >  299 && psx.y < 340 && psx.x == 200 && fight_talk() == 2)
        draw_sprite2(main, "pic/talk8.png", 140, 370);
    if (sfKeyboard_isKeyPressed(sfKeyF) && fight_talk() == 2) {
        write_file("text/talk.txt", "0");
        end(main);
        sfRenderWindow_close(main);
    }
}

void ptalk5(sfRenderWindow *main, sfSprite *sprite)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    if (psx.y >  299 && psx.y < 340 && psx.x == 200 && fight_talk() == 0)
        draw_sprite2(main, "pic/talkb.jpg", 140, 370);
    if (sfKeyboard_isKeyPressed(sfKeyT) && fight_talk() == 0)
        write_file("text/talk.txt", "1");
    if (psx.y >  299 && psx.y < 340 && psx.x == 200 && fight_talk() == 1)
        draw_sprite2(main, "pic/talk7.png", 140, 370);
    if (sfKeyboard_isKeyPressed(sfKeyNum1) && fight_talk() == 1)
        write_file("text/talk.txt", "2");
    if (psx.y >  299 && psx.y < 340 && psx.x == 200 && fight_talk() == 2)
        draw_sprite2(main, "pic/talk8.png", 140, 370);
    if (sfKeyboard_isKeyPressed(sfKeyF) && fight_talk() == 2) {
        write_file("text/talk.txt", "0");
        end2(main);
        sfRenderWindow_close(main);
    }
}
