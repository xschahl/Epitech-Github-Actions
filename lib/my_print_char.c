/*
** EPITECH PROJECT, 2021
** xavier_schahl
** File description:
** my_print_char
*/

#include "lib.h"

void my_print_char(va_list args)
{
    char ziak = va_arg(args, int);

    my_putchar(ziak);
}
