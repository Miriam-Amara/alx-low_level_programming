#include "main.h"

/**
 *_strpbrk - function that searches a string for any of a set of bytes
 *
 *@s: pointer
 *@accept: pointer
 *Return: pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s != '\0'; s++)
	{
		for (i = 0; *(accept + i) != '\0'; i++)
		{
			if (*s == *(accept + i))
				return (s);
		}
	}
	return (0);
}
