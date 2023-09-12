#include "main.h"

/**
 *_isdigit - checks for digit from 0 to 9
 *@c: the variable used
 *Return: 1 if c is a digit and 0 if otherwise
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
return (0);
}
