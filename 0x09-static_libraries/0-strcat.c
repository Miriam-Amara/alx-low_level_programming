#include "main.h"

/**
 *_strcat - concatenates two strings
 *
 *@dest: first parameter pointer
 *@src: second parameter pointer
 *Return: a pointer to the resulting string dest
 */


char *_strcat(char *dest, char *src)
{
	int i, j, k;
	int l1 = 0, l2 = 0;

	for (i = 0; dest[i] != '\0'; i++)
		l1++;

	for (j = 0; src[j] != '\0'; j++)
		l2++;

	for (k = 0; k < l2; k++)
		dest[l1 + k] = src[k];

	return (dest);
}
