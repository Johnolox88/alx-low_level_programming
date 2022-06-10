#include "main.h"
#include <ctype.h>

/**
 * _isupper - funtion that prints upper case
 * @c: character type alphabet
 * Return: 1 if uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	int i = isupper(c);

	if (i > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


