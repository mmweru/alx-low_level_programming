#include "lists.h"
/**
* free_listint - frees a list
* @head: pointer to 1st element
* Return: Nothing.
*/
void free_listint(listint_t *head)
{
	listint_t *new;

	while (head)
	{
		new = head->next;
		free(head);
		head = new;
	}
}
