#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always returns 0
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');

}
