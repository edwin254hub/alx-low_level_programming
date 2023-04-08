#include "main.h"


/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int i;
	char *b;

	i = 1;
	b = (char *)&i;

	return ((int) *b);
}
