#include "main.h"
/**
 * print_alphabet  - prints the characters from a to z
 *
 * return: 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
