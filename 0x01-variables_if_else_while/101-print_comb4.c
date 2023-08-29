#include <stdio.h>

/**
 *main - Entry point. Prints all possible combinations of three digits numbers
 *Return: 0
 */

int main(void)
{
int a, b, c, d, e;
c = 1;
e = 2;

for (a = 0; a <= 7; a++)
{
for (b = c; b <= 8; b++)
{
for (d = e; d <= 9; d++)
{
if (a != 0 || b != 1 || d != 2)
{
putchar(',');
putchar(' ');
}
putchar(a + '0');
putchar(b + '0');
putchar(d + '0');
}
}
if (c <= 8 || e <= 9)
{
c++;
e++;
}
}
putchar('\n');
return (0);
}
