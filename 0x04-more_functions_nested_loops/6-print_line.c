#include "main.h"

/**
 * print_line - function
 *
 * @n: parameter
 *
 * return: return value
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
			_putchar(95);
	}
	_putchar(10);
}
