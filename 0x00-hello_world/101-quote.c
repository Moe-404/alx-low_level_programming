#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char m[]  = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int length = 59;
int fd = 1;
write(fd, m, length);
return (1);
}
