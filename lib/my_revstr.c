/*
** EPITECH PROJECT, 2021
** xavier_schahl
** File description:
** Reverses a string.
*/

#include "lib.h"

char *my_revstr(char *str)
{
    char tmp;
    int j = my_strlen(str) - 1;

    for (int i = 0; i < j; i++) {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        j--;
    }
    return (str);
}
