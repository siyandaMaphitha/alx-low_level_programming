#include <stdio.h>

/**
 * main - prints a to z in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	char ch, e, q;

	e = 'e';
	q = 'q';
	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != e && ch != q)
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
