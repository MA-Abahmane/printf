#include "main.h"

/**
 * _putchar - a function that writes a given character to stdout.
 * @c: given character.
 *
 * Return: 1 if successful, else return -1 on error.
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
