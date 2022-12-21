/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** display one by one character of a string
*/

#include "lib.h"

void my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}
