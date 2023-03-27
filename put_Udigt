#include "main.h"

/**
 * put_Udigt - a function that prints Unsigned integers.
 * @args: given argument.
 *
 * Return: number of digits found.
 */

int put_Udigt(va_list args)
{
unsigned int Fcount = 0;
unsigned int decimal = 1;
unsigned int num2;
unsigned int num = va_arg(args, int);

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
