#include "holberton.h"

/**
 * _puts - prints a screen
 * @str: A pointer to an int that will be changed
 *
 * Return: void which means our answer is correct
 */

void _puts(char *str)
{
	char *c;
	int n;

	c = str;

	for (n = 0; c[n]; n++);
	{
		_putchar (c[n]);
	}
	_putchar('\n');
}
