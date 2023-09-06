#include <stdio.h>

/**
 *main - Entry. Prints first 98 Fibonacci numbers, starting with 1 and 2
 *Return: o
 */

int main(void)
{
	unsigned int a, i, j, k;

	i = 1;
	j = 1;
	k = 0;

	printf("%d, ", i);

	for (a = 1; a < 98; a++)
	{
		k = j;
		j = i;
		i = j + k;

		if (a == 97)
			printf("%u", i);
		else
			printf("%u, ", i);
	}
	putchar('\n');

	return (0);
}
