/*
** EPITECH PROJECT, 2021
** my_strncat
** File description:
** write
*/

#include "lib.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int count = 0;
    int x = my_strlen(dest);

    while (src[count] != '\0' && count < nb) {
        dest[count + x] = src[count];
        count++;
    }
    dest[count + x] = '\0';
    return (dest);
}
