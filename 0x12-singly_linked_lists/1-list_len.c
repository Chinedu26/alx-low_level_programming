#include "lists.h"
/**
 * list_len - a function that returns the number of elements
 * @h: pointer
 * Return: number of elements
 */
size_t list_len(const lists_t *h)
{
	const list_t *ptr = h;
	size_t t = 0;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		t++;
	}
	return (t);
}
