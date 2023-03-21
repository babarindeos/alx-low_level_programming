#include "main.h"
/**
 * print_alphabet - Write a function that prints
 * the alphabet in lowercase
 * Description: 1-alphabet.c
 * Return: void
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
