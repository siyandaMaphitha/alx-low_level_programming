#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **att;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	att = malloc(sizeof(int *) * height);

	if (att == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		att[x] = malloc(sizeof(int) * width);

		if (att[x] == NULL)
		{
			for (; x >= 0; x--)
				free(att[x]);

			free(att);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			att[x][y] = 0;
	}

	return (att);
}
