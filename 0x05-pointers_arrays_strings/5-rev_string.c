#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - prints string in reverse
 * @s: char type
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
