#include "main.h"

/**
 * print_last_digit - main function that prints last digit
 *
 * n: integer to check
 *
 * Return: returns last digit of number
 */
int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
