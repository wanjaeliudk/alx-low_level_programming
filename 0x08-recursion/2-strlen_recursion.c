#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - returns the length of the string
 * @s:   string pointer
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count++;
		count += _strlen_recursion(s + 1);
	}

	return (count);
}
