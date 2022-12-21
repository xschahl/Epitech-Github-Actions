/*
** EPITECH PROJECT, 2021
** xavier.schahl
** File description:
** list.c
*/

#include "lib.h"

linked_list_t *my_free_data(linked_list_t *list, int pos)
{
    linked_list_t *before = list;
    linked_list_t *cur = list;

    if (is_empty_list(list) == 84)
        return NULL;
    if (pos == 0) {
        list = list->next;
        free(cur);
        return list;
    }
    for (int count = 0; count < pos; count++) {
        before = cur;
        cur = cur->next;
    }
    before->next = cur->next;
    free(cur);
    return list;
}
