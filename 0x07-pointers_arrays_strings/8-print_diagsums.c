#include <stdio.h>

/**
 *print_diagsums - sum of the two diagonals of a square matrix of integers
 *
 *@a: pointer
 *@size: variable
 *Return: void as in nothing
 */

void print_diagsums(int *a, int size)
{
	int i, j = size - 1;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[j * size + (size - j - 1)];
		j--;
	}
	printf("%d, %d\n", sum1, sum2);
}
