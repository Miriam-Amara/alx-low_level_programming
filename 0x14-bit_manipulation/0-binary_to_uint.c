#include "main.h"

/**
 * binary_to_uint - convt a binary number to unsigned int
 * @b: string that  contains the binary number
 *
 * Return: on success the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;

	if (!b)
		return (0);

	for ( ; *b ; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);
		dec = 2 * dec + (*b - '0');
	}

	return (dec);
}
