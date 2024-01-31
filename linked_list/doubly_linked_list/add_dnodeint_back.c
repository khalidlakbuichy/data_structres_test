/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_dnodeint_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:24:37 by khalid            #+#    #+#             */
/*   Updated: 2024/01/30 10:45:56 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

dlistint_t	*add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *curr;

	curr = *head;
	/* creating the new node */
	node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	/* assing values to the created node */
	node->n = n;
	node->next = NULL;
	/* if the list is empty */
	if (curr == NULL)
	{
		node->prev = NULL;
		*head = node;
	}
	else
	{
		/* getting the last element from the list */
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = node;
		node->prev = curr;
	}
	return (node);
}