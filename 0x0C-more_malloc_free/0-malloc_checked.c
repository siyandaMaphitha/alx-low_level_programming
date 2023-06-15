#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of allocated bytes
 *
 * Return: Pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *cat;

	cat = malloc(b);

	if (cat == NULL)
		exit(98);

	return (cat);
}

