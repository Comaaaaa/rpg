/*
** EPITECH PROJECT, 2021
** s
** File description:
** s
*/

#include "my.h"

void talk1(sfRenderWindow *main, sfSprite *sprite)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    if (psx.x >  739 && psx.x < 781 && psx.y == 310 && fight_talk() == 0)
        draw_sprite2(main, "pic/talkb.jpg", 790, 260);
    if (sfKeyboard_isKeyPressed(sfKeyT) && fight_talk() == 0)
        write_file("text/talk.txt", "1");
    if (psx.x >  739 && psx.x < 781 && psx.y == 310 && fight_talk() == 1)
        draw_sprite2(main, "pic/talk1.png", 730, 260);
    if (sfKeyboard_isKeyPressed(sfKeyNum1) && fight_talk() == 1)
        write_file("text/talk.txt", "2");
    if (psx.x >  739 && psx.x < 781 && psx.y == 310 && fight_talk() == 2)
        draw_sprite2(main, "pic/talk2.png", 730, 260);
    if (sfKeyboard_isKeyPressed(sfKeyNum2) && fight_talk() == 2)
        write_file("text/talk.txt", "3");
    if (psx.x >  739 && psx.x < 781 && psx.y == 310 && fight_talk() == 3)
        draw_sprite2(main, "pic/talk3.png", 760, 260);
    if (sfKeyboard_isKeyPressed(sfKeyNum3) && fight_talk() == 3) {
        write_file("text/talk.txt", "0");
        dia1(main, sprite);
        sfRenderWindow_close(main);
    }
}

void ptalk1(sfRenderWindow *main, sfSprite *sprite)
{
    sfVector2f  psx = sfSprite_getPosition(sprite);
    if (psx.x >  739 && psx.x < 781 && psx.y == 310 && fight_talk() == 0)
        draw_sprite2(main, "pic/talkb.jpg", 790, 260);
    if (sfKeyboard_isKeyPressed(sfKeyT) && fight_talk() == 0)
        write_file("text/talk.txt", "1");
    if (psx.x >  739 && psx.x < 781 && psx.y == 310 && fight_talk() == 1)
        draw_sprite2(main, "pic/talk1.png", 730, 260);
    if (sfKeyboard_isKeyPressed(sfKeyNum1) && fight_talk() == 1)
        write_file("text/talk.txt", "2");
    if (psx.x >  739 && psx.x < 781 && psx.y == 310 && fight_talk() == 2)
        draw_sprite2(main, "pic/talk2.png", 730, 260);
    if (sfKeyboard_isKeyPressed(sfKeyNum2) && fight_talk() == 2)
        write_file("text/talk.txt", "3");
    if (psx.x >  739 && psx.x < 781 && psx.y == 310 && fight_talk() == 3)
        draw_sprite2(main, "pic/talk3.png", 760, 260);
    if (sfKeyboard_isKeyPressed(sfKeyNum3) && fight_talk() == 3) {
        write_file("text/talk.txt", "0");
        pdia1(main, sprite);
        sfRenderWindow_close(main);
    }
}

void talk2(sfRenderWindow *main, sfSprite *sprite)
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
        dia2(main, sprite);
        sfRenderWindow_close(main);
    }
}

void talk3(sfRenderWindow *main, sfSprite *sprite)
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
        dia3(main, sprite);
        sfRenderWindow_close(main);
    }
}

int fight_talk(void)
{
    int fd = open("text/talk.txt", O_RDONLY);
    char buffer[1];
    read(fd, buffer, 1);
    close (fd);
    if (my_getnbr(buffer) == 0) {
        return (0);
    }
    if (my_getnbr(buffer) == 1) {
        return (1);
    }
    if (my_getnbr(buffer) == 2) {
        return (2);
    }
    if (my_getnbr(buffer) == 3) {
        return (3);
    }
    return (0);
}
