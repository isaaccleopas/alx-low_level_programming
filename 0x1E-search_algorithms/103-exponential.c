#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index of the value in the array, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1, left, right, prev;

    if (array == NULL)
        return (-1);

    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        prev = bound;
        bound *= 2;
    }

    left = prev;
    right = bound < size ? bound : size - 1;

    printf("Value found between indexes [%lu] and [%lu]\n", left, right);

    while (left <= right)
    {
        size_t mid = (left + right) / 2;

        printf("Searching in array: ");
        for (size_t i = left; i <= right; i++)
            printf("%d%s", array[i], i == right ? "\n" : ", ");

        if (array[mid] < value)
        {
            printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);
            left = mid + 1;
        }
        else if (array[mid] > value)
        {
            printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);
            right = mid - 1;
        }
        else
        {
            printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);
            return (mid);
        }
    }

    return (-1);
}
