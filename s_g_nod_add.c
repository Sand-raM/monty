#include "monty.h"

/**
 * nod_add - a func that add node to the head stack
 * @hd: head of the stack
 * @n: a value
 * Return: nothing to be returned
*/
void nod_add(stack_t **hd, int n)
{

	stack_t *newnode, *auxi;

	auxi = *hd;
	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
	{ printf("Error\n");
		exit(0); }
	if (auxi)
		auxi->prev = newnode;
	newnode->n = n;
	newnode->next = *hd;
	newnode->prev = NULL;
	*hd = newnode;
}
