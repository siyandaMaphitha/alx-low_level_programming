#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * followed by a new line.
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longa = 0;
	int b = 0;
	char *d = str;
	int e;

	while (*d != '\0')
	{
		d++;
		longa++;
	}
	b = longa - 1;
	for (e = 0; e <= b; e++)
	{
		if (e % 2 == 0)
		{
			_putchar(str[e]);
		}
	}
	_putchar('\n');
}
