#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * *cap_string - capitalizes all words of a string
 * @c: parameter or numbers
 * Return: always 0
 */

char *cap_string(char *)
{

	int i = 0;

	while (c[i])
	{
		c[i] = toupper(c[i]);
		i++;
	}
	return (c);
}
