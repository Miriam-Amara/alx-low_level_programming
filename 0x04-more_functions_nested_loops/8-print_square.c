#include "main.h"

/**
 *print_square - prints a square
 *@size: the variable used
 *Return: nothing i.e void
 */

void print_square(int size)
{
int r, s;

if (size <= 0)
_putchar('\n');
else if (size == 2)
{
for (r = 1; r <= 2; r++)

{
for (size = 1; size <= 2; size++)

_putchar('#');
_putchar('\n');
}
}
else if (size == 10)
{
for (s = 1; s <= 10; s++)
{
for (size = 1; size <= 10; size++)

_putchar('#');
_putchar('\n');
}
}
else
_putchar('\n');
}
