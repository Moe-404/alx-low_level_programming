#include "main.h"
/**
 * print_last_digit - prints the last digit of the number n.
 * @n: number to be checked.
 *
 * Return: the last digit.
 */

int print_last_digit(int n)
{
	if (n >= 0)
		_putchar((n % 10) + '0');
	else
	{
		n *= -1;
		_putchar((n % 10) + '0');
	}
	return (n % 10);
}
