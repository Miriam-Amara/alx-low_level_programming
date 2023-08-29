#include <stdio.h>

/**
 *main - Entry point. Prints lowercase alphabets in reverse
 *Return: 0
 */

int main(void)
{
int alph = 'z';

while (alph <= 'z' && alph >= 'a')
{
putchar(alph);
alph--;
}
putchar('\n');

return (0);
}
