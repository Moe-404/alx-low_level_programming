#include <stdio.h>
#include "main.h"

void print_alphabet(void)
{
	int i;
	for(i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
}

void print_alphabet_x10(void)
{
        int i;
        int j;
        for(i = 0; i < 10; i++)
        {
                for(j = 'a'; j <= 'z'; j++)
                        putchar(j);
                putchar('\n');
	}
}
