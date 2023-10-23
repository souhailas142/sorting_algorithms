#include "sort.h"
/**
 * swap_nodes - swap two nodes
 * @node_a : node a
 * @node_b : node b
 */
void swap_nodes(listint_t *node_a, listint_t *node_b)
{
	if (node_a->prev)
		node_a->prev->next = node_b;
	if (node_b->next)
		node_b->next->prev = node_a;
	node_a->next = node_b->next;
	node_b->prev = node_a->prev;
	node_a->prev = node_b;
	node_b->next = node_a;
}
/**
 * insertion_sort_list - insertion sort doubly linked list
 * @list: doubly liked list
 */
void	insertion_sort_list(listint_t **list)
{
	listint_t *head;
	listint_t *tmp;

	if (!list || !(*list) || !(*list)->next)
		return;
	head = (*list)->next;
	while (head)
	{
		tmp = head;
		while (tmp && tmp->prev)
		{
			if (tmp->prev->n > tmp->n)
			{
				swap_nodes(tmp->prev, tmp);
				if (!tmp->prev)
					*list = tmp;
				print_list(*list);
			}
			else
				tmp = tmp->prev;
		}
		head = head->next;
	}
}
