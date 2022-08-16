#include <stdio.h>

/**
 * main - This is the function that prints itss file name
 * @argc: argc is a parameter
 * @argv: an array of a command line listed
 * Return: 0 for success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
