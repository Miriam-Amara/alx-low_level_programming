#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - this function prints natural numbers from 1 to 98
 *@n: the variable used
 */

void print_to_98(int n)
{
int a, b;
if (n <= 98)
{
for (a = n; a <= 98; a++)
{
if (a != 98)
printf("%d, ", a);
else if (a == 98)
printf("%d\n", a);
}
}
else if (n >= 98)
{
for (b = n; b >= 98; b--)
{
if (b != 98)
printf("%d, ", b);
else if (b == 98)
printf("%d\n", b);
}
}
}