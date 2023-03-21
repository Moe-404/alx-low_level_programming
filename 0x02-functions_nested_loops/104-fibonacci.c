#include <stdio.h>
/**
 * main - main function
 *
 * retyrn: aleays 0
 */
int main(void)
{
	int first = 1, second = 2, third;
	int count = 0;

	printf("%d, %d, ", first, second);

	while (count < 96)
	{
		third = first + second;
		printf("%d, ", third);
		first = second;
		second = third;
		count++;
	}
	third = first + second;
	printf("%d\n", third);

	return (0);
}
