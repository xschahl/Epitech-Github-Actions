/*
** EPITECH PROJECT, 2021
** xavier_schahl
** File description:
** list.h
*/

#include "stdlib.h"

#ifndef LINKED_LIST_H
    #define LINKED_LIST_H

typedef struct linked_list {
    int data;
    struct linked_list *next;
} linked_list_t;

linked_list_t *my_create_list(int data);
linked_list_t *my_free_data(linked_list_t *list, int pos);
linked_list_t *my_free_list(linked_list_t *list);
linked_list_t *my_empty_list(void);
int my_is_empty_list(linked_list_t *list);
linked_list_t *my_add_list(linked_list_t *list, int data, int pos);
int my_list_len(linked_list_t *list);
linked_list_t *my_print_list(linked_list_t *list);
linked_list_t *my_get_list(linked_list_t *list, int pos);
int my_set_data(linked_list_t *list, int data, int pos);
int check_list(linked_list_t *list);
linked_list_t *my_sa(linked_list_t *list);
linked_list_t *my_sb(linked_list_t *list);
linked_list_t *my_pb(linked_list_t *tab[2]);
linked_list_t *my_pa(linked_list_t *tab[2]);
int check_order(char **av);
linked_list_t *compress(char *buffer);
void decompress(char buffer);
void my_print_char_list(linked_list_t *list);
linked_list_t *lower_list(linked_list_t *list, int pos);

#endif /* LINKED_LIST_H */
