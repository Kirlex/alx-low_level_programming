#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9, followed by a new line
 * Return: Always 0.
 */

void print_numbers(void)
{
	int i;

	i = 0;

        while (i < 10)
	{
           _putchar (i + '0');
           i++;
	}

	_putchar('\n');
}
