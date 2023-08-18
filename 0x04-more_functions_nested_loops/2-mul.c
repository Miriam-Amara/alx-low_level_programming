#include <stdio.h>

/**
 *mul - function that multiplies two integers
 *@a: the first variable
 *@b: the second variable
 *Return: 0
 */

int mul(int a, int b)
{
int mul = a * b;
_putchar(mul / 10 + '0');
_putchar(mul % 10 + '0');
return (mul);
}
