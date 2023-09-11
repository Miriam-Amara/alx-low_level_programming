#include "main.h"

/**
 *_strspn - function that gets the length of a prefix substring
 *
 *@s: pointer
 *@accept: pointer
 *Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int length = 0;

	for (i = 0; s[i] >= 'a' && s[i] <=    'z'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				length++;
		}
	}
	return (length);
}
