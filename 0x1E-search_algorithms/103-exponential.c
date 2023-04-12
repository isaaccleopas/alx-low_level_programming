#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the exponential search algorithm
 *
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if array is NULL or value is not
 * found in array
 */
int exponential_search(int *array, size_t size, int value)
{
	unsigned int bound = 1, left = 0, right = 0, i;

	if (!array)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	left = bound / 2;
	right = bound < size ? bound : size - 1;

	printf("Value found between indexes [%d] and [%d]\n", left, right);

	for (i = left; i <= right; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
