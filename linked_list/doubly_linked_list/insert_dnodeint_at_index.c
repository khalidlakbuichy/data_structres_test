/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_dnodeint_at_index.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:13:06 by khalid            #+#    #+#             */
/*   Updated: 2024/01/30 11:20:18 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

dlistint_t	*insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node;
	dlistint_t *head;
	int i;

	node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->next = NULL;
	node->prev = NULL;
	node->n = n;
	head = *h;

	i = 0;
	while (head != NULL)
	{
		if (i == idx)
		{
			if (head->next == NULL)
				add_dnodeint_end(h, n);
			else
			{
				node->next = head;
				node->prev = head->prev;
				head->prev = node;
				head->prev->next = node;
				return (node);
			}
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
