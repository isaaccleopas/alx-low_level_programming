#ifndef MAIN_H_
#define MAIN_H_

/**
 * _putchar - writes the character c to std
 *
 * c: parameter to compare
 *
 * Return: 1 or 0
 */

int _putchar(char c);

/**
 * _isupper - checks if uppercase
 *
 * c character to check
 *
 * Return: gives 1 or 0
 *
 */

int _isupper(int c);

/**
 *  _isdigit - determine if digit
 *
 * c: character to determine
 *
 * Return: gives boolean
 */

int _isdigit(int c);

/**
 * mul - multiplier
 * a: int to mult
 * b: int to mult
 * Return: result of two
 */

int mul(int a, int b);

/**
 * print_numbers - prints the numbers
 */

void print_numbers(void);

/**
 * print_most_numbers - prints the numbers
 *
 */
void print_most_numbers(void);

/**
 * more_numbers - prints the numbers
 *
 */

void more_numbers(void);

/**
 * print_line - prints a line
 *
 * n: integer to print stuff?
 */

void print_line(int n);

/**
 * print_diagonal - prints diagonal stuff
 *
 * n: integer to set diagonal
 */

void print_diagonal(int n);

/**
 * print_square - prints square stuff
 *
 * size: integer to set square size
 */

void print_square(int size);

/**
 * main - main function
 *
 * Return: a number
 */

int main(void);

#endif
