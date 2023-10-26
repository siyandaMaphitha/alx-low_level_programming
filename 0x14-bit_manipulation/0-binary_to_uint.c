#include "main.h"

/**
 * binary_to_uint - function converts a binary number to unsigned int
 * @b: pointer string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int c;
	unsigned int cap = 0;

	if (!b)
		return (0);

	for (c = 0; b[c]; c++)
	{
		if (b[c] < '0' || b[c] > '1')
			return (0);

	}
	for (c = 0; b[c] != '\0'; c++)
	{
		cap <<= 1;
		if (b[c] == '1')
			cap += 1;
	}

	return (cap);
}
