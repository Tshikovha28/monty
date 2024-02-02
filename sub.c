#include "monty.h"
/**
  * f_subtract - subtraction operation
  * @head: stack head
  * @counter: line_number
  * Return: no return
 */
void f_subtract(stack_t **head, unsigned int counter)
{
    stack_t *aux;
    int result, nodes;

    aux = *head;
    for (nodes = 0; aux != NULL; nodes++)
        aux = aux->next;
    if (nodes < 2)
    {
        fprintf(stderr, "L%d: can't subtract, stack too short\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }
    aux = *head;
    result = aux->next->n - aux->n;
    aux->next->n = result;
    *head = aux->next;
    free(aux);
}
