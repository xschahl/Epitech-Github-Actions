/*
** EPITECH PROJECT, 2022
** error
** File description:
** error
*/

#include "my.h"

int my_is_digits(char *str)
{
    for (int x = 0; str[x] != '\0'; x++) {
        if (str[x] < '0' || str[x] > '9')
            return 84;
    }
    return 0;
}
