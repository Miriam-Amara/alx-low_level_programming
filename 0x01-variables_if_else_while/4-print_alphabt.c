#include <stdio.h>

/**
 *main - Entry point. prints lowercase alphabets with the execption of q and e
 *Return: 0
 */

int main(void)
{
int alph = 'a';

while (alph >= 'a' && alph <= 'z')
{
if (alph == 'q' || alph == 'e')
{
alph++;
continue;
}
putchar(alph);
alph++;
}
putchar('\n');

return (0);
}
