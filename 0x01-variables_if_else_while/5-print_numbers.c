#include <stdio.h>

/**
 *main - Entry point. Prints base ten numbers (1 - 9)
 *Return: 0
 */

int main(void)
{
int a;

for (a = 0; a < 10; a++)
putchar(a + '0');
putchar('\n');
return (0);
}
