#include "main.h"
/**
 * _islower - functions returns 1 if char is lower or 0otherwise
 *
 * return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
