/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** counts and return the number of character of a string passed in params
*/

#include "my.h"

int my_strlen(char const *str)
{
    int  count = 0;

    while (str[count] != '\0') {
        count++;
    }
    return count;
}
