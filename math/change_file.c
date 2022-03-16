/*
** EPITECH PROJECT, 2021
** d
** File description:
** d
*/

#include "my.h"

int add_int(int x, char  const *file)
{
    struct stat size;
    stat(file, &size);
    int fd = open(file, O_RDONLY);
    char *buffer = malloc(sizeof(char) *(size.st_size + 1));
    read(fd, buffer, size.st_size);
    buffer[size.st_size] = '\0';
    int res = my_getnbr(buffer) - x;
    write_file(file, my_put_nbr_to_char(res));
    return (res);
}
