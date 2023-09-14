#include "main.h"

/**
 *_strncpy - function that work exactly like strncpy
 *
 *@dest: first parameter pointer
 *@src: second parameter pointer
 *@n: parameter variable
 *Return: pointer dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
