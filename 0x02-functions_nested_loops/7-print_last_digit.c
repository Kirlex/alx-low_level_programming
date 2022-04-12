#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @r: takes ln an integer
 * Return: returns output
 */

int print_last_digit(int r)
{
	int ln = r % 10;

	if (r < 0)
		ln = ln * -1;
	_putchar(ln + '0');
	return (ln);
}

