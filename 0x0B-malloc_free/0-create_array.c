#include "main.h"
#include <stdlib.h>
/**
 * create_array - create a array
 * @size: the size of the array
 * @c: the intialzation of the array
 *
 * Return: Null or array.
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	char *arr;

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	unsigned int i;

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
