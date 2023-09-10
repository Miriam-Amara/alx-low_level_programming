#include "main.h"

/**
 *cap_string - function that capitalizes all words of a string
 *
 *@str: pointer parameter
 *Return: pointer
 */

char *cap_string(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] == ' ' ||
		    str[j] == '\t' ||
		    str[j] == '\n' ||
		    str[j] == ',' ||
		    str[j] == ';' ||
		    str[j] == '.' ||
		    str[j] == '!' ||
		    str[j] == '?' ||
		    str[j] == '"' ||
		    str[j] == '(' ||
		    str[j] == ')' ||
		    str[j] == '}' ||
		    str[j] == '{')

			if (str[j + 1] >= 97 && str[j + 2] <= 122)
				str[j + 1] -= 32;
	}
	return (str);
}
