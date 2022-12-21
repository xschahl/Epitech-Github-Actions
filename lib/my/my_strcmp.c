/*
** EPITECH PROJECT, 2021
** my_strcpy
** File description:
** write a function that copies a string
*/

#include "lib.h"

int my_strcmp(const char *a, const char *b)
{
    if (my_strlen(a) != my_strlen(b))
        return 84;
    for (int x = 0; a[x] != '\0'; x++) {
        if (a[x] != b[x])
            return 84;
    }
    return 0;
}
