#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *a != '\0')
		{
			a++;
			b++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
