#include "monty.h"
/**
 * mul_func - multiplies the top two elements of the stack.
 * @head: stack head
 * @l_number: line_number
 * Return: no return
*/
void mul_func(stack_t **head, unsigned int l_number)
{
	stack_t *temp;
	int len = 0, result_aux;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", l_number);
		fclose(tray.file);
		free(tray.content);
		stack_free_func(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	result_aux = temp->next->n * temp->n;
	temp->next->n = result_aux;
	*head = temp->next;
	free(temp);
}

