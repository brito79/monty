#include "monty.h"

void push_func(stack_t **head, unsigned int l_number);

/**
* push_func - The function to add a node in stuck
* @head: The pointer to the header ot the stuck
* @l_number: The line being executed at the moment
*
* Return: void
*/

void push_func(stack_t **head, unsigned int l_number)
{
int value;
int i;
int fflag = 0;

if (tray.argument)
{
if (tray.argument[0] == '-')
{
i++;
}
while (tray.argument[i] != '\0')
{
if (tray.argument[i] > 57 || tray.argument[i] < 48)
{
fflag = 1;
}
i++;
}
if (fflag == 1)
{
fprintf(stderr, "L%d : usage: push integer\n", l_number);
fclose(tray.file);
free(tray.content);
stuck_free_func(*head);
exit(EXIT_FAILURE);
}
}
else
{
fprintf(stderr, "L %d : usage: push integer\n", l_number);
fclose(tray.file);
free(tray.content);
stuck_free_func(*head);
exit(EXIT_FAILURE);
}
value = atoi(tray.argument);
if (tray.ff == 0)
{
_add_node(head, value);
}
else
{
_add_queue(head, value);
}
}
