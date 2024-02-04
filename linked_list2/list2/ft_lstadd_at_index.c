/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_at_index.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:03:28 by khalid            #+#    #+#             */
/*   Updated: 2024/02/04 10:25:53 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

bool	ft_lstadd_at_index(t_list **lst, t_list *new, unsigned int index)
{
	t_list	*head;
	int		i;

	if (lst == NULL || new == NULL)
		return (false);
	if (index == 0)
		return(ft_lstadd_front(lst, new));
	i = 0;
	while (head != NULL)
	{
		if (i == index)
		{
			new->prev = head->prev;
			new->next = head;
			head->prev = new;
			head->prev->next = new;
			return (true);
		}
		head = head->next;
		i++;
	}
	return (false);
}
