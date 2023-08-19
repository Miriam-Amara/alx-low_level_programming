#include "main.h"

/**
 *print_diagonal - prints diagonal lines
 *@n: input variable
 *Return: nothing void
 */

void print_diagonal(int n)
{
if (n <= 0)
{
_putchar ('\n');
}
else
{
int c, d;
for (d = 0; d < n; d++)
{
for (c = 0; c < d; c++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
