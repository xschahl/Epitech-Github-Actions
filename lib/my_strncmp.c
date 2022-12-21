/*
** EPITECH PROJECT, 2021
** my_strcpy
** File description:
** write a function that copies a string
*/

#include "lib.h"

int my_strncmp(const char *a, const char *b, int nb)
{
    for (int x = 0; a[nb] != '\0'; x++) {
        if (a[nb] != b[x])
            return 84;
        nb++;
    }
    return 0;
}
