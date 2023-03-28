#include "main.h"

/**
 * put_str - a function that prints any given string.
 * @args: given argument.
 *
 * Return: number of chars found in the string.
 */

int put_str(va_list args)
{
int i = 0;
int Fcount = 0;

char *s = va_arg(args, char *);

/* check is the string is NULL or empty */
if (!s)
str = "(null)";

if (s[0] == '\0')
return (-1);

/* print every caracter in the string */
while (s[i] != '\0')
{
Fcount += _putchar(s[i]);
++i;
}

return (Fcount);
}
