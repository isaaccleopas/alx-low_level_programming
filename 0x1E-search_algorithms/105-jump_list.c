#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted list of integers
 *             using the Jump search algorithm.
 *
 * @list: A pointer to the head of the sorted list of integers to search.
 * @size: The number of elements in the list.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t i, jump_step = sqrt(size), prev = 0;
    listint_t *current = list;

    if (list == NULL)
        return (NULL);

    while (current->n < value)
    {
        prev = current->index;
	for (i = 0; i < jump_step && current->next; i++)
		current = current->next;

	printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

        if (current->index >= size || current->n >= value)
            break;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev, current->index);

    while (prev <= current->index)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev, list->n);

        if (list->n == value)
            return (list);

        prev++;
        list = list->next;
    }

    return (NULL);
}
