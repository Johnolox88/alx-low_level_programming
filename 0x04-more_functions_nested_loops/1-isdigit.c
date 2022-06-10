#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks for digit between 0 and 9
 * Return: 1 if c is a digit and 0 otherwise
 *
 * @c: is an int
 */

int _isdigit(int c)
{
	int i = isdigit(c);

	if (i > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
