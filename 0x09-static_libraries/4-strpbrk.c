#include "main.h"

/**
 * _strpbrk - Main function in the program
 * @s: source
 * @accept: accepted characters
 *
 * Return: string after the first character that is accepted
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}
