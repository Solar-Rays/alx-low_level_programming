#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * for multiples of 3 print fizz
 * for multiples of 5 print buzz
 * for multiples of 3 and 5 print fizzBuzz
 *
 * Return: Alwasys 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n == 1)
			printf("%d", n);
		else if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", n);
		}
	}
	printf("\n");
	return (0);
}
