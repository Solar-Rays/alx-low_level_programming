#include <stdio.h>

/**
 * main - The primary function in the program
 *
 * Return: 0
 */

int main(void)
{
	int alpha;

	for (alpha = 97; alpha < 123; alpha++)
	{
		putchar(alpha);
	}
	for (alpha = 65; alpha < 91; alpha++)
	{
		putchar(alpha);
	}
	putchar(10);

	return (0);
}
