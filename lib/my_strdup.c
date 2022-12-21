/*
** EPITECH PROJECT, 2021
** xavier_schahl
** File description:
** Write a function that allocates memory
*/

#include "lib.h"

char *my_strdup(char const *src)
{
    int x = 0;
    char *result;

    while (src[x] != '\0')  {
        x++;
    }
    result = malloc(sizeof(char) * (x + 1));
    result = my_strcpy(result, src);
    return (result);
}
