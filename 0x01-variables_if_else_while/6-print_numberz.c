#include <stdio.h>

/**
 * main - Entry point
 * Alll single digit numbers of base 10
 * starting from 0,
 * follwed by a new line, using putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
	int b;

	for (b = 0; b < 10; b++)
	{
		putchar(b + '0');
	}
	putchar('\n');
	return (0);
}
