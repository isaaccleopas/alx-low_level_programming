# include "search_algos.h"

/**
* binary_search: for a value in an array of integers use binary search algo
*
* @array: is a pointer to the 1st element
* @size: is the number of element in an array
* @value: is the value to search for
*
* Return: returns -1 when value is not available or when array is NULL
* 	  returns i when the value is found
*
* Description: Prints a value anytime it is compared in the array
*/

int binary_search(int *array, size_t size, int value)
{
	size_t i;
	int start = 0;
	int end = size - 1;
	int mid;

	if (array == NULL)
		return (-1);
	mid = (start + end) / 2;

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
