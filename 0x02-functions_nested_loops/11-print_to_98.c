#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - primary function of the program
 *
 * @n: parameter
 *
 * Return: numbers
 */
void print_to_98(int n)
{
	int numbers = 98;

	if (n > numbers)
	{
		while (n >= numbers)
		{
			if (n != numbers)
			{
				printf("%d%s", n, ", ");
			}
			else
			{
				printf("%d", n);
			}
			n--;
		}
	}
	else
	{
		while (n <= numbers)
		{
			if (n != numbers)
			{
				printf("%d%s", n, ", ");
			}
			else
			{
				printf("%d", n);
			}
			n++;
		}
	}
	putchar(10);
}
