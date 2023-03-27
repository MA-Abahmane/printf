#include "main.h"

/**
 * put_rev_str - a function that prints a string from end to start.
 * @args: given arguments.
 *
 * Return: Lenght of the reversed string.
 */

int print_rev_str(va_list args)
{

	int count_fun = 0, i = 0;
	char *s = va_arg(args, char *);

	if (!s)
		s = "(null)";
	while (s[i])
	{
		i++;
	}
	while (i >= 0)
	{
		count_fun += _putchar(s[i]);
		i--;
	}
	count_fun--;
	return (count_fun);
}
