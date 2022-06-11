#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers from 0 to 9 followed by a new line
 */

void print_numbers(void)
{
	int i = 0;

	while (i <= 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
}
