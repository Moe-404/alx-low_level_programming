#include "main.h"
/**
 * _islower - functions returns 1 if char is lower or 0otherwise
 *@c: the char to be checked
 *
 * Return: 1 if the char is lowercase. 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
