#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char message[]  = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int length = 59;
int fd = 1;
write(fd, message, length);
return (1);
}
