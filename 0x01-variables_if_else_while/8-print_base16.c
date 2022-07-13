#include <stdio.h>

/**
 * main - The primary function in the program
 *
 * Return: Always 0
 *
 */
int main(void)
{
	char m;
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (m = 'a'; m <= 'f'; m++)
	{
		putchar(m);
	}
	putchar(10);

	return (0);
}
