#include "main.h"

/**
 * put_rot13 - a rot13 converter.
 * @agrs: given arguments.
 *
 * Return: number of caracters fount in the given argument.
 */

int put_rot13(va_list args)
{
int i, j;
char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

char *s = va_arg(args, char *);

for (j = 0; s[j]; j++)
{
if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
_putchar(s[j]);

else
{
for (i = 0; i <= 52; i++)
{

if (s[j] == rot13[i])
_putchar(ROT13[i]);
}
}
}

return (j);
}
