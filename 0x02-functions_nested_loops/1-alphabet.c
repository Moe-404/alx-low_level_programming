#include "main.h"
#include "_putchar.c"
/**
 * print_aphabet  -
 *
 * return: 0*/
void print_alphabet(void)
{
	int i;
	for(i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
