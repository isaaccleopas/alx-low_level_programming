#include "search_algos.h"
#include <stdio.h>

/**
 * recursive_binary_search - searches for a value in a sorted array of integers
 * 			     using the binary search algorithm, recursively
 *
 * @array: pointer to the first element of the array to search in
 * @left: index of the leftmost element of the array
 * @right: index of the rightmost element of the array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if value is not present in array
 *
 * Description: Prints the [sub]array being searched after each change.
 */
int recursive_binary_search(int *array, size_t left, size_t right, int value)
{
    size_t i;
    int mid;

    printf("Searching in array: ");
    for (i = left; i <= right; i++)
    {
        printf("%d", array[i]);
        if (i != right)
            printf(", ");
    }
    printf("\n");

    if (left == right)
        return (array[left] == value ? (int)left : -1);

    mid = left + (right - left) / 2;

    if (array[mid] < value)
        return (recursive_binary_search(array, mid + 1, right, value));
    else if (array[mid] > value)
        return (recursive_binary_search(array, left, mid - 1, value));
    else
    {
        if (mid == (int)left || array[mid - 1] < value)
            return (mid);
        else
            return (recursive_binary_search(array, left, mid, value));
    }
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * 		     using the binary search algorithm, recursively
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if value is not present in array
 *
 * Description: Prints the [sub]array being searched after each change.
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return (-1);

    return (recursive_binary_search(array, 0, size - 1, value));
}
