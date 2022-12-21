/*
** EPITECH PROJECT, 2021
** xavier_schahl
** File description:
** my.h
*/

#include <stdarg.h>
#include <stdlib.h>
#include <ncurses.h>
#include <unistd.h>
#include <sys/types.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <time.h>
#include <getopt.h>
#include <dirent.h>
#include <pwd.h>
#include <grp.h>

#ifndef MY_H
    #define MY_H

void my_putchar(char c);
void my_put_nbr(int nb);
int my_strlen(char const *str);
void my_putstr(char const *str);
char *my_revstr(char *str);
char *my_strncat(char *dest, char const *src, int nb);
char *my_strdup(char const *src);
char *my_strcpy (char *dest , char const *src);
int my_getnbr(char const *str);
int check_nb(long result, char const *str);
int check_len(char const *str);
int is_digits(int digit);
int letter(char *first, char *second);
int len(char *first, char *second);
int no_argv(void);
int file_error(char *str);
int empty_file(void);
int my_strcmp(const char *a, const char *b);
char *my_itoa(int nbr);
char *my_file(char *filename, char *buffer);
int **my_str_to_nb_array(char const *argv, char delim);
char **my_str_to_word_array(char const *argv);
void my_pourcent(va_list args);
void my_print_char(va_list args);
void my_print_nbr(va_list args);
void my_print_str(va_list args);
int flags (char *str, va_list args);
int my_printf(char *expr, ...);
void my_print_tab(char **map);
int my_is_digits(char *str);
char *my_strncpy(char *dest, char const *src, int nb);
int my_strncmp(const char *a, const char *b, int nb);
char *my_strndup(char const *src, int nb);

#endif /* !MY_H */
