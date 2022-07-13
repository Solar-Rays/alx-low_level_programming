#include <stdio.h>

/**
 * main - The primary function in the program
 *
 * Return: Always 0
 */
int main(void)
{
	int alpha;

	for (alpha = 48; alpha <= 57; alpha++)
	{
		putchar(alpha);
		if (alpha != 57)
		{
			putchar(44); /*Comma : ascii value for comma*/
			putchar(32); /*Space: ascii value for space*/
		}
	}
	putchar(10); /*New line*/

	return (0);
}
