/*
** EPITECH PROJECT, 2021
** mysh
** File description:
** mysh
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include "../include/my.h"

int count_word(char const *str)
{
    int word = 0;
    int i = 0;
    while (str[i] != '\0'){
        if (str[i] == ' ')
            word = word + 1;
        i++;
    }
    word = word + 1;
    return (word);
}

void my_putstr(char *str)
{
    write(2 , str , my_strlen(str));
}