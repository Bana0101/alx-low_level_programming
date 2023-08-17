#include "main.h"

/**
 * main - entry point
 * Return: 0
*/
int main(void)
{
	int i;

	printf("1");
	for (i = 2; i <= 100; i++)
	{
		if ((i % 3) != 0 && (i % 5) != 0)
			printf(" %d", i);
		if ((i % 3) == 0 && (i % 5) != 0)
			printf(" Fizz");
		if ((i % 3) != 0 && (i % 5) == 0)
			printf(" Buzz");
		if ((i % 3) == 0 && (i % 5) == 0)
			printf(" FizzBuzz");
	}
	printf("\n");
	return (0);
}
