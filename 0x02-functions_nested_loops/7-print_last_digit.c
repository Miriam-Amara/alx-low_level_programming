#include "main.h"

/**
 *print_last_digit - this function prints the last digit of number
 *@w: the parameter to be checked
 *Return: 0
 */

int print_last_digit(int w)
{
int q;

if (w < 0)
w = -w;

q = w % 10;
if (q < 0)
q = -q;
_putchar(q + '0');
return (q);
}
