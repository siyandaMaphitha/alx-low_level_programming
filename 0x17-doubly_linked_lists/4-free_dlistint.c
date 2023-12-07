#include "lists.h"
/**
 * free_dlistint - function that frees alist.
 * @head: pointer to head in fucntion
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
