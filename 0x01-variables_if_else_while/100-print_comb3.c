#include <stdio.h>

/**
 *main - Entry point. Prints all possible combinations of two digits numbers
 *Return: 0
 */

int main(void)
{
int a, b;

for (a = 0; a <= 8; a++)
{
for (b = a + 1; b <= 9; b++)
{
if (a != 0 || b != 1)
{
putchar(',');
putchar(' ');
}
putchar(a + '0');
putchar(b + '0');
}
}
putchar('\n');
return (0);
}
