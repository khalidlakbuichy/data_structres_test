/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:25:57 by khalid            #+#    #+#             */
/*   Updated: 2024/02/01 11:25:59 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

void	ft_lstdel_front(t_list **lst, void (*del)(void *))
{
	t_list *head;

	if (lst == NULL || *lst == NULL)
		return ;
	head = *lst;
    *lst = (*lst)->next;
	del(head->content);
	head->next = NULL;
    free(head);
}