#include "main.h"
/*
 * _abs - function returns the absloute value of an integer.
 * @n - integer
 * Description: This is a longer description.
 * Don't forget that a line should not exceed 80 characters.
 * But you're totally free to use several lines to properly
 * describe your function
 *
 * Return: Always 0
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
