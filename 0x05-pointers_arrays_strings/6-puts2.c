#include "main.h"

/**
 *puts2 - this function prints every other character of a string
 *@str: the pointer
 *Return: nothing as in void
 */

void puts2(char *str)
{
int p;
int l = 0;
for ( ; str[l] != '\0'; )
l++;

for (p = 0; p < l; p += 2)
_putchar(str[p]);
_putchar('\n');
}
