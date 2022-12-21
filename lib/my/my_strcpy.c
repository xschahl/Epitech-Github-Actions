/*
** EPITECH PROJECT, 2021
** my_strcpy
** File description:
** write a function that copies a string
*/

#include "lib.h"

char *my_strcpy(char *dest , char const *src)
{
    int count = 0;

    while (src[count] != '\0') {
        dest[count] = src[count];
        count++;
    }
    dest[count] = '\0';
    return (dest);
}
