#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: string in reverse
 */
void rev_string(char *s)
{
	char reve = s[0];
	int count = 0;
	int b;

	while (s[count] != '\0')
		count++;
	for (b = 0; b < count; b++)
	{
		count--;
		reve = s[b];
		s[b] = s[count];
		s[count] = reve;
	}
}
