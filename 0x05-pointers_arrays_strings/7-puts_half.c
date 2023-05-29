#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * if odd len, n = (length_of_the_string -1 )/2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int b, n, longa;

	longa = 0;

	for (b = 0; str[b] != '\0'; b++)
		longa++;

	n = (longa / 2);

	if ((longa % 2) == 1)
		n = ((longa + 1) / 2);


	for (b = n; str[b] != '\0'; b++)
		_putchar(str[b]);
	_putchar('\n');
}
