#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: A pointer to an int that will be changed
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int b;

	b = 0;
	while (s[b] != '\0')
	{
		b++;
	}
	return (b);
}
