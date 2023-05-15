#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - pointer to 2 dimensional array
 * @width: width of array
 * @height: height of array
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int i, j, **b;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}
	b = (int **)malloc(height * sizeof(int *));
	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; i < height; i++)
	{
		b[i] = (int *)malloc(width * sizeof(int));
		if (b[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(b[j]);
			}
			free(b);
			return (0);
		}
		for (j = 0; j < width; j++)
		{
			b[i][j] = 0;
		}
	}
	return (b);
}
