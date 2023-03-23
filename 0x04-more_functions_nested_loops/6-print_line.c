#include "main.h"

/**
 * print_line - Print line
 * @n: length of line
 * Return: void
 */
void print_line(int n)
{
	int counter;

	if (n > 0)
	{
		for (counter = 0; counter <= n; counter++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
