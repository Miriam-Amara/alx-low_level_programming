#include <stdio.h>

/**
 *main - Entry point. prints lowercase alphabets with an new line at the end
 *Return: 0
 */

int main(void)
{
int alph_low = 'a';

while (alph_low >= 'a' && alph_low <= 'z')
{
putchar(alph_low);
alph_low++;
}
putchar('\n');

return (0);
}
