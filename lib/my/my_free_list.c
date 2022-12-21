/*
** EPITECH PROJECT, 2021
** xavier.schahl
** File description:
** list.c
*/

#include "lib.h"

linked_list_t *my_free_list(linked_list_t *list)
{
    linked_list_t *tmp = NULL;

    while (list != NULL) {
        tmp = list->next;
        free(list);
        list = tmp;
    }
    return list;
}
