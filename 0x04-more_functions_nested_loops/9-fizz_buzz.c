#include <stdio.h>
#include "main.h"

/**
 * main -Entry point
 * Description: Fizz Buzz
 * Return:  0
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s ", "FizzBuzz");
		else if (i % 3 == 0)
			printf("%s ", "Fizz");
		else if (i % 5 == 0)
			printf("%s ", "Buzz");
		else
			printf("%d ", i);
	}
	printf("\n");

	return (0);
}
