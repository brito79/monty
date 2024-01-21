#include "monty.h"
/**
  *sub_func- subtration of stack value
  *@head: Stack head
  *@l_number: line number under execution
  *Return: no value
 */
void sub_func(stack_t **head, unsigned int l_number)
{
	stack_t *temp;
	int result, node;

	temp = *head;
	for (node = 0; temp != NULL; node++)
		temp = temp->next;
	if (node < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", l_number);
		fclose(tray.file);
		free(tray.content);
		stack_free_func(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	result = temp->next->n - temp->n;
	temp->next->n = result;
	*head = temp->next;
	free(temp);
}

