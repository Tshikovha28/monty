#include "monty.h"
/**
 * f_rotate_to_top - rotates the stack to the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_rotate_to_top(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
    stack_t *tmp = *head, *aux;

    if (*head == NULL || (*head)->next == NULL)
    {
        return;
    }
    aux = (*head)->next;
    aux->prev = NULL;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = *head;
    (*head)->next = NULL;
    (*head)->prev = tmp;
    (*head) = aux;
}
