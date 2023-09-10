#include "main.h"

/**
 *print_number - prints an integer
 *
 *@n: the parameter variable
 *Return: void i.e nothing
 */

void print_number(int n)
{
	int i, digit, reverse = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
	}

	for (i = 0; n > 0; i++)
	{
		digit = n % 10;
		reverse = (reverse * 10) + digit;
		n = n / 10;
	}

	for (i = 0; reverse > 0; i++)
	{
		digit = reverse % 10;
		reverse = reverse / 10;
		_putchar(digit + '0');
	}
}
