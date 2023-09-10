#include "main.h"

/**
 *reverse_array - a function that reverses the content of an array of integers
 *
 *@a: pointer
 *@n: variable
 *Return: void i.e nothing
 */

void reverse_array(int *a, int n)
{
	int l, o, v, e;

	for (l = 0; l < n;)
		l++;

	for (o = 0, v = l - 1; o < v; o++, v--)
	{
		e = a[v];
		a[v] = a[o];
		a[o] = e;
	}
}
