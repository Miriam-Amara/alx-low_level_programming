#include "main.h"

/**
 *rot13 - function that encodes a string using rot13
 *
 *@d: pointer parameter
 *Return: pointer
 */

char *rot13(char *d)
{
	int i, j;
	char data[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char fake[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; d[i] != '\0'; i++)
	{
		for (j = 0; data[j] != '\0'; j++)
		{
			if (d[i] == data[j])
			{
				d[i] = fake[j];
				break;
			}
		}
	}
	return (d);
}
