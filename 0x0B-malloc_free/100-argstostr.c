#include "main.h"

/**
 * *argstostr - concatenates all the arguments of your program.
 * @ac: the numbers of arguments
 * @av: the buffer of all arguments
 * Return: char s
*/

char *argstostr(int ac, char **av)
{
	int i, j, count = 0, k = 0;
	char *grid;

	if (!(ac && av))
		return (NULL);
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; count++, j++)
			count++;
	grid = malloc(count * sizeof(char) - 40);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; k++, j++)
		{
			grid[k] = av[i][j];
		}
		grid[k] = '\n';
		k++;
	}
	return (grid);
}
