/*
** EPITECH PROJECT, 2021
** xavier.schahl
** File description:
** list.c
*/

#include "list.h"
#include "my.h"

linked_list_t *my_create_list(int data)
{
    linked_list_t *list = malloc(sizeof(linked_list_t));

    if (!list)
        return NULL;
    list->data = data;
    list->next = NULL;
    return list;
}
