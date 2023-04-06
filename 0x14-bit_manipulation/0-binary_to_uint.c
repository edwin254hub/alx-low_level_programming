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
	int len = strlen(b);

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		decimal = (decimal * 2) + (b[i] - '0');
	}
	return (decimal);
}

