#include "search_algos.h"

/**
 * linear_search : search an array for a value using linear algos
 *
 * @array: is the pointer to the 1st element
 * @size: is the size of the array
 * @value: is the value to search
 *
 * Return: returns -1 when array is not available or null, returns i
 * 	  when value is present
 *
 * Description: prints a value anytime it is compared in the array
 */


int linear_search(int *array, size_t size, int value)
{
	size_t i;
	
	if (array == NULL)
		return (-1);
	
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

