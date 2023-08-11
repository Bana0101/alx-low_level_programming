#include <stdio.h>
/**
 *main - Entry point for the program
 *
 *Return: Always 0 (Success)
*/
int main(void)
{
	char alphabet = 'a';
	char Alpha = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	while (Alpha <= 'Z')
	{
		putchar(Alpha);
		Alpha++;
	}
	putchar('\n');
	return (0);
}
