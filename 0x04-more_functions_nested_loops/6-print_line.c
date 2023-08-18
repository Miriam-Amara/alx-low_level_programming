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
else
{
int j;
for (j = 1; j <= n; j++)

_putchar('_');
_putchar('\n');
}
}
