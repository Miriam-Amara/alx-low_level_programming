#include "main.h"

/**
 *print_alphabet - function that prints alphabets
 *main - Entry
 *
 *Return: 0
 */

void print_alphabet(void)

{
int alph;
for (alph = 97; alph <= 122; alph++)
{
_putchar(alph);
}
_putchar('\n');
}
