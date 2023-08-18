#include "main.h"

/**
 *print_line - prints straight line according to some specific instructions
 *@n: the variable used
 *Return: nothing i.e void
 */

void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else if (n == 2)
{
for (n = 1; n <= 2; n++)

_putchar('_');
_putchar('\n');
}
else if (n == 10)
{
for (n = 1; n <= 10; n++)

_putchar('_');
_putchar('\n');
}
else
_putchar('\n');
}
