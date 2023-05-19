#include <stdio.h>

/**
 * main - Entry point
 * prints all the numbers of base 16 in lowecase
 * followed by new line
 *
 * Return: 0 (success)
 */
int main(void)
{
	int b = '0';

	while (b <= '9')
	{
		putchar(b);
		b++;
	}
	b = 'a';
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
