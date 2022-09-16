#include <stdio.h>
#include "main.h"

/**
 * print_rev - function prints a string in reverse
 * @s: string passed as argument
 * Return: nothing
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (i--; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
