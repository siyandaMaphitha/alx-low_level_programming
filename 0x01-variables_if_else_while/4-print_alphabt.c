#include <stdio.h>

/**
 * main - Entry point
 * Print the alphabet in lowercase letters
 * except for e and q
 *
 * Return: 0 (success)
 */
int main(void)
{
	char bc = 'a';

	while (bc <= 'z')
	{
		if (bc != 'e' && bc != 'q')
		{
			putchar(bc);
		}
		bc++;
	}
	putchar('\n');
	return (0);
}
