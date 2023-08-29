#include <stdio.h>
/**
 *main - Entry point. Prints both lower and uppercase letters
 *Return: 0
 */
int main(void)
{
int alph_lower = 'a';
int alph_upper = 'A';
while (alph_lower >= 'a' && alph_lower <= 'z')
{
putchar(alph_lower);
alph_lower++;
}
while (alph_upper >= 'A' && alph_upper <= 'Z')
{
putchar(alph_upper);
alph_upper++;
}
putchar('\n');
return (0);
}
