/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:25:47 by khalid            #+#    #+#             */
/*   Updated: 2024/02/01 11:25:50 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_lst.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*head;
	t_list	*pre;

	if (lst == NULL || (*lst) == NULL || del == NULL)
		return ;
	head = *lst;
	while (head != NULL)
	{
		pre = head;
		del(head->content);
		head = head->next;
		pre->next = NULL;
		free(pre);
	}
	*lst = NULL;
}
