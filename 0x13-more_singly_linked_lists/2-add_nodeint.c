#include "lists.h"

/**
 * add_nodeint - a function that adds a new node
 * @head: pointer to the first node
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *d;

	new = malloc(sizeof(listint_t));
	if (!d)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = d;

	return (d);
}

