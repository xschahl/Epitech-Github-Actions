/*
** EPITECH PROJECT, 2021
** xavier_schahl
** File description:
** my_strndup
*/

#include "lib.h"

char *my_strndup(char const *src, int nb)
{
    int i = 0;
    char *str = malloc(sizeof(char) * (my_strlen(src) + 1));

    for (; i != nb; i++)
        str[i] = src[i];
    str[i] = '\0';
    return (str);
}
