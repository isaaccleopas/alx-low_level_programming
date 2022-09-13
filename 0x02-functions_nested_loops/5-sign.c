#include "main.h"

/**
 * print_sign - function that prints sign
 *
 * n: int to check
 *
 * return: returns 1 if true for +, 0 if zero and -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{	
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
