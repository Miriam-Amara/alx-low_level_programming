#include "main.h"

/**
 *_islower - this function checks whether a character is a lowercase
 *@c: the paramete that is checked
 *main - Entry
 *
 *Return: 1 when c is an alphabet and 0 when it is not
 */

int _islower(int c)

{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
