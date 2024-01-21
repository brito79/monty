#include "monty.h"
/**
*rotl_func- rotates the stack to the top
*@head: stack head
*@l_number: line_number
*Return: no return
*/
void rotl_func(stack_t **head,  __attribute__((unused)) unsigned int l_number)
{
stack_t *tmp = *head, *result_aux;

if (*head == NULL || (*head)->next == NULL)
{
return;
}
result_aux = (*head)->next;
result_aux->prev = NULL;

while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = *head;
(*head)->next = NULL;
(*head)->prev = tmp;
(*head) = result_aux;
}

