#include "main.h"

/**
 * put_char - a function that prints a caracter.
 * @args: given argument.
 *
 * Return: 1 always.
 */

int put_char(va_list args)
{
char x = va_arg(args, int);

_putchar(x);
return (1);
}
