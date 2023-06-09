#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - the function that add a node to end
 * @n: data parameter
 * @head: the node parameter
 * Return: the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = *head;
	listint_t *end_node = malloc(sizeof(listint_t));

	end_node->n = n;
	end_node->next = NULL;
	if (!end_node)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = end_node;
	return (end_node);
}


