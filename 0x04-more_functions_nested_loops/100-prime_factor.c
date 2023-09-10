#include <stdio.h>

/**
 *main - Entry. prints the largest prime factor of the number 612852475143
 *Return: 0
 */

int main(void)
{
	unsigned int a;
	unsigned long int n = 612852475143;

	for (a = 2; a < n; a++)
	{
		if (n % a == 0)
			n = n / a;
	}
	printf("%lu\n", n);
	return (0);
}
