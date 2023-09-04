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

	if (!(width && height))
		return (NULL);
	m = (int **)malloc(height * sizeof(*m));
	for (i = 0; i < height; i++)
	{
		m[i] = (int *)malloc(width * sizeof(**m));
		if (m[i] == NULL)
		{
			free(m);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			m[i][j] = 0;
	}
	return (m);

}
