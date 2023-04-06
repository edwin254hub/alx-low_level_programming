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
	int a;
	unsigned int decimal = 0;
	int len = strlen(b);

	if (b == NULL)
		return (0);

	for (a = 0; a < len; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
		decimal = decimal * 2 + (b[a] - '0');
	}
	return (decimal);
}

