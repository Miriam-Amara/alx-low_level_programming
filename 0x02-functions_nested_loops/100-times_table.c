#include "main.h"

/**
 *print_times_table - prints the n times table, starting with 0
 *@n: the parameter
 *Return: nothing as in void
 */

void print_times_table(int n)
{
	int i, j;
	int mul = 0;

	if (n >= 0 && n <= 15)
	{
		for (j = 0; j <= n; j++)
		{
			for (i = 0; i <= n; i++)
			{
				mul = j * i;
				if (i == 0)
					_putchar(mul + '0');
				else if (mul >= 100 && mul <= 999)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(mul / 100 + '0');
					_putchar((mul / 10) % 10 + '0');
					_putchar(mul % 10 + '0');
				}
				else if (mul >= 10 && mul <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(mul / 10 + '0');
					_putchar(mul % 10 + '0');
				}
				else if (mul >= 0 && mul <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(mul + '0');
				}
			}
			_putchar('\n');
		}
	}
}
