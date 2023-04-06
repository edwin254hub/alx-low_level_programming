#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @index: index of the bit to set
 * @n: pointer to the number to change
 * Return: 1 (success), or -1 (fail)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;
	*n = (*n | i);

	return (1);
}
