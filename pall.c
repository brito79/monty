#include "monty.h"
/**
* pall_func - The pall function implentation
* @l_number: The line number being executed
* @head: pointer to the first list(stack)
* Return: void
*/
void pall_func(stack_t **head, unsigned int l_number)
{
stack_t *top;

top = *head;
(void)l_number;

if (head == NULL)
{
return;
}
while (top != NULL)
{
printf("%d\n", top->n);
top = top->next;
}
}

