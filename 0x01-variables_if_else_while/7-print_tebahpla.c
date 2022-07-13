#include <stdio.h>

/**
 * main - This is the primary function of the program
 *
 * Return: 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}

	putchar(10); /*New line*/

	return (0);
}
