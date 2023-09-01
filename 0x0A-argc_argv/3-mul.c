#include "main.h"
/**
 * _ato - a function that convert a string to an integer.
 * @s: input adress
 * Return: v
*/

int _ato(char *s)
{
	int sign = 1, i = 0;
	unsigned int v = 0;

	while (s[i])
	{
		if (s[i] == 45)
			sign = -sign;
		if (s[i] <= 57 && s[i] >= 48)
		{
			v = v * 10 + (s[i] - '0');
			if (s[i + 1] > 57 || s[i + 1] < 48)
				break;
		}
		i++;
	}
	return (sign * v);

}
/**
 * main - entry point
 * @argc: the number of arguments
 * @argv: arguments value
 * Return: 0
*/

int main(int argc, char **argv)
{
	int i, j;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = _ato(argv[1]);
		j = _ato(argv[2]);
		printf("%d\n", i * j);
	}
	return (0);
}
