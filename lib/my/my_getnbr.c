/*
** EPITECH PROJECT, 2021
** my_getnbr
** File description:
** my getnbr
*/

#include "my.h"

#include <stdio.h>

int is_digits(int digit)
{
    if (digit >= 48 && digit <= 57) {
        return 1;
    } else
        return 0;
}

static int sign(char const *str)
{
    int count = 0;
    int sign = 1;

    while (str[count] == '-' || str[count] == '+') {
        if (str[count] == '-')
            sign *= -1;
        count++;
    }
    return sign;
}

int check_len(char const *str)
{
    int count = 0;
    int sign = 0;

    while (str[count] != '\0') {
        if (str[count] == '-' || str[count] == '+') {
            sign++;
        }
        count++;
    }
    if ((count - sign) >= 10)
        return 0;
    return 1;
}

int check_nb(long result, char const *str)
{
    if (result > 2147483647 || result <= -2147483647 || !check_len(str)) {
        return 0;
    } else
        return ((int) result);
}

int my_getnbr(char const *str)
{
    int count = 0;
    long result = 0;
    int my_sign = sign(str);

    while (str[count] != '\0') {
        if (is_digits(str[count])) {
            result = result * 10;
            result += str[count] - 48;
        } else if (str[count] != '-' && str[count] != '+')
            return check_nb(result, str) * my_sign;
        count++;
    }
    return check_nb(result, str) * my_sign;
}
