/*
** EPITECH PROJECT, 2021
** xavier.schahl
** File description:
** list.c
*/

#include "lib.h"

linked_list_t *my_print_list(linked_list_t *list)
{
    while (list != NULL) {
        my_put_nbr(list->data);
        my_putchar(' ');
        list = list->next;
    }
    my_putchar('\n');
}
