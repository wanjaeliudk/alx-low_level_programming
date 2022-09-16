#include <stdio.h>
/**
 * main - Entry point
 * Description: Printing the possible combination of two numbers
 * Return: 0
 */
int main(void)
{
	int i; /* first number */
	int j; /* seond number */

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i == 98 && j == 99)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
