#include <stdio.h>

/**
 * main - This is the main function in this program
 *
 * Return: always returns 0
 */
int main(void)
{
	char var1;
	int var2;
	long int var3;
	long long int var4;
	float f;

	printf("Size of a char:%lu byte(s) \n", (unsigned long)sizeof(var1));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(var2));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(var3));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(var4));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
