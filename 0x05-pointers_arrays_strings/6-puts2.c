#include "main.h"
#include <string.h>

/**
 * puts2 - puts function
 * @str: parameters to be passed
 */

void puts2(char *str)
{
	int length, j;

	length = strlen(str);
	for (j = 0; j < length; j += 2)
		_putchar(str[j]);
	_putchar('\n');
}
