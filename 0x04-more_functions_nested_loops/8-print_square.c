#include "main.h"

/**
 *print_square - prints a square
 *@size: the variable used
 *Return: nothing i.e void
 */

void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int r, s;

for (r = 1; r <= size; r++)
{
for (s = 1; s <= size; s++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
