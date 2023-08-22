#include "main.h"

/**
 *print_rev - this function prints string in reverse
 *@s: the pointer
 *Return: nothing as in void
 */

void print_rev(char *s)
{
int k;
int l = 0;
for (; *s != '\0';)
{
l++;
s++;
}

s--;
for (k = l; k > 0; k--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
