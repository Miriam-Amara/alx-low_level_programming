#include "main.h"

/**
 *print_rev - this function prints string in reverse
 *@s: the pointer
 *Return: nothing as in void
 */

void print_rev(char *s)
{
  int a;
  a = ((char *)(&s + 1))[-1]
}  
