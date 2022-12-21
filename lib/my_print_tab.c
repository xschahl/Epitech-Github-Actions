/*
** EPITECH PROJECT, 2022
** xavier_schahl
** File description:
** error.c
*/

#include "lib.h"

void my_print_tab(char **map)
{
    for (int x = 0; map[x] != NULL; x++)
        my_putstr(map[x]);
}
