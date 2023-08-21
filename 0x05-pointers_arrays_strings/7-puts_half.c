#include "main.h"

/**
 *puts_half - this function prints half of a string
 *@str: the pointer
 *Return: nothing (void)
 */

void puts_half(char *str)
{
int l = 0, n;

for ( ; str[l] != '\0';)
{
l++;
}

if (l % 2 == 0)
{
n = l / 2;
for ( ; str[n] != 0; n++)
{
_putchar(str[n]);
}

}
else if (l % 2 == 1)
{
n = (l - 1) / 2;
for ( ; str[n] != '\0'; n++)
{
_putchar(str[n]);
}
}
_putchar('\n');
}
