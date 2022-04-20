#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: A pointer to an int that will be changed
 * Description: n can only use _putchar
 */

void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++);
	{
		_putchar (str[n]);
	}
	_putchar('\n');
}
