#include "main.h"

/**
 * _isdigit - Check for digit through 0 to 9
 * @c: Digit to check
 * Return: 1 or 0
 */

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
