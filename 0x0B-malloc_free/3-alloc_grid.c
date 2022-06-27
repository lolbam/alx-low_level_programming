#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2d array of integers
* @width: columns
* @height: rows
*
* Return: pointer to two dimensional array
*/
int **alloc_grid(int width, int height)
{
	int i, j, a, b;
	int **ptr;

	if (width <= 0)
		return (NULL);

	if (height <= 0)
		return (NULL);

	ptr = (int **) malloc(height * sizeof(int *));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (j = 0; j <= i; j++)
				free(ptr[j]);
			free(ptr);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			ptr[a][b] = 0;
	}
	return (ptr);
}
