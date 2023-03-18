#include <stdio.h>
/**
 * main - A program that print the size of various computer types
 * Return: 0 (success)
 */
int main(void)
{
	char d;
	int a;
	long int b;
	long long int c;
	float f;

printf("size of char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
printf("stderr, size of variables\n")
return (0);
}
