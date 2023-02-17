#include <stdio.h>
/**
 * main - prints lowercase alphabets in reverse
 * followed by a new line
 * Return: 0 (success)
 */
int main(void)
{
	char r;

	for (r = 'z'; r >= 'a'; r--)
		putchar(r);

	putchar('\n');

	return (0);

}
