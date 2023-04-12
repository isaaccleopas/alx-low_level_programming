#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
 *                 of integers using binary search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 *
 * Description: Prints the [sub]array being searched after each change.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i;
	int start = 0;
	int end = size - 1;
	int mid;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		mid = (start + end) / 2;
		printf("Searching in array: ");
		for (i = (size_t)start; i <= (size_t)end; i++){	
			printf("%d ", array[i]);
		}
		printf("\n");

		if (array[mid] == value) {
			return (mid);
		} else if (array[mid] < value) {
			start = mid + 1;
		} else {
			end = mid - 1;
		}

	}

	return (-1);
}
