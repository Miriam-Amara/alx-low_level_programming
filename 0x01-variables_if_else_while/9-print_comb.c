#include <stdio.h>

/**
 *main - Entry point. Prints all possible combinations of single digits
 *Return: 0
 */

int main(void)
{
int a;

for (a = 0; a <= 9; a++)
{
if (a != 0)
{
putchar(',');
putchar(' ');
}
putchar(a + '0');
}
putchar('\n');
return (0);
}
