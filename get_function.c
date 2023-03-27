#include "main.h"

/**
 * get_function - a function that matcher the given
 *    specifiers "c" with its printing function.
 *
 * @c: the character that comes after '%'.
 * @args: given argument.
 *
 * Return: number of caracters fount in the given argument.
 */

int get_function(char c, va_list args)
{
int i, Fcount = 0;

/* match the specifiers with its function */
f_t matcher[] = {
/* t      f */
{'c', put_char},
{'s', put_str},
{'d', put_digt},
{'i', put_digt},
{'%', put_mod},
{'u', put_Udigt},
{0, NULL}
};

i = 0;
while (matcher[i].f)
{
if (matcher[i].t == c)
Fcount += matcher[i].f(args);

i++;
}

/* if no counts have been made, return (2) */
if (Fcount == 0)
{
Fcount += _putchar('%');
Fcount += _putchar(c);
}

return (Fcount);
}
