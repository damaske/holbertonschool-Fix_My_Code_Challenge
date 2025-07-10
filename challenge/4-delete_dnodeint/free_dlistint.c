#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a doubly linked list
 * @head: The pointer to the head of the doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *tmp;

    while (head != NULL)
    {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}
