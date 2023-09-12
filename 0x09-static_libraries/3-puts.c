#include "main.h"

/**
 *_puts - this function prints a string using _putchar
 *@str: the pointer
 *Return: nothing (void)
 */

void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
