#include <stdio.h>
/**
 * main - main function
 *
 * return: aleays 0
 */
int main(void)
{
	int first = 1, second = 2, i;
	int count = 0;

	printf("%d, %d, ", first, second);

	for (i = 3; i <= 100; i++)
	{
		count = first + second;
		printf("%d", count);

		if (i < 100)
			printf(", ");

		first = second;
		second = count;
	}

	printf("\n");

	return (0);
}
