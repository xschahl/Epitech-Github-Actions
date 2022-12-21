/*
** EPITECH PROJECT, 2022
** xavier.schahl
** File description:
** my.h
*/

#include "my.h"

char *my_file(char *filename, char *buffer)
{
    struct stat buf;
    int fd;

    stat(filename, &buf);
    buffer = malloc(sizeof(char) * (buf.st_size + 1));
    fd = open(filename, O_RDONLY);
    read(fd, buffer, buf.st_size);
    buffer[buf.st_size] = '\0';
    close(fd);
    return buffer;
}
