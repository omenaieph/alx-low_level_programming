#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *               integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **_arrayOfarray;
	int h_i, wid_i;

	if (width <= 0 || height <= 0)
		return (NULL);

	_arrayOfarray = malloc(sizeof(int *) * height);

	if (_arrayOfarray == NULL)
		return (NULL);

	for (h_i = 0; h_i < height; h_i++)
	{
		_arrayOfarray[h_i] = malloc(sizeof(int) * width);

		if (_arrayOfarray[h_i] == NULL)
		{
			for (; h_i >= 0; h_i--)
				free(_arrayOfarray[h_i]);

			free(_arrayOfarray);
			return (NULL);
		}
	}

	for (h_i = 0; h_i < height; h_i++)
	{
		for (wid_i = 0; wid_i < width; wid_i++)
			_arrayOfarray[h_i][wid_i] = 0;
	}

	return (_arrayOfarray);
}
