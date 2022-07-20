#include "main.h"

/**
 * set_string - sets the value of a pointer to char
 * @s: the value to be modified
 * @to: the new value
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
