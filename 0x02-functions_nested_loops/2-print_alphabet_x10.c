#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet x10
 *
 * Retun: Always returns 0
 */
void print_alphabet_x10(void)
{
	char i;
	char j;
	
	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
