#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char c = 'z';
for (i = 0; i < 26; i++)
{
putchar(c--);
}
putchar('\n');
return (0);
}
