#include "lists.h"

/**
 * pop_listsint - Deletes the head node of a listint_t list.
 * @head: A pointer to the address of the 
 * head of the listint_t list.
 *
 * Return: if the linked list is empty - 0.
 * otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
listint_t *tmp;
int ret;
if (head == NULL)
return (0);
tmp = *head;
ret = (*head)->n;
*head = (*head)->nest;
free(tmp);
return (ret);
}
