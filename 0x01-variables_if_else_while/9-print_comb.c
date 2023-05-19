#include <stdio.h>

/**
 * main- Entry point
 * prints all possible combinations of single-digit numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int bh = '0';

	while (bh <= '9')
	{
		putchar(bh);
		if (bh != '9')
		{
			putchar(',');
			putchar(' ');
		}
		bh++;
	}
	putchar('\n');
	return (0);
}
