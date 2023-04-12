#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers using
 * the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
    size_t end = sqrt(size);
    size_t start = 0;
    size_t curr = 0;

    if (array == NULL)
	    return (-1);

    while (array[start] < value)
    {
        printf("Value checked array[%ld] = [%d]\n", start, array[start]);

        start = end;

        if (start >= size)
		return 0;
    }

    curr = start - end;
    printf("Value found between indexes [%ld] and [%ld]\n", curr, start);

    while (array[curr] < value)
    {
        printf("Value checked array[%ld] = [%d]\n", curr, array[curr]);

        curr++;

        if (curr == size)
            return (-1);
    }

    printf("Value checked array[%ld] = [%d]\n", curr, array[curr]);

    if (array[curr] == value)
        return (curr);

    return (-1);
}
