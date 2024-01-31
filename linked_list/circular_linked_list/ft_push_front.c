/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_front.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:48:15 by khalid            #+#    #+#             */
/*   Updated: 2024/01/30 11:55:53 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_push_front(t_list *tail, void *data)
{
	t_list *node;

	node = ft_create_node(data);
	if (node == NULL)
		return (NULL);
	node->next = tail->next;
	tail->next = node;
}