/*
** EPITECH PROJECT, 2021
** xavier_schahl
** File description:
** list.c
*/

#include "lib.h"

linked_list_t *my_get_list(linked_list_t *list, int pos)
{
    if (my_is_empty_list(list) == 84)
        return NULL;
    for (int count = 0; count < pos; count++) {
        if (list->next == NULL) {
            return NULL;
        }
        list = list->next;
    }
    my_putchar(list->data);
}
