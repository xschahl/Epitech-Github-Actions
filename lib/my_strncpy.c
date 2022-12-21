/*
** EPITECH PROJECT, 2021
** xavier_schahl
** File description:
** list.c
*/

#include "lib.h"

char *my_strncpy(char *dest, char const *src, int nb)
{
    for (int i = 0; i < nb; i++) {
        if (src[i] == '\0') {
            dest[i] = '\0';
            return dest;
        }
        dest[i] = src[i];
    }
    return (dest);
}
