#include "main.h"

/**
 * _isupper - uppercasse letters
 * @c: char to chec
 *
 * Return 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
