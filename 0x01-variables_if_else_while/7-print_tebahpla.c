#include <stdlib.h>
#include <stdio.h>

/**
 * main - Print lower case alphabets in reverse
 * Return: 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
