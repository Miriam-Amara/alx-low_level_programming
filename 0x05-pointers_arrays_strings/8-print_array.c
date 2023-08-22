#include <stdio.h>

/**
 *print_array - this function prints elements of an array of integers
 *@a: the pointer
 *@n: the variable
 *Return: nothing (void)
 */

void print_array(int *a, int n)
{
int w;

for (w = 0; w < n; w++)
{
if (w == 0)
printf("%d,", a[w]);

else
printf(" %d,", a[w]);
}
printf("\n");
}
