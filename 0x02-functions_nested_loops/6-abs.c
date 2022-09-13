#include "main.h"

/**
 * _abs - main function
 *
 * s: integer to make absolute
 *
 * Return: integer or integer * negative
 */
int _abs(int s)
{
	if (s > 0)
		return (s);
	else
		return (s * -1);
}
