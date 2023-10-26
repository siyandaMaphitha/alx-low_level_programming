#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int c, cap = 0;
	unsigned long int current;

	for (c = 63; c >= 0; c--)
	{
		current = n >> c;

		if (current & 1)
		{
			_putchar('1');
			cap++;
		}
		else if (cap)
			_putchar('0');
	}
	if (!cap)
		_putchar('0');
}
