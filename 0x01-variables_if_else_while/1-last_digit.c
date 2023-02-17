#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - A code that prints the last digit in n
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	a = n % 10;
	if (a > 5)
		printf("Last digit of %d id %d and is greator that 5\n", a, n);
	if (a == 0)
		printf("Last digit of %d id %d and is 0\n", a, n);
	if (a < 6 && a != 0)
		printf("Last digit of %d id %d and is less than 6 and not 0\n", a, n);
	return (0);
}
