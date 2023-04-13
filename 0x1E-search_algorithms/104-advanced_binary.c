#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array of integers using
 *                   the Binary search algorithm, and returns the index of the 
 *                   first occurrence of the value in the array
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if value is not present
 *         or array is NULL
 *
 * Description: Prints the [sub]array being searched after each change.
 */
int advanced_binary(int *array, size_t size, int value)
{
        size_t mid = (size - 1) / 2;
        int index;

        if (array == NULL)
                return (-1);

        if (size == 1)
        {
                if (array[mid] == value)
                        return (mid);
                printf("Searching in array: %d\n", array[mid]);
                return (-1);
        }

        if (array[mid] < value)
        {
                index = advanced_binary(array + mid + 1, size - mid - 1, value);
                if (index != -1)
                        return (index + mid + 1);
                printf("Searching in array: ");
                for (size_t i = mid + 1; i < size - 1; i++)
                        printf("%d, ", array[i]);
                printf("%d\n", array[size - 1]);
        }
        else
        {
                index = advanced_binary(array, mid + 1, value);
                if (index != -1)
                        return (index);
                printf("Searching in array: ");
                for (size_t i = 0; i < mid; i++)
                        printf("%d, ", array[i]);
                printf("%d\n", array[mid]);
        }

        return (-1);
}
