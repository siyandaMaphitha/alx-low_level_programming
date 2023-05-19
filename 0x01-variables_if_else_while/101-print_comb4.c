#include <stdio.h>

/**
 * main - entry point
 * prints all possible different combinations of three digits
 *
 * Return: 0 (success)
 */
int main(void)
{
	int bh = '0';
	int ch = '0';
	int dh = '0';

	while (bh <= '9')
	{
		while (ch <= '9')
		{
			while (dh <= '9')
			{
				if (bh < ch && ch < dh)
				{
					putchar(bh);
					putchar(ch);
					putchar(dh);
					if (!(bh == '7' && ch == '8' && dh == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				dh++;
			}
			dh = '0';
			ch++;
		}
		ch = '0';
		bh++;
	}
	putchar('\n');
	return (0);
}
