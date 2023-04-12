#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 *               using the Jump search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The first index where value is located, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
    size_t jump, left, right;

    if (array == NULL || size == 0)
        return (-1);

    jump = sqrt(size);
    left = 0;
    right = jump;

    while (right < size && array[right] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", left, array[left]);
        left = right;
        right += jump;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", left, right);

    right = (right >= size) ? size - 1 : right;

    while (left <= right)
    {
        printf("Value checked array[%lu] = [%d]\n", left, array[left]);
        if (array[left] == value)
            return (left);
        left++;
    }

    return (-1);
}
