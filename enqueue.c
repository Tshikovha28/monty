#include "monty.h"
/**
 * f_enqueue - switches the stack mode to queue mode
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_enqueue(stack_t **head, unsigned int counter)
{
    (void)head;
    (void)counter;
    bus.lifi = 1;
}

/**
 * add_to_queue - adds a node to the tail of the queue
 * @n: new_value
 * @head: head of the queue
 * Return: no return
*/
void add_to_queue(stack_t **head, int n)
{
    stack_t *new_node, *aux;

    aux = *head;
    new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }
    new_node->n = n;
    new_node->next = NULL;
    if (aux)
    {
        while (aux->next)
            aux = aux->next;
    }
    if (!aux)
    {
        *head = new_node;
        new_node->prev = NULL;
    }
    else
    {
        aux->next = new_node;
        new_node->prev = aux;
    }
}

