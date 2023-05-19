#include <stdio.h>

/**
 * main - Entry point
 * Pritnd all possible different combinations of two digits
 *
 * Return: 0 (success)
 */
int main(void)
{
	int bh = '0';
	int ch = '0';

	while (bh <= '9')
	{
		while (ch <= '9')
		{
			if (!(bh > ch || bh == ch))
			{
				putchar(bh);
				putchar(ch);
				if (bh == '8' && ch == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			ch++;
		}
		ch = '0';
		bh++;
	}
	return (0);
}
