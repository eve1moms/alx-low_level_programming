#include"main.h"
#include<stdlib.h>
/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers
* @width: array row size
* @height: arrays column size
* Return: 2D pointr array, if width or height is 0 or -
* else return NULL
*/
int **alloc_grid(int width, int height)
{
	int n, m, **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **)malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);
	for (n = 0; n < height; n++)
	{
		ptr[n] = (int *)malloc(width * sizeof(int));
		if (ptr[n] == NULL)
		{
			for (; n >= 0; n--)
				free(ptr[n]);
			free(ptr);
			return (NULL);
		}
	}
	for (n = 0; n < height; n++)
		for (m = 0; m < width; m++)
			ptr[n][m] = 0;
	return (ptr);
}
