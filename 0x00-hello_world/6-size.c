#include <stdio.h>
/**
 * main - A program that print the size of various computer types
 * Return: 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
