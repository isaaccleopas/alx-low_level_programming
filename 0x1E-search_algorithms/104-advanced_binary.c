#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array of integers using
 * 		     the Advanced Binary search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if value is not present
 * 	   or array is NULL
 * Description: Prints the [sub]array being searched after each change.
 */
int advanced_binary(int *array, size_t size, int value)
{
        size_t left = 0, right = size - 1, mid, i;

        if (array == NULL)
                return (-1);

        while (left <= right)
        {
                printf("Searching in array: ");
                for (i = left; i < right; i++)
                        printf("%d, ", array[i]);
                printf("%d\n", array[i]);

                mid = (left + right) / 2;

                if (array[mid] < value)
                        left = mid + 1;
                else if (array[mid] > value)
                        right = mid;
                else
                {
                        /* check if it's the first occurrence of value */
                        if (mid == left || array[mid - 1] != value)
                                return (mid);
                        right = mid;
                }
        }

        return (-1);
}
