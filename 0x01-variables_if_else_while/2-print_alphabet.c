#include <stdio.h>

/**
 * main -The main function in the program
 *
 * Return: Always 0
 */
int main(void)
{
	int alpha = 97;

	while (alpha < 123)
	{
		putchar(alpha);
		alpha++;
	}
	putchar(10);

	return (0);
}
