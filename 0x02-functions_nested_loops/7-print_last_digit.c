#include "main.h"
/**
 * print_last_digit - prints the last digit of the number n.
 * @n: number to be checked.
 *
 * Return: the last digit.
 */

int print_last_digit(int n)
{
	int ld;

	if (n >= 0)
		ld = n % 10;
	else
		ld = -1 * (n % 10);

	_putchar(ld + '0');
	return (ld);
}
