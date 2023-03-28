#include "main.h"
/**
 * _printf - It's like printf(), but better.
 * @format: given parameters.
 * Return: full size of a given string.
 */
int _printf(const char *format, ...)
{
int i = 0, count = 0, Fcount;
va_list args;
va_start(args, format);
if (!format || (format[0] == '%' && !format[1]))
return (-1);
/* check if the first char in format is % and its followed by a space alone */
if (format[0] == '%' && format[1] == ' ' && !format[2])
return (-1);
/* checking if format has a type conversion specifier (%d, %s, \n, \0...) */
while (format[i])
{
Fcount = 0;
if (format[i] == '%')
{
/* check if "%" is alone */
if (!format[i + 1] || (format[i + 1] == ' ' && !format[i + 2]))
{
count = -1;
break;
}
/* send the character infront of "%" to get_function to match */
Fcount += get_function(format[i + 1], args);
if (Fcount == 0)
count += _putchar(format[i + 1]);
if (Fcount == -1)
count = -1;
i++;
}
/* normal caracter print */
else
{
count += _putchar(format[i]);
}
i++;
if (count != -1)
count += Fcount;
}
va_end(args);
return (count);
}
