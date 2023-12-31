#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional.
 * @width: the numbers of col
 * @height: the numbers of line
 * Return: m or Null
*/
int **alloc_grid(int width, int height)
{
	int **m;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	m = malloc(height * sizeof(*m));
	if (m == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		m[i] = malloc(width * sizeof(**m));
		if (m[i] == 0)
		{
			while (i--)
				free(m[i]);
			free(m);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			m[i][j] = 0;
	}
	return (m);

}
