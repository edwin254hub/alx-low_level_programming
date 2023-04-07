#include "main.h"

/**
 * flip_bits - returns the number of bits to flip
 *             to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;

	for (count = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((m & 1) != (n & 1))
			count++;
	}
	return (count);
}
