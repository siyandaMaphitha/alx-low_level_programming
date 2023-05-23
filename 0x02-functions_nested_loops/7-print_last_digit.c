#include "main.h"

/**
 * print_last_digit - entry point
 * a function that prints the last digit of a number
 * @x: the int to extract the last digit
 * Return: value of the last digit
 */
int print_last_digit(int x)
{
	int digit = x % 10;

	if (digit < 0)
		last_digit *= -1;

	_putchar(digit + '0');

	return (digit);
}
