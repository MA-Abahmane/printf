#include "main.h"

int put_bnr(va_list l)
{
unsigned int num = va_arg(l, unsigned int);
char *str = convert(num, 2, 0);

return (_puts(str));
}
