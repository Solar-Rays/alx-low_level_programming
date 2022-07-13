#include <stdio.h>

/**
 * main - The primary function in this program
 *
 * Return: Always 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		}
	}
	putchar(10); /*New line*/

	return (0);
}

