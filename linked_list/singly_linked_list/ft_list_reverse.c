/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:26:06 by khalid            #+#    #+#             */
/*   Updated: 2024/01/29 12:19:38 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *pre;
	t_list *next;
	t_list *head;

	pre = NULL;
	next = NULL;
	head = *begin_list;
	while (head != NULL)
	{
		next = head->next;
		head->next = pre;
		pre = head;
		head = next;
	}
}