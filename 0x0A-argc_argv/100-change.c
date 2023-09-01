#include "main.h"
#include <stdlib.h>
/**
 * main - entry point
 * @argc: the number of arguments
 * @argv: arguments value
 * Return: 0
*/
int main(int argc, char **argv)
{
	int i, j, k, m, ctr = 0, res;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	res = atoi(argv[1]);
	for (i = 0; res >= 25; i++)
	{
		res -= 25;
		ctr += 1;
	}
	for (j = 0; res >= 10; j++)
	{
		res -= 10;
		ctr += 1;
	}
	for (k = 0; res >= 2; k++)
	{
		res -= 2;
		ctr += 1;
	}
	for (m = 0; res >= 1; m++)
	{
		res -= 1;
		ctr += 1;
	}
	printf("%d\n", ctr);
	return (0);
}
