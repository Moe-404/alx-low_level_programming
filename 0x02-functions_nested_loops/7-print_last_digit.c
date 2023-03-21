#include "main.h"
/**
 * print_last_digit - prints the last digit of the number n.
 * @n: number to be checked.
 *
 * Return: the last digit.
 */

int print_last_digit(int n)
{
	_putchar(_abs(n) % 10);
	return (_abs(n) % 10);
}
