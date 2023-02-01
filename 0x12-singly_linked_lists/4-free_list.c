#include "lists.h"
/**
* free_list - frees a list
* @head: head of linked list
* Return: Nothing.
*/
void free_list(list_t *head)
{
	list_t *ptr;

	while ((ptr = head) != NULL)
	{
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
