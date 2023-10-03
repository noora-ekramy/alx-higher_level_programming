#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * check_cycle - checks if a linked list contains a cycle
 * @list: linked list to check
 *
 * Return: 1 if the list has a cycle, 0 if it doesn't
 */
int check_cycle(listint_t *list)
{
	listint_t *one_step = list;
	listint_t *tow_steps = list;

	if (!list)
		return (0);
	while (tow_steps && tow_steps->next)
	{
		one_step = one_step->next;
		tow_steps = tow_steps->next->next;

		if (one_step == tow_steps)
			return (1);
	}
	return (0);
}
