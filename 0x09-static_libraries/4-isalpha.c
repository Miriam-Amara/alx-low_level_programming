#include "main.h"

/**
 *_isalpha - This function checks if a character is an alphabet
 *@c: the parameter to be checked
 *Return: 1 when c is an alphabet and 0 when it is not
 */

int _isalpha(int c)

{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
return (1);
else
return (0);
}
