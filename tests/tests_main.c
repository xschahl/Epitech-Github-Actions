/*
** EPITECH PROJECT, 2021
** xavier.schahl
** File description:
** tests_myprintf.c
*/

#include "../include/my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_std(void)
{
    cr_redirect_stdout ();
    cr_redirect_stderr ();
}
