#include <stdio.h>
/**
 * main - Entry point
 * Description: Printing the alphabets in reverse
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');

	return (0);
}
