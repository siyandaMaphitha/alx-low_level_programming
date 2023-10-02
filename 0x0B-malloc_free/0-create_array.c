#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of characters
 * and initializes it with a specific character
 * @size: size of the array to create
 * @c: char to assign value for the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
