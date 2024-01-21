#include "monty.h"
/**
  *rotr_func- rotates the stack to the bottom
  *@head: stack head
  *@l_number: line_number
  *Return: no return
 */
void rotr_func(stack_t **head, __attribute__((unused)) unsigned int l_number)
{
	stack_t *dublicate;

	dublicate = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (dublicate->next)
	{
		dublicate = dublicate->next;
	}
	dublicate->next = *head;
	dublicate->prev->next = NULL;
	dublicate->prev = NULL;
	(*head)->prev = dublicate;
	(*head) = dublicate;
}

