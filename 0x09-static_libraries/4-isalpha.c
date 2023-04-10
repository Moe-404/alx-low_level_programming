#include "main.h"
/**
 * _isalpha - functions returns 1 if char is alphabet char  or 0 otherwise
 *@c: the char to be checked
 *
 * Return: 1 if the char is alphabet. 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
