#include "main.h"
#include <unistd.h>

/**
 * _putchar - a function that writes a given character to stdout
 * @c: given character
 *
 * Return: 1 if successful, else return -1 on error.
 */

int _putchar(char c)
{
  static char buf[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buf, i);
		i = 0;
	}
	if (c != -1)
	{
		buf[i] = c;
		i++;
	}
	return (1);
}
