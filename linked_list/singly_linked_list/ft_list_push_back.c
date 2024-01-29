/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:56:40 by khalid            #+#    #+#             */
/*   Updated: 2024/01/29 12:26:09 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *node;
	t_list *last;

	node = ft_create_elem(data);
	if (node == NULL)
		return ;
	last = ft_list_last(*begin_list);
	if (last == NULL)
		*begin_list = node;
	else
		last->next = node;
}