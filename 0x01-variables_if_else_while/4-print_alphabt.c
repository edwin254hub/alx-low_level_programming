#include <stdio.h>
/**
 * main - A program that prints lowercase alphabets
 * followed by a new line, except e and q
 * Return: 0 (success)
 */

int main(void)
{
	char h;

	for (h = 'a'; h <= 'z'; h++)
	{
		if (h != 'e' && h != 'q')
			putchar(h);

	}

	putchar('\n');

	return (0);

}
