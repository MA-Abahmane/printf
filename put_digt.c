#include "main.h"
#include <unistd.h>

/**
 * put_digt - a function that prints any given integers.
 * @args: given argument.
 *
 * Return: number of digits found.
 */

int put_digt(va_list args)
{
int Fcount = 0;
int decimal = 1;
long int num2;
long int num = va_arg(args, int);

/* check if num is negative  */
if (num < 0)
{
Fcount += _putchar('-');
num *= -1;
}

/* check if num is negative  */
if (num < 10)
return (Fcount += _putchar(num + '0'));

/* For numbers that are passed 9 */
num2 = num;

while (num2 > 9)
{
decimal *= 10;
num2 /= 10;
}

while (decimal >= 1)
{
Fcount += _putchar(((num / decimal) % 10) + '0');
decimal /= 10;
}

return (Fcount);
}
