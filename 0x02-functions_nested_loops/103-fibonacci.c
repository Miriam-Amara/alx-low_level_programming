#include <stdio.h>

/**
 *main - Entry. Prints the sum of the even-valued terms
 *Return: 0
 */

int main(void)
{
	unsigned int sum, a, i, j, k;

	i = 1;
	j = 1;
	k = 0;
	sum = 0;

	for (a = 1; a < 50; a++)
	{
		k = j;
		j = i;
		i = j + k;

		if (i >= 4000000)
			break;

		if (i % 2 == 0)
			sum = sum + i;
	}
	printf("%u", sum);
	putchar('\n');

	return (0);
}
