#include "main.h"

/**
 * _isalpha -> the main function of this program
 * @c: a char
 * Return: returns 0 or 1
 *
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
