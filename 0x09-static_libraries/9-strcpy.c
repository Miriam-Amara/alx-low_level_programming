#include "main.h"

/**
 *_strcpy - this function concatnates words
 *@dest: destination pointer
 *@src: source pointer
 *Return: string
 */

char *_strcpy(char *dest, char *src)
{
int a;
int l = 0;
for (; src[l] != '\0';)
l++;
for (a = 0; a < l; a++)
dest[a] = src[a];
dest[a] = '\0';
return (dest);
}
