#include "main.h"

/**
 * _abs - function that prints the absolute value of a number
 * @r: takes in an integer
 * Return: 1 if > 0, 0 if == 0, positive if negative
 */

int _abs(int r)
{
	if (r < 0)
		return (r * -1);
	return (r);
}
