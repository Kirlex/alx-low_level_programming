#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: takes an integer
 * Return 1 and print + if n > 0, Return 0 and print 0 if n = 0, Return -1 and print - if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
