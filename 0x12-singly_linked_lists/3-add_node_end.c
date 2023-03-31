#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: list_t pointer pointer to link list
 * @str: const char pointer - string
 *
 * Return: address of new element or NULL if failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *hd = malloc(sizeof(list_t)), *tmp = *head;
	int i = 0;

	if (hd != NULL)
	{
		while (str[i])
			i++;

		hd->len = i;
		hd->str = strdup(str);
		hd->next = NULL;

		if (tmp == NULL)
		{
			*head = hd;
			return (hd);
		}
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = hd;

		return (hd);
	}

	return (NULL);
}
