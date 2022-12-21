/*
** EPITECH PROJECT, 2021
** xavier.schahl
** File description:
** list.c
*/

#include "lib.h"

char **my_str_to_word_array(char const *argv)
{
    int i = 0;
    int total = 0;
    char **buffer;

    for (int i = 0; argv[i] != '\0'; i++)
        if (argv[i] == ' ' || argv[i] == '\n')
            total++;
    buffer = malloc(sizeof(char *) * (total + 2));
    for (int count = 0, j = 0; i <= my_strlen(argv); i++, count++)
        if (argv[i] == ' ' || argv[i] == '\n' || argv[i] == '\0') {
            buffer[j] = malloc(sizeof(char) * (count + 2));
            my_strncpy(buffer[j], &argv[i - count], count + 1);
            buffer[j++][count + 1] = '\0';
            buffer[j] = NULL;
            count = -1;
        }
    return (buffer);
}
