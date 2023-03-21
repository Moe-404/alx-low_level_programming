#include "main.h"
/**
 * print_sign - functions returns 1 if num is positive
 * or 0 if it is zero or -1 otherwise
 *
 * @c: the num to be checked
 *
 * Return: 1 if num is positive or 0 if it is zero or -1 otherwise
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
