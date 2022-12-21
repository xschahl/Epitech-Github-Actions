/*
** EPITECH PROJECT, 2021
** xavier.schahl
** File description:
** list.c
*/

#include "my.h"

static int *my_intncpy(int *dest, char const *src, int n)
{
    int i = 0;

    for (i = 0; i < n; i++) {
        if (src[i] == '\0') {
            dest[i] = '\0';
            return (dest);
        }
        dest[i] = src[i] - 48;
    }
    return (dest);
}

int **my_str_to_nb_array(char const *argv, char delim)
{
    int i = 0;
    int total = 0;
    int **buffer;

    for (int i = 0; argv[i] != '\0'; i++)
        argv[i] == delim ? total++ : 0;
    buffer = malloc(sizeof(int *) * (total + 2));
    for (int count = 0, j = 0; i <= my_strlen(argv); i++, count++)
        if (argv[i] == delim || argv[i] == '\0') {
            buffer[j] = malloc(sizeof(int) * (count + 2));
            my_intncpy(buffer[j], &argv[i - count], count + 1);
            buffer[j++][count + 1] = '\0';
            buffer[j] = NULL;
            count = -1;
        }
    return (buffer);
}
