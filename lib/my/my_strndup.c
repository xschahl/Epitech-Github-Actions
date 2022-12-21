/*
** EPITECH PROJECT, 2021
** my_strndup
** File description:
** my_strndup
*/

#include "my.h"

char *my_strndup(char const *src, int nb)
{
    int i = 0;
    char *str = malloc(sizeof(char) * (my_strlen(src) + 1));

    for (; i != nb; i++)
        str[i] = src[i];
    str[i] = '\0';
    return (str);
}
