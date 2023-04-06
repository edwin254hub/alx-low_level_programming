#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index of the bit
 * Return: value of the bit at index or or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int number_of_bit;

	if (index > 63)
		return (-1);

	number_of_bit = (n >> index) & 1;
	return (number_of_bit);
}

