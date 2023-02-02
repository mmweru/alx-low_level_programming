#include "lists.h"
/**
* sum_listint - returns a sum of
* all the data
* @head: pointer to the first node
* Return: sum of all data
* if empty return 0.
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
