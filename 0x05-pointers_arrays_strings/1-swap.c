#include "main.h"

/**
 *swap_int - this function swaps the value of integers using pointers
 *@a: first pointer
 *@b: second pointer
 *Return - nothing (void)
 */

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
