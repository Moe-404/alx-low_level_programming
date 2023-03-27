#include "main.h"

/**
* _strlen - function returns the length of a string.
* @s: string.
*
* Return: the lenght of string.
*/

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		*s++;
	}
	return (count);
}
