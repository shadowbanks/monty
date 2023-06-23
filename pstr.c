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
		free_close();
	}

	temp = my_node->current;

	while (temp)
	{
		num = temp->n;
		if (num > 0)
		{
			if (!isascii(num))
				printf("%c", num);
			else
			{
				printf("\n");
				break;
			}
		}
		else
		{
			printf("\n");
			break;
		}
		temp = temp->next;
	}
}
