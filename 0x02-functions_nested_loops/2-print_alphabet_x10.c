#include "main.h"

/**
 *print_alphabet_x10 - this function prints lowercase alphabets 10 times
 *main - Entry
 *
 *Return: 0
 */

void print_alphabet_x10(void)

{
int alph_loop;
for (alph_loop = 1; alph_loop <= 10; alph_loop++)
{
int alph;
for (alph = 97; alph <= 122; alph++)
{
_putchar(alph);
}
_putchar('\n');
}
}
