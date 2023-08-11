#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
*/

int main(void)
{
	char alpha = 'a';
	int i = 0;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	while (alpha < 'g')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
