#include "main.h"
#include <stdio.h>

/**
 * factorial - calculates the factorial of any number
 * @n: input data for the program
 * Return: result
 */

int factorial(int n)
{
	if (n > 0 && n <= 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));
}
