#ifndef MAIN_H
#define MAIN_H

/* librarys */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/* function prototypes */
int _printf(const char *format, ...);
int get_function(char c, va_list args);
int _putchar(char c);

/* type conversion specifiers */
int put_char(va_list args);
int put_str(va_list args);
int put_digt(va_list args);
int put_mod(va_list args);

/**
 * struct format - Struct for format
 * @match_er: Struct format
 */

typedef struct match_er
{
char t;
int (*f)(va_list);
} f_t;

#endif
