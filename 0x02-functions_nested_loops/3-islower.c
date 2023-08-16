#include "main.h"

/**
 *_islower - this function checks whether a character is a lowercase
 *@c: the paramete that is checked
 *main - Entry
 *
 *Return: 0
 */

int _islower(int c)

{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
