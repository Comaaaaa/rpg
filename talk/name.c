/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "../include/my.h"

void name1(void)
{
    my_putstr("\e[0;33m[Choisi un nom entre 1 et 8 caractères :] \e[0m");
    char *text;
    size_t size = 32;
    FILE * fp;
    text = NULL;
    getline(&text, &size, stdin);
    if (my_strlen(text) > 9 || my_strlen(text) < 2) {
        name1();
    }
    else {
        fp = fopen ("text/name.txt", "w");
        fwrite(text, 1, my_strlen(text), fp);
        fclose (fp);
    }
}

void name2(void)
{
    my_putstr("\e[0;32m[Choisi un nom entre 1 et 8 caractères :] \e[0m");
    char *text;
    size_t size = 32;
    FILE * fp;
    text = NULL;
    getline(&text, &size, stdin);
    if (my_strlen(text) > 9 || my_strlen(text) < 2) {
        name2();
    }
    else {
        fp = fopen ("text/pname.txt", "w");
        fwrite(text, 1, sizeof(text), fp);
        fclose (fp);
    }
}

void write_file(char const *filepath, char *str)
{
    FILE *fp = fopen (filepath, "r+");
    fwrite(str, 1, sizeof(str), fp);
    fclose(fp);
}
