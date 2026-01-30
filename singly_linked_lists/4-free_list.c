#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to the first node of the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;   /* save next node */
		free(head->str);     /* free the string */
		free(head);          /* free the node itself */
		head = temp;         /* move to next node */
	}
}
