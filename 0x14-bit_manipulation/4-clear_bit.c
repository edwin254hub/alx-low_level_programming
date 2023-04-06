#include "main.h"

/**
 * clear_bit - sets value of given bit to 0
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 * Return: 1 (success), or -1 (fail)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);
	i = 1 << index;

	if (*n & i)
		*n ^= i;
	return (1);
}
