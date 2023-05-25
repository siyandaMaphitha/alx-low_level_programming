#include "main.h"

/**
 * print_line - draws a straight line in terminal
 * @n: is the number of times the character _ should be printerd
 * followed by a new line
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int a;

		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
