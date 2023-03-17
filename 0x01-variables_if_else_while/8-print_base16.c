#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char c;
for (i = 0; i < 10; i++)
{
c = '0' + i;
putchar(c);
}
for (i = 0; i < 6; i++)
{
c = 'a' + i;
putchar(c);
}
putchar('\n');
return (0);
}
