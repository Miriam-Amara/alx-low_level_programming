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
	int i, m = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
				m = -15;
			if (s1[i] > s2[i])
				m = 15;
			break;
		}
	}
	if (m == -15)
		return (m);
	if (m == 15)
		return (m);
	else
		return (0);
}
