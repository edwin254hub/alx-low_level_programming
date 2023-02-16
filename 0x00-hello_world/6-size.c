#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computerk
 * Return: 0 (Success)
 */
int main(void)
{
	printf("Size of char: %lu byte(s)\n",(unsigned long) sizeof(char));
	printf("Size of int: %lu byte(s)\n",(unsigned long) sizeof(int));
	printf("Size of long int: %lu byte(s)\n",(unsigned long) sizeof(long int));
	printf("Size of long long int: %lu byte(s)\n",(unsigned long) sizeof(long long int));
	printf("Size of float: %lu byte(s)\n",(unsigned long) sizeof(float));
	return (0);
}
