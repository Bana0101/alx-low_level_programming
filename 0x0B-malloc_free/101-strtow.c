#include "main.h"

/**
 * **strtow - a function that splits a string into words.
 * @str: input string
 * Return: double pointer
 */

char **strtow(char *str)

{
	int i = 0, j, width = 0, line = 0, nline = 0;
	char **grid;

	if (str[i] == '\0' || str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ' &&  str[i + 1] != ' ' && str[i + 1] != '\0')
			nline++;
		else if (i == 0 && str[i] != ' ')
			nline++;
	}
	if (nline == 0)
		return (NULL);
	grid = (char **)malloc(nline * sizeof(char) + 1);
	if (grid == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			width = 0;
			for (j = 0; str[i + j] != ' ' && str[i + j] != '\0'; j++)
				width++;
			width++;
			grid[line] = (char *)malloc(sizeof(char) * width);
			if (grid[line] == NULL)
			{
				while (line--)
					free(grid[line]);
				free(grid);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				grid[line][j] = str[i + j];
			grid[line][width] = '\0';
			line++;
		}
	}
	return (grid);
}
