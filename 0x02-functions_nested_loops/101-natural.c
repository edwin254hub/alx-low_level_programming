#include <stdio.h>


/**
 * main - multiplies the sum of all multiple of 3 or 5
 * Return: 0 (succes)
 */

int main(void)

{
	int x, y = 0;

	while (x < 1024)
	{
	if ((x % 3 == 0) || (x % 5 == 0))
	{
	y += x;
	}
	x++;
	}
	printf("%d\n", y);
	return (0);
}
