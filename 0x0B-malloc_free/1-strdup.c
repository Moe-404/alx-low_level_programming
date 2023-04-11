#include "main.h"
#include <string.h>
/**
 * _strdup - function returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the paseed string
 * Return: NULL or pointer
 */
char *_strdup(char *str)
{

	size_t len;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}

	strcpy(dup, str);
	return (dup);
}
