#include "main.h"

/**
 *_strncat - concatnates two strings
 *
 *@dest: first parameter pointer
 *@src: second parameter pointer
 *@n: parameter variable
 *Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, k;
	int l1 = 0;

	for (i = 0; dest[i] != '\0'; i++)
		l1++;

	for (k = 0; k < n && src[k] != '\0'; k++)
		dest[l1 + k] = src[k];

	return (dest);
}
