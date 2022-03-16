/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"
#include <string.h>

void my_putstr(char *str)
{
    write(1 , str , strlen(str));
}

void name1(void)
{
    my_putstr("\e[0;33m[Jouer 2 choisit ton nom] \e[0m");
    char *text;
    size_t size = 32;
    FILE * fp;
    text = NULL;
    getline(&text, &size, stdin);
    if (strlen(text) > 9 || strlen(text) < 2) {
        name1();
    }
    else {
        fp = fopen ("name1.txt", "w");
        fwrite(text, 1, sizeof(text), fp);
        fclose (fp);
    }
}

void name2(void)
{
    my_putstr("\e[0;32m[Jouer 1 choisit ton nom] \e[0m");
    char *text;
    size_t size = 32;
    FILE * fp;
    text = NULL;
    getline(&text, &size, stdin);
    if (strlen(text) > 9 || strlen(text) < 2) {
        name2();
    }
    else {
        fp = fopen ("name2.txt", "w");
        fwrite(text, 1, sizeof(text), fp);
        fclose (fp);
    }

}

int main()
{
    name1();
    name2();
    draw_menu();
    return (0);
}
