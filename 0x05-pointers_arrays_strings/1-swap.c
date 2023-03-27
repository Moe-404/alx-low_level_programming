#inclide "main.h"

/**
* swap_int - function swaps the values of two integers.
* @a: number one.
* @b: number two.
*
* Return: nothing.
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
