/*
** EPITECH PROJECT, 2021
** xavier.schahl
** File description:
** list.c
*/

#include "list.h"

int my_list_len(linked_list_t *list)
{
    int len = 0;

    while (list != NULL) {
        list = list->next;
        len ++;
    }
    return len;
}
