/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_search_item.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:27:12 by khalid            #+#    #+#             */
/*   Updated: 2024/02/01 11:42:51 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

void	*ft_lst_searh_item(t_list *lst, void *ref, int (*cmp)())
{
	if (lst == NULL || cmp == NULL)
		return (NULL);
	while (lst != NULL)
	{
		if (cmp(ref, lst->content) == 0)
			return (lst->content);
		lst = lst->next;
	}
	return (NULL);
}