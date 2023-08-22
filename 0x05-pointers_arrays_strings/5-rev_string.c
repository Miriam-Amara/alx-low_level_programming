#include "main.h"

/**
 *rev_string - this is a fuction that reverses a string
 *@s: the pointer
 *Return: nothing as in voi
 */

void rev_string(char *s)
{
int u, v;
char swap;
int l = 0;
for (; s[l] != 0;)
l++;

for (u = 0, v = l - 1; u < v; u++, v--)
{
swap = s[u];
s[u] = s[v];
s[v] = swap;
}
}
