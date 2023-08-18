#include "main.h"

/**
 *more_numbers - prints 1 to 14 ten times
 *Return: nothing i.e void
 */

void more_numbers(void)
{
int q;

for (q = 1; q <= 10 ; q++)

{
int a;

for (a = 0; a <= 14; a++)

{
if (a >= 10)
_putchar(a / 10 + '0');
_putchar(a % 10 + '0');
}
_putchar('\n');
}
}
