/*
** EPITECH PROJECT, 2021
** xavier.schahl
** File description:
** list.c
*/

#include "lib.h"

linked_list_t *lower_list(linked_list_t *list, int pos)
{
    linked_list_t *cur = list;

    for (int count = 0; count < pos; count++) {
        cur = cur->next;
    }
    cur->data += 32;
    return list;
}

linked_list_t *my_add_list(linked_list_t *list, int data, int pos)
{
    linked_list_t *before = list;
    linked_list_t *cur = list;
    linked_list_t *create = my_create_list(data);

    if (is_empty_list(list) == 84)
        return create;
    if (pos == 0) {
        create->next = list;
        return create;
    }
    for (int count = 0; count < pos; count++) {
        before = cur;
        cur = cur->next;
    }
    before->next = create;
    create->next = cur;
    return list;
}
