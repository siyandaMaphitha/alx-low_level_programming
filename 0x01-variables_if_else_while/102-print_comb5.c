#include <stdio.h>

/**
 * main - entry point
 * print all possible combinations of two two-digit numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int bh;
	int ch;

	for (bh = 0; bh < 100; bh++)
	{
		for (ch = 0; ch < 100; ch++)
		{
			if (bh < ch)
			{
				putchar((bh / 10) + '0');
				putchar((bh % 10) + '0');
				putchar(' ');
				putchar((ch / 10) + '0');
				putchar((ch % 10) + '0');
				if (bh != 98 || ch != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
