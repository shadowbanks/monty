#include "monty.h"

/**
 * rotl - Move the data at the top to the bottom
 * @stack: pointer to a stack
 * @line_num: Line the command was found
 */
void rotl(s_node *stack, unsigned int line_num)
{
	s_node temp = NULL;
	int nodes = 0;

	(void)line_num;
	nodes = node_count();
	if (my_node->current == NULL || nodes == 1)
		return;

	temp = my_node->current->next;
	(*stack)->next = my_node->current;
	my_node->current->prev = *stack;
	my_node->current->next = NULL;
	temp->prev = NULL;
	*stack = my_node->current;
	my_node->head = *stack;
	my_node->current = temp;
}
