/*
** EPITECH PROJECT, 2021
** xavier_schahl
** File description:
** my_itoa
*/

#include "lib.h"

static int my_nbrlen(int nbr)
{
    int	div = 1;
    int count;

    for (count = 1; nbr / div >= 1; count++)
        div = div * 10;
    return (count);
}

char *my_itoa(int nbr)
{
    char *string;
    char *x = "0";
    int	count = my_nbrlen(nbr) - 1;

    if (nbr == 0)
        return x;
    if ((string = malloc(sizeof(char) * my_nbrlen(nbr))) == NULL)
        return NULL;
    count = my_nbrlen(nbr) - 1;
    string[count] = '\0';
    for (int div = 10; count > 0; count--) {
        string[count - 1] = (nbr % div) + 48;
        nbr = nbr / 10;
    }
    return string;
}
