#include "main.h"
#include <stdlib.h>
/**
 * create_array - create a array
 * @size: the size of the array
 * @c: the intialzation of the array
 *
 * Return: Null or array.
char *arr; */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arunsigned int i;r[i] = c;
	}

	return (arr);
}