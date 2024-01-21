#include "monty.h"
/**
 * pstr_func - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @l_number: line_number
 * Return: no return
*/
void pstr_func(stack_t **head, unsigned int l_number)
{
	stack_t *temp;
	(void)l_number;

	temp = *head;
	while (temp)
	{
		if (temp->n > 127 || temp->n <= 0)
		{
			break;
		}
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}

