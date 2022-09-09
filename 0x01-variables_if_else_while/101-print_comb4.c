#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always returns 0
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j =0; j <= 9; j++)
		{
			if (k > j && j > i)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (j != 7 || j !=8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
