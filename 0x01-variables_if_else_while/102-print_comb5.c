#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
*/

int main(void)
{
	int i, j, k, n;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = i; k < 10; k++)
			{
				for (n = j ; n < 10; n++)
				{
					if (i != k || j != n)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(k + '0');
						putchar(n + '0');
					
						if (i != 9 || j != 8 || k != 9 || n != 9)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);

}
