#include "main.h"

/**
 * _isalpha - main function that checks lower or uppercase
 *
 * c - character to compare
 *
 * return: returns 0 if false and 1 for true
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
