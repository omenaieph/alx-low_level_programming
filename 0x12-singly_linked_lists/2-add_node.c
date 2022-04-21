#include "lists.h"
#include <string.h>
/**
 * add_note - Function that adds a new node at the
 * beginning of a list_t list
 * @head: linked_list head
 * @str: string to put in node
 * Return: Address of the new element,
 * or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int _len;

	node = (list_t *)malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	while (*str)
	{
		_len++;
	}
	node->len = _len;
	node->next = *head;
	*head = node;

	return (node);
}
