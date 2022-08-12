#include "lists.h"
/**
 * list_len - a function that returns the number of elements
 * @h: pointer
 * Return: number of elements
 */
size_t list_len(const lists_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
}
