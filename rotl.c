#include "monty.h"

/**
 * rotl - Move the data at the top to the bottom
 * @stack: pointer to a stack
 * @line_num: Line the command was found
 */
void rotl(s_node *stack, unsigned int line_num)
{
	s_node temp = NULL;

	(void)line_num;
	if (my_node->current == NULL)
		return;

	(*stack)->next = my_node->current;
	temp = my_node->current->next;
	temp->prev = NULL;
	my_node->current->next = NULL;
	*stack = my_node->current;
	my_node->current = temp;
}
