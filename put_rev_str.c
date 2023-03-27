#include "main.h"

/**
 * put_rev_str - a function that prints a string from end to start.
 * @args: given arguments.
 *
 * Return: Lenght of the reversed string.
 */

int put_rev_str(va_list args)
{
int Fcount = 0, i = 0;
char *s = va_arg(args, char *);

if (!s)
{
s = "(null)";
}

/* geting the lenght of string s */
while (s[i])
{
++i;
}

/* now we print the string from bottom to top */
while (i >= 0)
{
Fcount += _putchar(s[i]);
 --i;
}

Fcount--;
return (Fcount);
}
