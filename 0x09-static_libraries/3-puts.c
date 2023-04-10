#include <unistd.h>
#include "main.h"

/**
* _puts - function prints anything.
* @s: string
*
* Return: string
*/

void _puts(char *s)
{
	while (*s != '\0')
	{
		write(1, s, 1);
		s++;
	}
	write(1, "\n", 1);
}
