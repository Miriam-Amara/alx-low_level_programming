#include "main.h"

/**
 *_strcmp - function that works exactly like strcmp
 *
 *@s1: first parameter pointer
 *@s2: second parameter pointer
 *Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
