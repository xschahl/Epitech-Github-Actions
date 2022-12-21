/*
** EPITECH PROJECT, 2021
** delivery
** File description:
** my_printf
*/

#include "lib.h"

int flags(char *str, va_list args)
{
    int i = 0;
    char flag[] = {'d', 'i', 'c', '%', 's', '\0'};
    void(*tabp[])(va_list) = {
        my_print_nbr, my_print_nbr, my_print_char,
        my_pourcent, my_print_str};

    for (int i = 0; flag[i] != '\0'; i++) {
        if (str[0] == flag[i]) {
            tabp[i](args);
            return (0);
        }
    }
    return (0);
}

int my_printf(char *expr, ...)
{
    va_list args;
    char *str = expr;

    va_start (args, expr);
    for (; *str != '\0'; str += 1) {
        if (*str == '%') {
            str += 1;
            flags (str, args);
        } else
            my_putchar(*str);
    }
    va_end (args);
    return (0);
}
