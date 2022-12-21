/*
** EPITECH PROJECT, 2021
** delivery
** File description:
** my_print_char
*/

#include "my.h"

void my_print_char(va_list args)
{
    char ziak = va_arg(args, int);

    my_putchar(ziak);
}
