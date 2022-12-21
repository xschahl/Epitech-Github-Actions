/*
** EPITECH PROJECT, 2021
** my_putchar
** File description:
** display a character
*/

#include "lib.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
