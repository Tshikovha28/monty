#include "monty.h"
/**
 * f_print_top - prints the top element of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_print_top(stack_t **head, unsigned int counter)
{
    if (*head == NULL)
    {
        fprintf(stderr, "L%u: can't print top, stack empty\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }
    printf("%d\n", (*head)->n);
}
