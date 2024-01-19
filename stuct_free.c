#include "monty.h"

/**
* stack_free_func - Frees the doubly linked list
* @head: The pointer to the linked list
*/
void stack_free_func(stack_t *head)
{
stack_t *temp;

temp = head;

while (temp)
{
temp = head->next;
free(head);
head = temp;
}
}


