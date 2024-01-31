/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_dnode_at_index.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 09:00:55 by khalid            #+#    #+#             */
/*   Updated: 2024/01/30 11:13:50 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	delete_dnodeint_at_index(dlistint_t **h, unsigned int index)
{
	dlistint_t *head;
	dlistint_t *pre;
	unsigned int i;

	head = *h;
	pre = head;
	/* checking is the list is empty */
	if (head == NULL || h == NULL)
		return (-1);
	i = 0;
	while (head != NULL)
	{
		if (i == index)
		{
			/* deleting hte fist node */
			if (head->prev == NULL)
			{
				*h = head->next;
				head->next->prev = NULL;
				head->next = NULL;
				free(head);
			}
            /* deleting last node */
			else if (head->next == NULL)
			{
                head->prev->next = NULL;
				head->prev = NULL;
				free(head);
			}
			else
			{
				pre->next = head->next;
				(head->next)->prev = pre;
				head->prev = NULL;
				free(head);
			}
			return (1);
		}
		pre = head;
		head = head->next;
	}
	return (-1);
}