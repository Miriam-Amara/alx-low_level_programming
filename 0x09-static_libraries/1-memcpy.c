#include "main.h"

/**
 *_memcpy - unction that copies memory area
 *
 *@dest: pointer
 *@src: pointer
 *@n: variable
 *Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;

	for (i = 0, j = 0; i < n; i++, j++)
		*(dest + j) = *(src + i);

	return (dest);
}
