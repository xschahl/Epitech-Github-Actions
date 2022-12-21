/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** display a number given as param
*/

#include <stdio.h>
#include <unistd.h>
#include "my.h"

void my_put_nbr(int nb)
{
    int put_nbr;

    if (nb == -2147483647)
        write(1, "-2147483647", 11);
    if (nb == 2147483647)
        write(1, "2147483647", 11);
    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
        }
    if (nb > 9)
        my_put_nbr(nb / 10);
    put_nbr = nb % 10 + '0';
    my_putchar(put_nbr);
}
