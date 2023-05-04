#include "main.h"
#include <unistd.h>
/**
 * _putchar - print character c to stdout
 * @c: The character to be printer
 * Return: 1
 * On error: -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
