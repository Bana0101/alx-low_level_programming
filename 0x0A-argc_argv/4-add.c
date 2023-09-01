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
 * is_char - check if the input is a number
 * @s: input char
 * Return: 0 or 1
*/
int is_char(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 57 || s[i] < 48)
			return (1);
	}
	return (0);
}
/**
 * main - entry point
 * @argc: the number of arguments
 * @argv: arguments value
 * Return: 0
*/

int main(int argc, char **argv)
{
	int i, res = 0;

	if (argc < 2)
		printf("0\n");
	else
	{
		for (i = 1; argv[i]; i++)
		{
			if (is_char(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			res += _ato(argv[i]);
		}
	}
	printf("%d\n", res);
	return (0);
}
