#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing binary number
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal = 0;
	int len;

	if (!b)
		return (0);
	for (len = 0; b[len] != '\0'; len++);

	for (len--, i = 1; len >= 0; len--, i *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			decimal += i;
		}
	}
	return (decimal);
}
