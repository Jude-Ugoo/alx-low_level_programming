#include "lists.h"

/**
 * dlistint_len - counts and returns num elements in doubly linked list
 * @h: pointer to head of list
 * Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t len_of_nodes = 0;
	
	while (h != NULL)
	{
		h = h->next;
		len_of_nodes += 1;
	}
	return (len_of_nodes):
}
