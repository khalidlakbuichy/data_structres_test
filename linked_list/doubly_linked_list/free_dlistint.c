/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_dlistint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:29:43 by khalid            #+#    #+#             */
/*   Updated: 2024/01/29 15:32:25 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	free_dlistint(dlistint_t *head)
{
	dlistint_t *pre;

	while (head != NULL)
	{
		pre = head;
		head = head->next;
		pre->prev = NULL;
		pre->next = NULL;
		free(pre);
	}
}