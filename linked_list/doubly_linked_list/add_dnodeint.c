/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_dnodeint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:59:40 by khalid            #+#    #+#             */
/*   Updated: 2024/01/30 10:39:08 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

dlistint_t	*add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t	*node;

	node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->prev = NULL;
	node->n = n;
    node->next = *head;
	if (*head != NULL)
		(*head)->prev = node;
	*head = node;
	return (node);
}
