#include <stdio.h>

/**
 *main - Entry point. Prints base sixteen numbers
 *Return: 0
 */

int main(void)
{
int a, b;

for (a = 0; a < 10; a++)
putchar(a + '0');

for (b = 'a'; b >= 'a' && b <= 'f'; b++)
putchar(b);

putchar('\n');
return (0);
}
