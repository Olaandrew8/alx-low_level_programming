#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - func creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, p;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			free(arr);
			for (p = 0; p <= i; p++)
				free(arr[p]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (p = 0; p < width; p++)
		{
			arr[i][p] = 0;
		}
	}
	return (arr);
}
