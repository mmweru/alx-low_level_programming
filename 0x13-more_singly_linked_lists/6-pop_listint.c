#include "lists.h"
/**
* pop_listint - deletes head node
* @head: pointer to the head
* Return: always 0
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int head_data;

	if (!head || !*head)
		return (0);
	head_data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (head_data);
}
