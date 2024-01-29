/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:39:41 by khalid            #+#    #+#             */
/*   Updated: 2024/01/29 10:44:28 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *node;

	node = ft_create_elem(data);
	if (node == NULL)
		return ;
	if (*begin_list == NULL)
		*begin_list = node;
	else
	{
		node->next = *begin_list;
		*begin_list = node;
	}
}