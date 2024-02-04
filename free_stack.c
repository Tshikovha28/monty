#include "monty.h"

/**
* free_stack - frees a doubly linked list
* @head: head of the stack
*/
void free_stack(stack_t *head)
{
	stack_t *current_node;

	current_node = head;
	while (current_node)
	{
		stack_t *temp = current_node->next;
		free(current_node);
		current_node = temp;
	}
}
