#include "main.h"

/**
 *print_most_numbers - this function prints from 0 to 9 excluding 2 and 4
 *Return: nothing i.e void
 */

void print_most_numbers(void)
{
int y;

for (y = 0; y <= 0; y++)
{
int a;

for (a = 0; a <= 9; a++)

{
if (a == 2 || a == 4)
continue;
_putchar(a + '0');
}
_putchar('\n');
}
}
