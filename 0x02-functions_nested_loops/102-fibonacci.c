#include <stdio.h>

/**
 *main - Entry. Prints the first 50 Fibonacci numbers, starting with 1 and 2
 *Return: 0
 */

int main(void)
{
	unsigned long int a, i, j, k = 0;

	i = 1;
	j = 1;
	k = 0;

	printf("%lu, ", i);

	for (a = 1; a < 50; a++)
	{
		k = j;
		j = i;
		i = j + k;
		if (a == 49)
			printf("%lu", i);
		else
			printf("%lu, ", i);
	}
	putchar('\n');

	return (0);
}
