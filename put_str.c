#include "main.h"

/**
 * put_str - a function that prints any given string.
 * @args: given argument.
 *
 * Return: number of chars found in the string.
 */

int put_str(va_list args)
{
int i;
int Fcount = 0;
char *str = va_arg(args, char *);

/* check is the string is NULL or empty */
if (!str)
str = "(null)";

if (str[0] == '\0')
return (-1);

/* print every caracter in the string */
for (i = 0; str[i] != '\0'; i++)
{
Fcount += _putchar(str[i]);
}

return (Fcount);
}
