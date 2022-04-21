#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints out values of linked list and return its length.
 * @h: linked list head.
 * Return: lenght of the linked list.
 */

size_t print_list(const list_t *h)
{
	size_t _len;

	for (_len = 0; h != NULL; _len++)
	{
		printf("[%d] %s\n", h->len,
		h->str == NULL ? "(nil)" : h->str);
		h = h->next;
	}
	return (_len);
}
