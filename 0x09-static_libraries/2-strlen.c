#include "main.h"

/**
 *_strlen - this function returns the length of a string
 *@s: the pointer
 *Return: length of a string
 */

int _strlen(char *s)
{
int len = 0;

for ( ; *s != '\0'; s++)
{
len++;
}
return (len);
}
