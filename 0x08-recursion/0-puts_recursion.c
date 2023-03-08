#include "main.h"

/**
 * main -Write a function that prints a string, followed by a new line.
 *@s: string to print
 *
 * Return: 0 Always
 */

void _puts_recursion(char *s);
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putcahr(*s);
	_puts_recursion(s + 1);
}
