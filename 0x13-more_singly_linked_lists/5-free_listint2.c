#include "lists.h"
/**
* free_listint2 - function that
* frees a list
* head: pointer to the head
* Return: Nothing.
*/
void free_listint2(listint_t **head)
{
	listint_t *new;

	if (head == NULL)
		return;

	while (*head)
	{
		new = (*head)->next;
		free(*head);
		*head = new;
	}
	*head = NULL;
}
