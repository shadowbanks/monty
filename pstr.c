#include "monty.h"

/**
 * pstr - Print all the element of a stack as a string
 * @stack: Pointer to a stack
 * @line_num: Line number the command is
 */
void pstr(s_node *stack, unsigned int line_num)
{
	s_node temp = NULL;
	int num = 0;

	(void)line_num;
	(void)stack;

	if (my_node->current == NULL)
	{
		printf("\n");
		return;
	}

	temp = my_node->current;

	while (temp)
	{
		num = temp->n;
		if (num > 0)
		{
			if (!_isascii(num))
				printf("%c", num);
			else
			{
				break;
			}
		}
		else
		{
			break;
		}
		temp = temp->next;
	}
	printf("\n");
}
