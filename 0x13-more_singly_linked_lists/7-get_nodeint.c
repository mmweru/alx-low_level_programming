#include "lists.h"
/**
* get_nodeint_at_index - return the
* nth node of a list
* @head: pointer to the first element
* @index: index of 1st node
* Return: 0 or NULL.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
