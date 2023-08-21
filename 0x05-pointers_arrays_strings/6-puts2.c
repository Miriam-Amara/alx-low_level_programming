#include "main.h"

/**
 *puts2 - this function prints every other character of a string
 *@str: the pointer
 *Return: nothing as in void
 */

void puts2(char *str)
{
for ( ; *str != '\0'; str++)
{
_putchar(*str++);
}
_putchar('\n');
}
