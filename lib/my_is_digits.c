/*
** EPITECH PROJECT, 2022
** xavier_schahl
** File description:
** my_is_digits
*/

#include "lib.h"

int my_is_digits(char *str)
{
    for (int x = 0; str[x] != '\0'; x++) {
        if (str[x] < '0' || str[x] > '9')
            return 84;
    }
    return 0;
}
