#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list
 * @h: pointer to a pointer to the first node of the list
 *
 * Return: the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current = *h;
	listint_t *next = NULL;

	if (*h == NULL)
	{
		return (0);
	}

	while (current != NULL)
	{
		size++;
		next = current->next;
		free(current);
		current = next;

		if (current == *h)
		{
			break;
		}
	}
	*h = NULL;

	return (size);
}
