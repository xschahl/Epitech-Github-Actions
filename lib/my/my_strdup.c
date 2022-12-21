/*
** EPITECH PROJECT, 2021
** my_strdup
** File description:
** Write a function that allocates memory
*/

#include <stdlib.h>
#include "my.h"

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
