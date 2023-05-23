#include "main.h"

/**
 * print_last_digit - entry point
 * a function that prints the last digit of a number
 * @x: the int to extract the last digit
 * Return: value of the last digit
 */
int print_last_digit(int x)
{
	int b;

	if (x < 0)
		x = -x;

	b = x % 10;

	if (b < 0)
		x = -b;

	_putchar(b + '0');

	return (b);
}
