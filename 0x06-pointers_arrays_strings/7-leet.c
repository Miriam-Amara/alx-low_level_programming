#include "main.h"

/**
 *leet - function that encodes a string into 1337 (leet)
 *
 *@a: pointer parameter
 *Return: pointer
 */

char *leet(char *a)
{
	int i, j;

	char u[] = "aAeEoOtTlL";
	char v[] = "4433007711";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; u[j] != '\0'; j++)
		{
			if (a[i] == u[j])
				a[i] = v[j];
		}
	}
	return (a);
}
