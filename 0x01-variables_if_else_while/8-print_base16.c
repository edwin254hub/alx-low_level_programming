#include <stdio.h>
/**
 * main - prints lowercase alphabets followed by line
 * followed by a new line
 * Return: 0 (success)
 */
int main(void)
{
	int num;
	char y;

	for (num = 0; num < 10; num++)

		putchar((num % 10) + '0');

	for (y = 'a'; y <= 'f'; y++)
	putchar(y);

putchar('\n');

return (0);

}
