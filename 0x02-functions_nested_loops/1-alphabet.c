#include "main.h"

/**
 * print_alphabet - entry point
 * a function tha prints the alphabet
 * in lowercase, followed by a new line
 *
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	char b = 'a';

	while (b <= 'z')
	{
		_putchar(b);
		b++;

	}
	_putchar('\n');

}
