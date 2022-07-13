#include <stdio.h>

/**
 * main - The main function in the program
 *
 * Return: Always 0
 */
int main(void)
{
	int alpha;
	int beta;

	for (alpha = 48; alpha <= 57; alpha++)
	{
		for (beta = 49; beta <= 57; beta++)
		{
			if (beta > alpha)
			{
				putchar(alpha);
				putchar(beta);
				if (alpha != 56 || beta != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);

	return (0);
}
