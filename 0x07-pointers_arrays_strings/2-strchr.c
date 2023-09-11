#include "main.h"

/**
 *_strchr - function that locates a character in a string
 *
 *@s: pointer
 *@c: variable
 *Return: pointer to the first occurrence of the character c in the string s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
