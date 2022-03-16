/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height)
{
    framebuffer_t *framebuffer = malloc(sizeof(*framebuffer));

    framebuffer->width = width;
    framebuffer->height = height;
    framebuffer->pixels = malloc((32 / 4) * width * height);
    return (framebuffer);
}

sfRenderWindow *create_window(unsigned int w, unsigned int h, char const *str)
{
    sfRenderWindow *window;
    sfVideoMode v_mode;

    v_mode.width = w;
    v_mode.height = h;
    v_mode.bitsPerPixel = 32;

    window = sfRenderWindow_create(v_mode, str, sfDefaultStyle, NULL);
    return (window);
}

void draw(framebuffer_t *frame)
{
    int x = rand() % 1279;
    int y = rand() % 720;
    my_put_pixel(frame, x, y, sfColor_fromRGB(169, 169, 169));
    my_put_pixel(frame, x + 1, y + 1, sfColor_fromRGB(169, 169, 169));
    my_put_pixel(frame, x + 2, y + 2, sfColor_fromRGB(169, 169, 169));
    my_put_pixel(frame, x + 3, y + 3, sfColor_fromRGB(169, 169, 169));
    my_put_pixel(frame, x + 4, y + 4, sfColor_fromRGB(169, 169, 169));
    my_put_pixel(frame, x + 5, y + 5, sfColor_fromRGB(169, 169, 169));
    my_put_pixel(frame, x + 6, y + 6, sfColor_fromRGB(169, 169, 169));
}

void draw_p(void)
{
    sfEvent event;
    framebuffer_t *frame = framebuffer_create(1280, 720);
    sfTexture *texture = sfTexture_create(1280, 720);
    sfSprite *sprite = sfSprite_create();
    sfRenderWindow *win = create_window(1080, 720, "#1");
    sfRenderWindow_setFramerateLimit(win, 120);
    while (sfRenderWindow_isOpen(win)) {
        sfTexture_updateFromPixels(texture, frame->pixels, 1280, 720, 0, 0);
        sfSprite_setTexture(sprite, texture, sfTrue);
        while (sfRenderWindow_pollEvent(win, &event)) {
            draw_sprite(win, "pic/house.jpg");
            sfRenderWindow_drawSprite(win, sprite, NULL);
            sfRenderWindow_display(win);
            draw(frame);
            p_event(event, win);
        }
    }
    free(frame);
}

void my_put_pixel(framebuffer_t *framebuffer, unsigned int x,
                  unsigned int y, sfColor color)
{
    framebuffer->pixels[4 * (y * framebuffer->width + x)] = color.r;
    framebuffer->pixels[4 * (y * framebuffer->width + x) + 1] = color.g;
    framebuffer->pixels[4 * (y * framebuffer->width + x) + 2] = color.b;
    framebuffer->pixels[4 * (y * framebuffer->width + x) + 3] = color.a;
}
