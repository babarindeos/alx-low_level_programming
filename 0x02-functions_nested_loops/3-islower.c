#include "main.h"

/**
 * _islower - check if the char osis lowercase
 * @c is the char to be checked
 * Return: 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
