/*
** EPITECH PROJECT, 2021
** delivery
** File description:
** my_print_str
*/

#include "lib.h"

void my_print_str(va_list args)
{
    char *zebi = va_arg(args, char*);

    my_putstr(zebi);
}
