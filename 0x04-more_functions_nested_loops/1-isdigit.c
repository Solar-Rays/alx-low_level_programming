#include "main.h"

/**
 * _isdigit - checks if a number is between 0 to 9
 * @c: input number
 * Return: 1 if is a number, 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
