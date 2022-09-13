#include "main.h"

/**
 * _islower - main function
 *
 * Return: returns 0 if condition is false and 1 if condition is true
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
