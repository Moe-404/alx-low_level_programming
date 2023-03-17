#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char c = 'a';
char C = 'A';
for (i = 0; i < 26; i++)
{
putchar(c++);
}
for (i = 0; i < 26; i++)
{
putchar(C++);
}
putchar('\n');
return (0);
}
