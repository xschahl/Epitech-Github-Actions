/*
** EPITECH PROJECT, 2021
** xavier_schahl
** File description:
** tests_main.c
*/

#include "../include/my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_std(void)
{
    cr_redirect_stdout ();
    cr_redirect_stderr ();
}
