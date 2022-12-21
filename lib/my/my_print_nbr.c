/*
** EPITECH PROJECT, 2021
** delivery
** File description:
** my_print_nbr
*/

#include "my.h"

void my_print_nbr(va_list args)
{
    int nb = va_arg(args, int);
    int new_nb = 0;

    if (nb < 0) {
        my_putchar('-');
        new_nb = -nb;
    } else
        new_nb = nb;
    if (new_nb > 9)
        my_put_nbr(new_nb / 10);
    my_putchar(new_nb % 10 + 48);
}
