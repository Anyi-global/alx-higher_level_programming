#include <stdio.h>
#include "lists.h"

/**
 * check_cycle - a function that checks if a singly linked list has a cycle
 * in it
 * @list: the list to be checked
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *nxt_node, *n_nxt_node;

	if (list == NULL || list->next == NULL)
		return (0);

	nxt_node = list->next;
	n_nxt_node = list->next->next;

	while (nxt_node && n_nxt_node && n_nxt_node->next)
	{
		if (nxt_node == n_nxt_node)
			return (1);

		nxt_node = nxt_node->next;
		n_nxt_node = n_nxt_node->next->next;
	}

	return (0);
}
