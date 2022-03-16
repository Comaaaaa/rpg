/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "my.h"

char    *my_revstr(char *str)
{
    int  i;
    int  j;
    char c;

    i = 0;
    j = my_strlen(str) - 1;
    while (i < j)
    {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
        i = i + 1;
        j = j - 1;
    }
    return (str);
}

char *my_put_nbr_to_char(int n)
{
    char *nbr = malloc(sizeof(char) * 100000000 + 1);
    int i = 0;
    int reste = 0;

    while (n != 0)
    {
        reste = n % 10;
        if (reste < 10) {
            nbr[i] = reste + 48;
            i++;
        }
        else {
            nbr[i] = reste + 87;
            i++;
        }
        n = n / 10;
    }
    nbr[i] = '\0';
    return (my_revstr(nbr));
}

int my_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        ++i;
    return (i);
}
