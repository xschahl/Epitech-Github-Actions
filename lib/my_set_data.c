/*
** EPITECH PROJECT, 2021
** xavier_schahl
** File description:
** list.c
*/

#include "lib.h"

int my_set_data(linked_list_t *list, int data, int pos)
{
    char x;

    if (my_is_empty_list(list) == 84)
        return x;
    for (int count = 0; count < pos; count++) {
        if (list->next == NULL) {
            return x;
        }
        list = list->next;
    }
    return list->data;
}
