#include <stdio.h>

/**
 * main - Entry point
 * Prints the lowercase of alphabet in reverse
 * follwed by a new line
 *
 * Return: 0 (success)
 */
int main(void)
{
	int b;

	for (b = 'z'; b >= 'a'; b--)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
