#include "main.h"
/**
 * _strcat - concats two arrays
 *
 * @dest: destination of concat
 * @src: source array to concat
 *
 * Return: char value
 */
char *_strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;
	
	while (dest[index++])
		dest_len++;
	
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	
	return (dest);
}
