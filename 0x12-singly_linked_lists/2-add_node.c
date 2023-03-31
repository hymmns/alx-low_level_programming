#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: list_t pointer pointer address of link list
 * @str: char pointer - string
 *
 * Return: address of new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *hd = malloc(sizeof(list_t));
	int i = 0;

	if (hd != NULL)
	{
		while (str[i])
			i++;

		hd->len = i;
		hd->str = strdup(str);
		hd->next = *head;
		*head = hd;
		return (*head);
	}

	return (NULL);
}
