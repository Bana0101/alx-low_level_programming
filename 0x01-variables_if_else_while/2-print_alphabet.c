#include <stdio.h>
/**
 *main - Entry point for the program
 *
 *Return: Always 0 (Success)
*/
int main(void)
{
	int alphabet = "a";

	while (alphabet <= "z")
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar("\n");
	return (0);
}
